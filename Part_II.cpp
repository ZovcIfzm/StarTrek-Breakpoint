
//////////////////
#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>

//Needed Begining Stuff
using namespace std;
//////////////////

//I see your looking at this fine code.
//Note known Errors that Need Fixing
//None

//Note known Errors that don't really need fixing but it would be good to fix
//None

int partII()
{
//Initializing the Variables
//Errors - None


	int hull;
	int shields;
	string skipPoints;
	int storyProgress;
	char input;
	storyProgress = 0;
	int karma;
	bool dl1;
	dl1 = false;
	bool dl2;
	dl2 = false;
	bool dl3;
	dl3 = false;
	bool dl4;
	dl4 = false;
	bool dl5;
	dl5 = false;
	bool dl6;
	dl6 = false;
	int popularity;
	popularity = 0;
	karma = 0;
	int AfleetNumber;
	int AfleetDamege;


	string shipPositionClass;


//Moved Secondary Initilization

//Reshuffling
//Extra Initialization
	int phasers;
	int torpedoes;
	int handWeapon;
	int credits;
	int shipSelection;
	int shipSelectionPre;
	int shipSelectionStageTwo;
	int shipSelectionStageTwoPre;
	int dodge;
	int dodgePre;

//Weapons

	int phaser1;
	int phaser2;
	int phaser3;
	int phaser4;
	int phaserPulse1;
	int photonTorpedoes;
	int quantumTorpedoes;

//Ship Specs

	int shipCost;
	int shipDodge;
	int scoutDodge;
	int cruiserDodge;
	int destroyerDodge;
	int battleshipDodge;
	int stationDodge = 999;
	string shipType;
	string shipClass;
	string shipName;

//Static Values
	phaser1 = 800;
	phaser2 = 1200;
	phaser3 = 1500;
	phaser4 = 2850;
	phaserPulse1 = 1000;
	photonTorpedoes = 800;
	quantumTorpedoes = 1500;
	scoutDodge = 2;
	cruiserDodge = 6;
	destroyerDodge = 4;
	battleshipDodge = 9;
	stationDodge = 999;

//Do Loop Bool
	bool a;
	bool b;
	bool c;
	bool d;
	bool e;
	bool f;
	bool g;
	a = false;
	b = false;
	c = false;
	d = false;
	e = false;
	f = false;
	g = false;
//Dodge Bool

//Ship Stats
	shipType = "unknown";
	shipClass = "unknown";
	shipName = "unknown";
	shields = 0;
	hull = 0;
	phasers = 0;
	torpedoes = 0;
//Personal Stats
	credits = 10000;
	karma = 0;
	popularity = 0;
	handWeapon = 0;



//Ships
//Federation

//Defiant Class

	int defiantCost;
	int defiantHull;
	int defiantShields;
	int defiantPhasers;
	int defiantDodge;
	int defiantTorpedoes;
	int defiantAIhp;
	shipType = "Destroyer";
	defiantCost = 12000;
	defiantDodge = destroyerDodge;
	defiantHull = 3000;
	defiantShields = 4500;	
	defiantPhasers = phaserPulse1;
	defiantTorpedoes = quantumTorpedoes;
	defiantAIhp = 7500;

//Nova Class

	int novaCost;
	int novaHull;
	int novaShields;
	int novaPhasers;
	int	novaTorpedoes;
	int novaDodge;
	int novaAIhp;
	shipType = "Scout";
	novaCost = 7000;
	novaHull = 1000;
	novaShields = 1500;
	novaPhasers = phaser1;
	novaTorpedoes = photonTorpedoes;
	novaDodge = scoutDodge;
	novaAIhp = 2500;

//Ambassador Class

	int ambassadorCost;
	int ambassadorHull;
	int ambassadorShields;
	int ambassadorPhasers;
	int	ambassadorTorpedoes;
	int ambassadorDodge;
	int ambassadorAIhp;
	shipType = "Cruiser";
	ambassadorCost = 20000;
	ambassadorHull = 3000;
	ambassadorShields = 7000;
	ambassadorPhasers = phaser3;
	ambassadorTorpedoes = photonTorpedoes;
	ambassadorDodge = cruiserDodge;
	ambassadorAIhp = 10000;

//Solvereign Class

	int solvereignCost;
	int solvereignHull;
	int solvereignShields;
	int solvereignPhasers;
	int solvereignTorpedoes;
	int solvereignDodge;
	int solvereignAIhp;
	shipType = "Battleship";
	solvereignCost = 40000;
	solvereignHull = 9000;
	solvereignShields = 16000;
	solvereignPhasers = phaser4;
	solvereignTorpedoes = quantumTorpedoes;
	solvereignDodge = battleshipDodge;
	solvereignAIhp = 25000;



//Klingon

//K'vort Class Klingon Fighter

	int kvortHull;
	int kvortShields;
	int kvortWeapons;
	kvortHull = 1000;
	kvortShields = 1500;
	kvortWeapons = 1200;

//D-7 Class Klingon Cruiser

	int d7Hull;
	int d7Shields;
	int d7Weapons;
	d7Hull = 2000;
	d7Shields = 3000;
	d7Weapons = 800;



//Simulator Enemy Ship
	int SenemyWeapons;
	int SenemyShields;
	int SenemyHull;
	SenemyWeapons = kvortWeapons;
	SenemyShields = kvortShields;
	SenemyHull = kvortHull;

	//Part I Ship
	shipType = "Cruiser";
	shipClass = "Ambassador";
	shields = 5000;
	hull = 3000;
	phasers = phaser3;
	torpedoes = photonTorpedoes;
	shipCost = 2500;
	shipDodge = cruiserDodge;
	int enemyHull;
	int enemyWeapons;
	int enemyShields;
	enemyHull = kvortHull;
	enemyWeapons = kvortWeapons;
	enemyShields = kvortShields;
//K'riath K'vort Class
	int kriathWeapons;
	int kriathShields;
	int kriathHull;
	kriathWeapons = kvortWeapons;
	kriathShields = kvortShields;
	kriathHull = kvortHull;

//Stations

//Federation

	int duriusStationWeapons;
	int duriusStationShields;
	int duriusStationHull;
	duriusStationWeapons = 3000;
	duriusStationShields = 75000;
	duriusStationHull = 25000;

//Klingon

	int stakStationWeapons;
	int stakStationShields;
	int stakStationHull;
	stakStationWeapons = 4000;
	stakStationShields = 40000;
	stakStationHull = 10000;

//AI Controlled Enemies
	
	int kratWeapons;
	int kratShields;
	int kratHull;
	kratWeapons = stakStationWeapons;
	kratShields = stakStationShields;
	kratHull = stakStationHull;
	
//Initilizing Ending 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x1));

//Intro
//Errors - None

	cout << "Star Trek Adventure" << endl;
	cout << "Part I - Prologue" << endl;
//Music Intro - Star Trek TNG Intro


	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x41));
	cout << endl;
	cout << "                |o  ______    _____      __      _____    o|                   " << endl;
	cout <<	"                |o  |           |       |  |     |    |   o|                   " << endl;
   	cout << "                |o  ------      |      |____|    -----|   o|                   " << endl;
	cout << "                |o        |     |      |    |    |     |  o|                   " << endl;
	cout << "                |o  ------      |      |    |    |     |  o|                   " << endl;
	cout << "                |o  _____   _____     _____   _     _     o|                   " << endl;
	cout << "                |o    |     |    |   |        |     |     o|                   " << endl;
	cout << "                |o    |     |----|   |_____   |___ |      o|                   " << endl;
	cout << "                |o    |     |     |  |        |    |      o|                   " << endl;
	cout << "                |o    |     |     |  |_____   |     |     o|                   " << endl;
	cout << endl;
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x41));

