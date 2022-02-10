class CfgPatches
{
	class smokymountains
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Surfaces","DZ_Surfaces_Bliss"};
		author="PackJC";
		name="smokymountains";
		url="www.github.com/packjc";
	};
};
class CfgWorlds
{
	class DefaultLighting;
	class CAWorld;
	class ChernarusPlus: CAWorld
	{
		class Grid;
	};
	class smokymountains: ChernarusPlus
	{
		worldId=2;
		cutscenes[]={};
		description="smokymountains";
		icon="";
		worldName="smokymountains\smokymountains.wrp";
		pictureMap="";
		pictureShot="";
		oceanMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanNiceMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		oceanStormMaterial="{11D1156E1D9DADF0}Graphics/Materials/water/oceanold_samplemap.emat";
		class Navmesh
		{
			navmeshName = "\DZ\worlds\chernarusplus\navmesh\navmesh.nm";
			//navmeshName="smokymountains\navmesh\navmesh.nm";
			class GenParams
			{
				tileWidth=50;
				cellSize1=0.25;
				cellSize2=0.1;
				cellSize3=0.1;
				class Agent
				{
					diameter=0.60000002;
					standHeight=1.5;
					crouchHeight=1;
					proneHeight=0.5;
					maxStepHeight=0.40000001;
					maxSlope=70;
				};
				class Links
				{
					class JumpShort
					{
						jumpLength=1.2;
						jumpHeight=1.25;
						jumpDropdownMin=0;
						jumpDropdownMax=0;
						areaType="jump";
						flags[]=
						{
							"jumpOver"
						};
					};
				};
			};
		};
		plateFormat="ML$ - #####";
		plateLetters="ABCDEGHIKLMNOPRSTVXZ";
		longitude=-40;
		latitude=-40;
		class AISpawnerParams
		{
		};
		class OutsideTerrain
		{
			satellite="DZ\rocks\Data\MainTextures\terrain\cp_gravel_co.paa";
			enableTerrainSynth="true";
			class Layers
			{
				class Layer0
				{
					nopx="DZ\surfaces\data\terrain\cp_gravel_nopx.paa";
					texture="DZ\surfaces\data\terrain\cp_gravel_ca.paa";
				};
			};
		};
		class Grid: Grid
		{
			offsetX=20000;
			offsetY=-20000;
			class Zoom1
			{
				zoomMax=0.5;
				format="XY";
				formatX="Aa";
				formatY="00";
				stepX=200;
				stepY=200;
			};
			class Zoom2
			{
				zoomMax=1e+030;
				format="XY";
				formatX="A";
				formatY="0";
				stepX=2000;
				stepY=2000;
			};
		};
		startTime="8:30";
		startDate="01/05/1985";
		startWeather=0.1;
		startFog=0;
		forecastWeather=0.30000001;
		forecastFog=0;
		seagullPos[]={1272.842,150,14034.962};
		centerPosition[]={5500,5500,5300};
		ilsPosition[]={2545,3000};
		ilsDirection[]={0,0.079999998,1};
		ilsTaxiIn[]={2495,2725,2495,2850,2508,2860,2508,3000,2520,3010,2545,3000};
		ilsTaxiOff[]={2545,2445,2520,2425,2495,2445,2495,2725};
		drawTaxiway="false";
		class ReplaceObjects
		{
		};
		class Sounds
		{
			sounds[]={};
		};
		class Animation
		{
			vehicles[]={};
		};
		class Lighting: DefaultLighting
		{
		};
		clutterGrid=1.11;
		clutterDist=55;
		noDetailDist=40;
		fullDetailDist=5;
		minTreesInForestSquare=3;
		minRocksInRockSquare=4;
		class Subdivision
		{
			class Fractal
			{
				rougness=5;
				maxRoad=0.02;
				maxTrack=0.5;
				maxSlopeFactor=0.050000001;
			};
			class WhiteNoise
			{
				rougness=2;
				maxRoad=0.0099999998;
				maxTrack=0.050000001;
				maxSlopeFactor=0.0024999999;
			};
			minY=-0;
			minSlope=0.02;
		};
		class Ambient
		{
		};
		class Names
		{
		};
	};
};
class CfgWorldList
{
	class smokymountains
	{
	};
};
