class Farm : Default
{
	zombieChance = 0.3;
	maxRoaming = 3;
	zombieClass[] = {"zZombie_Base","z_hunter","z_hunter","z_hunter","z_villager1","z_villager2","z_villager3","z_new_villager2","z_new_villager3","z_new_villager4"};
	lootChance = 0.5;
	lootGroup = Farm;
};

class Land_stodola_old_open: Farm {
	zedPos[] = {{-2.58887,-5.9209,-5.08057},{-3.06787,8.63086,-5.08057},{2.52539,10.5234,-5.08044},{4.11035,-10.9307,-5.07043},{-2.62793,-6.55762,-0.99585},{-2.79443,10.2344,-0.993469},{4.62646,10.498,-0.993408},{4.76807,5.00781,-0.993408},{0.749023,-10.5703,2.96448},{1.09131,10.6787,2.96448}};
	lootPos[] = {{-3.06787,8.63086,-5.08057},{2.52539,10.5234,-5.08044},{4.76807,5.00781,-0.993408},{-2.79443,10.2344,-0.993469},{4.62646,10.498,-0.993408},{1.09131,10.6787,2.96448},{-2.58887,-5.9209,-5.08057},{4.11035,-10.9307,-5.07043},{-2.62793,-6.55762,-0.99585},{0.749023,-10.5703,2.96448}};
};

class Land_Farm_Cowshed_a: Farm {
	zedPos[] = {{7.87988,2.94141,-3.08789},{9.74023,-2.48633,-3.08771},{-1.06836,-5.92188,-3.08765},{-1.32764,5.61426,-3.08765},{2.88428,-2.34473,-3.08765},{4.81982,5.72852,-3.08765},{8.83936,-5.60254,-3.06757}};
	lootPos[] = {{-1.06836,-5.92188,-3.08765},{8.83936,-5.60254,-3.06757},{9.74023,-2.48633,-3.08771},{2.88428,-2.34473,-3.08765},{7.87988,2.94141,-3.08789},{4.81982,5.72852,-3.08765},{-1.32764,5.61426,-3.08765}};
};

class Land_stodola_open: Farm {
	zedPos[] = {{-2.58228,-0.526367,-4.17346},{-0.0480957,-4.88965,-4.13593},{-2.60376,5.31641,-4.12805},{0.98291,6.20508,-4.11121}};
	lootPos[] = {{-2.60376,5.31641,-4.12805},{-2.58228,-0.526367,-4.17346},{-0.0480957,-4.88965,-4.13593},{0.98291,6.20508,-4.11121}};
};

class Land_Barn_W_01: Farm {
	zedPos[] = {{5.78711,18.9463,-2.62683},{-4.4646,16.665,-2.61633},{4.93188,-17.0469,-2.59064},{-3.82788,-18.6699,-2.59021},{-2.99072,-4.16992,-2.58276},{3.95435,4.88379,-2.57434}};
	lootPos[] = {{4.93188,-17.0469,-2.59064},{-3.82788,-18.6699,-2.59021},{-4.4646,16.665,-2.61633},{5.78711,18.9463,-2.62683},{3.95435,4.88379,-2.57434},{-2.99072,-4.16992,-2.58276}};
};

class Land_Barn_W_02: Farm {
	zedPos[] = {{3.35938,-0.151367,-2.31305},{-2.84351,0.213867,-2.31177},{-2.94604,-5.01465,-2.28998},{2.53711,-5.89258,-2.28949},{3.16479,5.56543,-2.28406},{-5.63306,4.83105,-2.26355}};
	lootPos[] = {{3.17,5.57,-2.28},{2.54,-5.89,-2.29},{-2.84,0.21,-2.31},{-5.63,4.83,-2.26},{-0.21,3.44,-2.31},{-0.74,-5.93,-2.31}};
};

class Land_Farm_Cowshed_c: Farm {
	zedPos[] = {{-2.41504,2.98633,-3.12582}};	
	lootPos[] = {{-2.41504,2.98633,-3.12582}};	
};

class Land_Farm_Cowshed_b: Farm {
	zedPos[] = {{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106},{4.68506,2.18945,-3.04105}};
	lootPos[] = {{4.68506,2.18945,-3.04105},{0.0620117,0.0517578,-3.11111},{-4.77441,-2.4834,-3.05106}};
};

class Land_Shed_W02: Farm {
	maxRoaming = 0;
	zedPos[] = {{0.688232,1.88281,-0.00292969}};
	lootPos[] = {{0.688232,1.88281,-0.00292969}};
};