//Star Trek Intro Begining

	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	Beep(659,250);  // E
	Beep(523,250);  // C
	Beep(440,250);  // A
	Beep(587,250);  // D
	Beep(784,500);  // G

//Star Trek Intro Ending

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x91));
	cout << "Created by" << endl;
	cout << "*********************" << endl;
	cout << "___Swag Industries___" << endl;
	cout << "*********************" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x7));

//Swag Industries Intro Begining

	
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F


//End of SWAG INDUSTRIES Intro

	cout << endl;
	Sleep(1000);
	cout << "Written by Alex Ruan" << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << endl;
	cout << "Created by Alex Ruan" << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << endl;
	cout << "Awesomeness provided by Alex Ruan" << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << endl; 

//Instructions
//Errors - Make Slower
//Start Section Alpha
	
	cout << "Instructions" << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << endl;
	cout << "Yes or no questions will be answered by either a capital Yes or No." << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << "If given a choice between A B or C type the given letter in capital." << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << "If given a choice between different classes. Type the class fully." << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << "Example: Start? What you type: Yes." << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << "Example: Do you A.Say Swag B.Say Awesome or C. say Yolo. What you type: A." << endl;
	Beep(392,250);  // G
	Beep(523,125);  // C
	Beep(698,500);  // F
	cout << "Example: Nova, Avenger, or Breakpoint. What you type: Nova." << endl;
