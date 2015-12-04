call constants.bat

rem ----------- compile a single PBO -----------
if [%1] gtr [] (

	echo compiling %1

	rem compile the PBO and deploy it to the client
	%tools%\cpbo.exe -y -p %clientSource%\PBOs\%1                                    %clientDeploy%\@%ModName%\addons\%1.pbo
	%tools%\DSSignFile.exe %keyFiles%\%modName%.biprivatekey                         %clientDeploy%\@%ModName%\addons\%1.pbo

	rem copy it to the server as well
	copy                   %clientDeploy%\@%ModName%\addons\%1.pbo                   %serverDeploy%\@%ModName%\addons\%1.pbo
	copy                   %clientDeploy%\@%ModName%\addons\%1.pbo.%ModName%.bisign  %serverDeploy%\@%ModName%\addons\%1.pbo.%ModName%.bisign

rem ----------- compile all PBOs -----------
) else (

	echo compiling all

	rem stop the server service
	rem sc \\192.168.56.101 stop dayz-vanilla

	mkdir %clientDeploy%\@%modName%\addons
	mkdir %serverDeploy%\@%modName%\addons

	rem copy files from the root of the client dir (typically just license text files)
	copy %clientSource%\* %clientDeploy%\@%modName%
	copy %clientSource%\* %serverDeploy%\@%modName%

	rem compile and deploy all PBOs in the client directory
	for /f %%f in ('dir /b %clientSource%\PBOs\') do call build_client.bat %%f

	rem copy the client startup batch file
	copy %root%\startup_batch_files\start_client.bat %clientDeploy%

	rem restart the server service
	rem sc \\192.168.56.101 start dayz-vanilla

)