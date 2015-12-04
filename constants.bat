
set root=E:\games\dayz\source\DayZSahraniPvE

:: directory in which client code is located
set clientSource=%root%\client

:: directory of the server source
set serverSource=%root%\server

:: location of bohemia tools
set tools=%root%\BITools

:: location of the key files
set keyFiles=%root%\keys

:: location to deploy the client files
set clientDeploy=E:\games\dayz\clients\DayZSahraniPvE

:: location to deploy the server files
set serverDeploy=E:\games\dayz\servers\DayZSahraniPvE

:: the name of the directories into which the client and server PBOs will be placed
:: also, the name of the authority name for the bikey, so if you change this, you must use DSCreateKey to generate a new key
set modName=DayZ
set serverName=Hive
set configName=cfgdayz