//Start
//Errors - None

	cout << "Start?" << endl;
	cin >> skipPoints;
	if (skipPoints == "Yes")
	{

		cout << "Star Trek Adventure" << endl;
		cout << "Part II - Where No One Has Gone Before" << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Beep(659,250);  // E
		Beep(523,250);  // C
		Beep(440,250);  // A
		Beep(587,250);  // D
		Beep(784,500);  // G
		cout << endl;
		cout << endl;



		Sleep(2000);
		cout << "5 Days After The Battle of Starbase 78" << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1000);
		cout << endl;
		cout << "Admiral Preston: Kevin, I promote you to Captain. And offer you your first command." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1000);
		cout << endl;
		cout << "Admiral Preston: Do you wish to take command of the Avenger, a Defiant class ship." << endl;
		cout << "Speciallizing in Evasive Manuvers and Combat." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1500);
		cout << endl;
		cout << "Admiral Preston: Do you wish to take command of the Solstace, a Nova class ship." << endl;
		cout << "Speciallizing in Evasive Manuvers, Warp Speed, and Science." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1500);
		cout << endl;
		cout << "Admiral Preston: Or do you wish to take command of the Breakpoint, a Ambassador class ship." << endl;
		cout << "Well rounded on Warp Speed, Combat, and Science, however has low manuverability." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1500);
		
	}
	if (true)
	{
		do
		{
			cout << "Avenger, Solstace, or Breakpoint?" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << endl;
			cout << endl;
			cin >> shipName;
			if(shipName == "Avenger")
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				shipType = "Destroyer";
				shipClass = "Defiant";
				shields = defiantShields;
				hull = defiantHull;
				phasers = defiantPhasers;
				torpedoes = defiantTorpedoes;
				shipCost = defiantCost;
				shipDodge = defiantDodge;
				dl6 = true;
			}
			else if(shipName == "Solstace")
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				shipType = "Scout";
				shipClass = "Nova";
				shields = novaShields;
				hull = novaHull;
				phasers = novaPhasers;
				torpedoes = novaTorpedoes;
				shipCost = novaCost;
				shipDodge = novaDodge;
				dl6 = true;
			}
			else if(shipName == "Breakpoint")
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				shipType = "Cruiser";
				shipClass = "Ambassador";
				shields = ambassadorShields;
				hull = ambassadorHull;
				phasers = ambassadorPhasers;
				torpedoes = ambassadorTorpedoes;
				shipCost = ambassadorCost;
				shipDodge = ambassadorDodge;
				dl6 = true;
			}
			else if(shipName == "EnterpriseE")
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				shipType = "Battleship";
				shipClass = "Solvereign";
				shields = solvereignShields;
				hull = solvereignHull;
				phasers = solvereignPhasers;
				torpedoes = solvereignTorpedoes;
				shipCost = solvereignCost;
				shipDodge = solvereignDodge;
				dl6 = true;
			}
		}while (!dl6);
		Sleep(1000);
		cout << "You have chosen the " << shipName << " a " << shipClass << " class starship." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1000);
		cout << "Lets test it in a simulator." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(2000);

		cout << "Klingon Destroyer K'riath, a K'vort class ship is approaching at high warp." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		a = false;
		
		do
			{
				cout << "A. Phasers B.Photons" << endl;
				cin >> input;
				if (input == 'A')
				{
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					

					srand(static_cast<unsigned int>(time(0)));
					dodgePre = rand();
					dodge = (dodgePre % shipDodge) + 1;
					if (dodge == 2)
					{
					
					if (shields > 1)
						{
							SenemyWeapons = 0;
							cout << "Dodged Attack" << endl;
						}
						else if (shields < 1)
						{
							SenemyWeapons = 0;
						cout << "Dodged Attack" << endl;
						}
					}
					if (SenemyShields < 1)
					{
						SenemyHull = SenemyHull - (phasers/2);
						

					}
					if (SenemyShields > 1)
					{
						SenemyShields = SenemyShields - phasers;
						
					}
					if (shields < 1)
					{
					hull = hull - SenemyWeapons;
					
					}
					if (shields > 1)
					{
					shields = shields - SenemyWeapons;
					
					}
					
					
					if (hull < 1)
					{
						cout << "Your ship exploded. Simulation Terminated" << endl;
						a = true;
					}
					if(SenemyHull < 1)
					{
						cout << "Enemy Destroyed!" << endl;
						a = true;
						SenemyHull = 0;
					}
					

					if(SenemyShields < 1)
					{
						cout << "Enemy Shields are Down!" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						SenemyShields = 0;
					}
					if (shields < 1)
					{
						cout << "Our Shields are Down" << endl;
					}
					cout << "_______________" << endl;
					cout << "Damege Dealt:" << phasers << endl;
					cout << endl;
					cout << endl;
					cout << "Enemy Stats" << endl;
					cout << endl;
					cout << "Enemy Hull:" << SenemyHull << endl;
					cout << "Enemy Shields:" << SenemyShields << endl;
					cout << endl;
					cout << endl;
					cout << "Stats" << endl;
					cout << endl;
					cout << "Hull:" << hull << endl;
					cout << "Shields:" << shields << endl;
					cout << endl;
					cout << endl;
					cout << "_______________" << endl;
					SenemyWeapons = kvortWeapons;
				}
				else if (input == 'B')
				{
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					

					srand(static_cast<unsigned int>(time(0)));
					dodgePre = rand();
					dodge = (dodgePre % shipDodge) + 1;
					if (dodge == 2)
					{
					
					if (shields > 1)
						{
							SenemyWeapons = 0;
							cout << "Dodged Attack" << endl;
						}
						else if (shields < 1)
						{
							SenemyWeapons = 0;
						cout << "Dodged Attack" << endl;
						}
					}
					if (SenemyShields < 1)
					{
						SenemyHull = SenemyHull - torpedoes;
						

					}
					if (SenemyShields > 1)
					{
						SenemyShields = SenemyShields - (torpedoes/2);
						
					}
					if (shields < 1)
					{
						hull = hull - SenemyWeapons;
						shields = 0;
					}
					if (shields > 1)
					{
						shields = shields - SenemyWeapons;
					}
					
					
					if (hull < 1)
					{
						cout << "Your ship exploded. Simulation Terminated" << endl;
						a = true;
						hull = 0;
					}
					if(SenemyHull < 1)
					{
						cout << "Enemy Destroyed!" << endl;
						a = true;
						SenemyHull = 0;
					}
					

					if(SenemyShields < 1)
					{
						cout << "Enemy Shields are Down!" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						SenemyShields = 0;
					}
					if (shields < 1)
					{
						cout << "Our Shields are Down" << endl;
					}
					cout << "_______________" << endl;
					if (kratShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << SenemyHull << endl;
						cout << "Enemy Shields:" << SenemyShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						SenemyWeapons = kvortWeapons;
						if (SenemyShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
				}
			}while(!a);
			if (true)
			{
				{
					
					if(shipName == "Avenger")
					{
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						shipType = "Destroyer";
						shipClass = "Defiant";
						shields = defiantShields;
						hull = defiantHull;
						phasers = defiantPhasers;
						torpedoes = defiantTorpedoes;
						shipCost = defiantCost;
						shipDodge = defiantDodge;
						dl6 = true;
					}
					else if(shipName == "Solstace")
					{
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						shipType = "Scout";
						shipClass = "Nova";
						shields = novaShields;
						hull = novaHull;
						phasers = novaPhasers;
						torpedoes = novaTorpedoes;
						shipCost = novaCost;
						shipDodge = novaDodge;
						dl6 = true;
					}
					else if(shipName == "Breakpoint")
					{
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						shipType = "Cruiser";
						shipClass = "Ambassador";
						shields = ambassadorShields;
						hull = ambassadorHull;
						phasers = ambassadorPhasers;
						torpedoes = ambassadorTorpedoes;
						shipCost = ambassadorCost;
						shipDodge = ambassadorDodge;
						dl6 = true;
					}
					else if(shipName == "EnterpriseE")
					{
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						shipType = "Battleship";
						shipClass = "Solvereign";
						shields = solvereignShields;
						hull = solvereignHull;
						phasers = solvereignPhasers;
						torpedoes = solvereignTorpedoes;
						shipCost = solvereignCost;
						shipDodge = solvereignDodge;
					}
				}
			}
			cout << "Nice match. However there is a situation and we have" << endl;
			cout << "mobilized a small task force at Tou Signa V" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "Will you join the attack force?" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << "A. Yes   B. No" << endl;
			cin >> input;
			if (input = 'A')
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				a = false;
				cout << "We will give you a makeshift crew for this mission." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Arriving at Tou Signa V" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Sir, We are detecting 4 other Federation ships combating" << endl;
				cout << "The Klingon Starbase." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				AfleetNumber = 4;
				do
				{
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
						
							if (shields > 1)
							{
								kratWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								kratWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
						

						if (kratShields < 1)
						{
							kratHull = kratHull - (phasers/2);
						}
						if (kratShields > 1)
						{
							kratShields = kratShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % AfleetNumber) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - kratWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - kratWeapons;
							}
						
						
							if (hull < 1)
							{
								cout << "Your ship exploded. Simulation Terminated" << endl;
								a = true;
								hull = 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 3) + 1;
							if (shipSelectionStageTwo == 2)
							{
								if (AfleetNumber > 0)
								{
									cout << "A Allied Ship has been destroyed!" << endl;
									AfleetNumber = AfleetNumber - 1;
									cout << "There are now " << AfleetNumber << " ships left!" << endl;
								}
							}
						}
						
						if (shields < 1)
						{
							cout << "Our Shields are Down" << endl;
						}
						if (true)
						{
							AfleetDamege = AfleetNumber * 1100; 
							if (kratShields < 1)
							{
								kratHull = kratHull - AfleetDamege;
							}
							if (kratShields > 1)
							{
								kratShields = kratShields - AfleetDamege;
							}
						}
						if(kratHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							kratHull = 0;
						}
						

						if(kratShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cout << endl;
							kratShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << kratHull << endl;
						cout << "Enemy Shields:" << kratShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						kratWeapons = stakStationWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
						
							if (shields > 1)
							{
								kratWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								kratWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (kratShields < 1)
						{
							kratHull = kratHull - torpedoes;
						}
						if (kratShields > 1)
						{
							kratShields = kratShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % AfleetNumber) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - kratWeapons;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - kratWeapons;					
							}
						
							
							if (hull < 1)
							{
								cout << "Your ship exploded. Simulation Terminated" << endl;
								a = true;
								hull = 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 3) + 1;
							if (shipSelectionStageTwo == 2)
							{
								if (AfleetNumber > 0)
								{
									cout << "A Allied Ship has been destroyed!" << endl;
									AfleetNumber = AfleetNumber - 1;
									cout << "There are now " << AfleetNumber << " ships left!" << endl;
								}
							}
						}
						
						if (shields < 1)
						{
							cout << "Our Shields are Down" << endl;
							shields = 0;
						}
						if (true)
						{
							AfleetDamege = AfleetNumber * 1100;
							if (kratShields < 1)
							{
								kratHull = kratHull - AfleetDamege;
							}
							if (kratShields > 1)
							{
								kratShields = kratShields - AfleetDamege;
							}
						}
						if(kratHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							kratHull = 0;
						}
						

						if(kratShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cout << endl;
							kratShields = 0;
						}
						cout << "_______________" << endl;
						if (kratShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << kratHull << endl;
						cout << "Enemy Shields:" << kratShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						kratWeapons = stakStationWeapons;
						if (kratShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
				cout << "Enemy Starbase Destroyed!" << endl;
				cout << "Mission Accomplished" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Beep(659,250);  // E
				Beep(523,250);  // C
				Beep(440,250);  // A
				Beep(587,250);  // D
				Beep(784,500);  // G
				if (true)
				{
					{
						
						if(shipName == "Avenger")
						{
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							shipType = "Destroyer";
							shipClass = "Defiant";
							shields = defiantShields;
							hull = defiantHull;
							phasers = defiantPhasers;
							torpedoes = defiantTorpedoes;
							shipCost = defiantCost;
							shipDodge = defiantDodge;
							dl6 = true;
						}
						else if(shipName == "Solstace")
						{
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							shipType = "Scout";
							shipClass = "Nova";
							shields = novaShields;
							hull = novaHull;
							phasers = novaPhasers;
							torpedoes = novaTorpedoes;
							shipCost = novaCost;
							shipDodge = novaDodge;
							dl6 = true;
						}
						else if(shipName == "Breakpoint")
						{
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							shipType = "Cruiser";
							shipClass = "Ambassador";
							shields = ambassadorShields;
							hull = ambassadorHull;
							phasers = ambassadorPhasers;
							torpedoes = ambassadorTorpedoes;
							shipCost = ambassadorCost;
							shipDodge = ambassadorDodge;
							dl6 = true;
						}
						else if(shipName == "EnterpriseE")
						{
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							shipType = "Battleship";
							shipClass = "Solvereign";
							shields = solvereignShields;
							hull = solvereignHull;
							phasers = solvereignPhasers;
							torpedoes = solvereignTorpedoes;
							shipCost = solvereignCost;
							shipDodge = solvereignDodge;
						}
					}
				}
			}
		}
		else if (skipPoints == "No")
		{
			cout << "Your desision." << endl;
		}
		else if (input = 'B')
		{
			cout << "Your desision." << endl;
		}
		

		cout << "End Credits" << endl;
		Sleep(1000);
		cout << "-----Extra Music-----" << endl;
		cout << endl;
		cout << "Fur Elise" << endl;
		cout << "Intro of Star Trek" << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Beep(659,250);  // E
		Beep(523,250);  // C
		Beep(440,250);  // A
		Beep(587,250);  // D
		Beep(784,500);  // G
		cout << endl;
		cout << endl;
		cout << "-----Story Writers-----" << endl;
		cout << endl;
		cout << "Alex Ruan" << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Beep(659,250);  // E
		Beep(523,250);  // C
		Beep(440,250);  // A
		Beep(587,250);  // D
		Beep(784,500);  // G
		cout << endl;
		cout << endl;
		cout << "-----Programmers-----" << endl;
		cout << endl;
		cout << "Alex Ruan" << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Beep(659,250);  // E
		Beep(523,250);  // C
		Beep(440,250);  // A
		Beep(587,250);  // D
		Beep(784,500);  // G
		cout << endl;
		cout << endl;
		cout << "-----Part Creation Time-----" << endl;
		cout << endl;
		cout << "15 Hours to make this part" << endl;
		cout << endl;
		cout << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Beep(659,250);  // E
		Beep(523,250);  // C
		Beep(440,250);  // A
		Beep(587,250);  // D
		Beep(784,500);  // G
		cout << endl;
		Sleep(2000);
		return 0;
}
//End of Story

