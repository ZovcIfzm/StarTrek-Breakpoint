//////////////////
#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
#include <Windows.h>
#include "storyfunctions.h"


//Needed Begining Stuff
using namespace std;
//////////////////

//I see your looking at this fine code.
//Note known Errors that Need Fixing
//None

//Note known Errors that don't really need fixing but it would be good to fix
//None

int partI()
{
	string skipPoints;
	int storyProgress = 0;
	char input;
	int karma = 0;
	bool dl1 = false;
	bool dl2 = false;
	bool dl3 = false;
	bool dl4 = false;
	bool dl5 = false;
	bool dl6 = false;
	bool dl7 = false;
	int popularity = 0;
	int AfleetNumber;
	int AfleetDamege;
	int alternates = 0;
	string answer;
	string shipPositionClass;
	char inputTwo;
	char choice;
	char finalChoice;

	string destinationOne = "-";
	string destinationTwo = "-";
	string destinationThree = "-";
	string destinationFour = "-";
	string destinationFive = "-";
	string destinationSix = "-";
	string destinationSeven = "-";
	string destinationEight = "-";
	string destinationNine = "-";
	string destinationTen = "-";


	int hull = 0;
	int shields = 0;

//Extra Initialization
	int phasers = 0;
	int torpedoes = 0;
	int handWeapon = 0;
	int credits = 10000;

	int shipSelection;
	int shipSelectionPre;
	int shipSelectionStageTwo;
	int shipSelectionStageTwoPre;
	int dodge;
	int dodgePre;

//Weapons

//Ship Specs

	int shipCost;
	int shipDodge;
	int scoutDodge = 2;
	int cruiserDodge = 6;
	int destroyerDodge = 4;
	int battleshipDodge = 9;
	int stationDodge = 999;
	string shipType;
	string shipClass;
	string shipName;

//Static Values

	int phaser1 = 800;
	int phaser2 = 1200;
	int phaser3 = 1500;
	int phaser4 = 2850;
	int phaserPulse1 = 1000;
	int photonTorpedoes = 800;
	int quantumTorpedoes = 1500;

//Klingon Static Values

	int poleronPhaser1 = 900;
	int poleronPhaser2 = 1400;
	int poleronPhaser3 = 2200;
	int klingonDisruptors1 = 1200;
	int klingonDisruptors2 = 1700;

//Romulan

	int plasmaPhaser = 800;
	int deredexHull = 2000;
	int deredexShields = 3000;
	int deredexWeapons = plasmaPhaser;


	int deHull = deredexHull;
	int deShields = deredexShields;
	int deWeapons = plasmaPhaser;
	int deFleet;

//Do Loop Bool
	bool a = false;
	bool b = false;
	bool c = false;
	bool d = false;
	bool e = false;
	bool f = false;
	bool g = false;
	bool partA = true;
	bool partB = true;
	bool partC = true;
	bool partD = true;
	bool partE = true;

//Dodge Bool

//Ship Stats
	shipType = "unknown";
	shipClass = "unknown";
	shipName = "unknown";



//Ships
//Federation

//Defiant Class
	shipType = "Destroyer";
	int defiantCost = 12000;
	int defiantDodge = destroyerDodge;
	int defiantHull = 3000;
	int defiantShields = 4500;
	int defiantPhasers = phaserPulse1;
	int defiantTorpedoes = quantumTorpedoes;
	int defiantAIhp = 7500;

//Nova Class
	shipType = "Scout";
	int novaCost = 7000;
	int novaHull = 1000;
	int novaShields = 1500;
	int novaPhasers = phaser1;
	int novaTorpedoes = photonTorpedoes;
	int novaDodge = scoutDodge;
	int novaAIhp = 2500;

//Ambassador Class
	shipType = "Cruiser";
	int ambassadorCost = 20000;
	int ambassadorHull = 3000;
	int ambassadorShields = 7000;
	int ambassadorPhasers = phaser3;
	int ambassadorTorpedoes = photonTorpedoes;
	int ambassadorDodge = cruiserDodge;
	int ambassadorAIhp = 10000;

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
	kvortWeapons = klingonDisruptors2;

//D-7 Class Klingon Cruiser
	int d7Hull;
	int d7Shields;
	int d7Weapons;
	d7Hull = 2000;
	d7Shields = 3000;
	d7Weapons = poleronPhaser1;

//Vorcha Class Klingon Cruiser
	int vorchaHull;
	int vorchaShields;
	int vorchaWeapons;
	vorchaHull = 4000;
	vorchaShields = 4000;
	vorchaWeapons = poleronPhaser2;

//Neg'var Class Klingon Battleship
	int negvarHull;
	int negvarShields;
	int negvarWeapons;
	negvarHull = 16000;
	negvarShields = 12000;
	negvarWeapons = poleronPhaser3;

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

//K'targ Vorcha Class
	int ktargWeapons;
	int ktargShields;
	int ktargHull;
	ktargWeapons = vorchaWeapons;
	ktargShields = vorchaShields;
	ktargHull = vorchaHull;

//T'reth
	int trethWeapons;
	int trethShields;
	int trethHull;
	trethWeapons = negvarWeapons;
	trethShields = negvarShields;
	trethHull = negvarHull;

//Stations
//Federation
	int duriusStationWeapons;
	int duriusStationShields;
	int duriusStationHull;
	duriusStationWeapons = 8500;
	duriusStationShields = 100000;
	duriusStationHull = 45000;

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

	int typhonBaseWeapons;
	int typhonBaseShields;
	int typhonBaseHull;
	typhonBaseWeapons = duriusStationWeapons;
	typhonBaseShields = duriusStationShields;
	typhonBaseHull = duriusStationHull;
		
//Initilizing Ending 
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x1));

//Intro
//Errors - None

	cout << "Star Trek Adventure" << endl;
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

	mainTritone();
	remainingTheme();

//Star Trek Intro Ending

	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x91));
	cout << "Created by" << endl;
	cout << "*********************" << endl;
	cout << "___Phoenix Industries___" << endl;
	cout << "*********************" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), (0x7));

//Swag Industries Intro Begining

		
	mainTritone();


//End of SWAG INDUSTRIES Intro

	cout << endl;
	textPause();
	cout << "Written by Alex Ruan" << endl;
	mainTritone();
	cout << endl;
	cout << "Created by Alex Ruan" << endl;
	mainTritone();
	cout << endl;

//Instructions
//Errors - Make Slower
//Start Section Alpha
		
	cout << "Instructions" << endl;
	mainTritone();
	cout << endl;
	cout << "Yes or no questions will be answered by either a capital Yes or No." << endl;
	mainTritone();
	cout << "If given a choice between A B or C type the given letter in capital." << endl;
	mainTritone();
	cout << "If given a choice between different classes. Type the class fully." << endl;
	mainTritone();
	cout << "Example: Start? What you type: Yes." << endl;
	mainTritone();
	cout << "Example: Do you A.Say Swag B.Say Awesome or C. say Yolo. What you type: A." << endl;
	mainTritone();
	cout << "Example: Nova, Avenger, or Breakpoint. What you type: Nova." << endl;
//Start
//Errors - None

	cout << "Starting" << endl;
	cout << "A. Yes B. No" << endl;
	cout << "Do you want to do the the tutorial mission?" << endl;
	cin >> input;
	if (input == 'B')
	{
		partA = false;
	}

	if (partA == true)
	{
		confirmationBeep();
		cout << "Part I - Tutorial" << endl;
		textPauseLong();
		cout << "You are Ensign Kevin Novatia" << endl;
		mainTritone();
		textPause();
		cout << "You are on Starbase 78 in the Lancardo Sector" << endl; 
		cout << "awaiting your first deep space assignment." << endl;
		mainTritone();
		Sleep(2000);
		cout << "The Stardate is 44253.8" << endl;
		mainTritone();
		Sleep(2000);
		cout << "Lets Begin" << endl;
		mainTritone();
		Sleep (2000);

//Screen Jump
//Errors - None
//Amount of Jump can be debated

		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		cout << endl;
		textPauseLong();

//Story Begining
//Alpha Section Alpha
//Errors - None
		if(true)
		{
		cout << "You awake on your bed and get up. You room is small and cubicle." << endl; 
		cout << "There is a door, a cabinet, your bed, and a calandar." << endl;
		mainTritone();
		textPauseLong();
		cout << "Do you A. Go back to sleep. B. Go out the door. C. Look in the cabinet." << endl;
		cout << "Or D. Look at your calendar." << endl;
		mainTritone();
		cin >> input;
		if (input == 'A'){		
			confirmationBeep();
			cout << "You go back to sleep." << endl;
			mainTritone();
			cout << endl;
			textPauseLong();
			cout << "You awake on your bed and get up. You room is small and cubicle. There is a door, a cabinet, your bed, and a calandar." << endl;
			cout << "Do you, B. Go out the door. C. Look in the cabinet. Or D. Look at your calendar." << endl;
			mainTritone();
			cout << endl;
			textPause();
			cin >> input;
			if (input == 'B'){
				confirmationBeep();
				cout << "You go out the door and you realize, you have no idea" << endl;
				cout << "what you are supposed to do. You go back inside your room." << endl;
				mainTritone();
				cout << endl;
				textPause();
				cout << "Do you, C. Look in the cabinet. Or D. Look at your calendar." << endl;
				mainTritone();
				cin >> input;
				if (input == 'C'){
					confirmationBeep();
					cout << "You look in the cabinet there is nothing there." << endl;
					mainTritone();
					cout << "Do you, D. Look at your calendar." << endl;
					mainTritone();
					cin >> input;
					if (input == 'D')
					{
						confirmationBeep();
						cout << "Well FINALLY. You just had to choose every other option didn't you." << endl;
						mainTritone();
						textPauseLong();
						cout << "On the calender you see you have to go to the ship dock to wait for your ship." << endl;
						cout << endl;
						mainTritone();
						Sleep(3000);
						storyProgress = 1;
//Alpha Section Beta
//Errors - None
					}
				}
			}

		}
		else if (input == 'B')
		{
			confirmationBeep();
			cout << "You go out the door and you realize, you have no idea what" << endl;
			cout << "you are supposed to do. You go back inside your room." << endl;
			mainTritone();
			cout << "Do you, A. Go back to sleep, C. Look in the cabinet." << endl;
			cout << "Or D. Look at your calendar." << endl;
			mainTritone();
			cin >> input;

			if (input == 'A')
			{
				confirmationBeep();
				cout << "You wake up." << endl;
				mainTritone();
				cout << endl;
				textPauseLong();
				cout << "Do you C. Look in the cabinet. Or D. Look at your calendar." << endl;
				mainTritone();
				cin >> input;

				if (input == 'D')
				{
					confirmationBeep();
					textPauseLong();
					cout << "On the calender you see you have to go to the ship dock to" << endl;
					cout << "wait for your ship." << endl;
					mainTritone();
					Sleep(3000);
					cout << endl;
					storyProgress = 1;
				}
			}
			else if (input == 'C')
			{
				confirmationBeep();
				cout << "You look in the cabinet there is nothing there." << endl;
				cout << endl;
				mainTritone();
				cout << "Do you, D. Look at your calendar." << endl;
				mainTritone();
				cin >> input;
				if (input == 'D')
				{
					confirmationBeep();
					textPauseLong();
					cout << "On the calender you see you have to go to the ship dock" << endl;
					cout << "to wait for your ship." << endl;
					cout << endl;
					mainTritone();
					Sleep(3000);
					storyProgress = 1;
				}
			}

//Split

			if (input == 'C')
			{
				confirmationBeep();
				cout << "You look in the cabinet there is nothing there." << endl;
				cout << endl;
				mainTritone();
				cout << "Do you, D. Look at your calendar." << endl;
				mainTritone();
				cin >> input;
				if (input == 'D')
				{
					confirmationBeep();
					textPauseLong();
					cout << "On the calender you see you have to go to the ship dock to wait" << endl;
					cout << "for your ship." << endl;
					cout << endl;
					mainTritone();
					Sleep(3000);
					storyProgress = 1;

//Split

			if (input == 'D')
			{
				confirmationBeep();
				textPauseLong();
				cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
				cout << "your ship." << endl;
				cout << endl;
				mainTritone();
				Sleep(3000);
				storyProgress = 1;
			}
//Alpha Section Delta
//Errors - None
				}
			}
		}
		else if (input == 'C')
		{
			confirmationBeep();
			cout << "You look in the cabinet there is nothing there." << endl;
			cout << endl;
			mainTritone();
			cout << "Do you, A. Go back to sleep, B. Go out the door. Or D. Look at your calendar." << endl;
			mainTritone();
			cin >> input;
			if (input == 'D')
			{
				confirmationBeep();
				textPauseLong();
				cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
				cout << "your ship." << endl;
				cout << endl;
				mainTritone();
				Sleep(3000);
				storyProgress = 1;
			}

//Split

			if (input == 'B')
			{
				confirmationBeep();
				cout << "You go out the door and you realize, you have no idea what you are" << endl;
				cout << "supposed to do. You go back inside your room." << endl;
				mainTritone();
				cout << "Do you, A. Go to sleep. Or D. Look at your calendar." << endl;
				mainTritone();
				cin >> input;
				if (input == 'D')
				{
					confirmationBeep();
					textPauseLong();
					cout << "On the calender you see you have to go to the ship dock to wait" << endl;
					cout << "for your ship." << endl;
					cout << endl;
					mainTritone();
					Sleep(3000);
					storyProgress = 1;
				}

//Split

				if (input == 'A')
				{
					confirmationBeep();
					cout << "You go back sleep." << endl;
					cout << endl;
					mainTritone();
					cout << "Do you D go look at your calendar?" << endl;
					mainTritone();
					cin >> input;
					if (input == 'D')
					{
						confirmationBeep();
						textPauseLong();
						cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
						cout << "your ship." << endl;
						cout << endl;
						mainTritone();
						Sleep(3000);
						storyProgress = 1;
					}
				}
			}
			if (input == 'A')
			{
				confirmationBeep();
				cout << "You awake on your bed and get up." << endl;
				cout << endl;
				mainTritone();
				textPauseLong();
				cout << "Do you B. Go outside. Or D. Look at your calendar." << endl;
				mainTritone();
				cin >> input;
				if (input == 'B')
				{
					confirmationBeep();
					cout << "You go outside and realize you have no idea where to go. You go back" << endl;
					cout << "in your room." << endl;
					mainTritone();
					cout << "Do you, D. Look at your calendar." << endl;
					mainTritone();
					cin >> input;
					if (input == 'D')
					{
						confirmationBeep();
						textPauseLong();
						cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
						cout << "your ship." << endl;
						cout << endl;
						mainTritone();
						Sleep(3000);
						storyProgress = 1;
					}
				}
				if (input == 'D')
				{
					confirmationBeep();
					textPauseLong();
					cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
					cout << "your ship." << endl;
					cout << endl;
					mainTritone();
					Sleep(3000);
					storyProgress = 1;
				}
			}

//Alpha Section Epsilon
//Errors - None

			{
				if (input == 'A')
				{
					confirmationBeep();
					cout << "You awake on your bed and get up." << endl;
					cout << endl;
					mainTritone();
					textPauseLong();
					cout << "Do you D. Look at your calendar." << endl;
					mainTritone();
					cin >> input;
					if (input == 'D')
					{
						confirmationBeep();
						textPauseLong();
						cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
						cout << "your ship." << endl;
						mainTritone();
						cout << endl;
						mainTritone();
						Sleep(3000);
						storyProgress = 1;
					}
				}
			}	
				
		}
		else if (input == 'D')
		{
			confirmationBeep();
			textPauseLong();
			cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
			cout << "your ship." << endl;
			mainTritone();
			cout << endl;
			mainTritone();
			Sleep(3000);
			storyProgress = 1;

//Beta Section Alpha
//Coridors

		}
		if (storyProgress == 1)
		{
			mainTritone();
			remainingTheme();
			cout << "You get up and go to the ship dock. As you are walking along the corrider," << endl;
			cout << "someone comes up to you" << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << "Stranger: Hello, how are you today?" << endl;
			mainTritone();
			textPauseLong();
			cout << endl;
			cout << "Do you A. Say Hello I am fine, how are you? B. Say Get out of my way idiot" << endl;
			cout << "and punch him. or C. Shoot him with a phaser." << endl;
			mainTritone();
			cout << endl;
			cin >> choice;
			if (choice == 'B' || choice == 'C')
			{
				confirmationBeep();
				cout << "Stranger: OW! Security! Security!" << endl;
				firePhaser();
				mainTritone();
				textPauseLong();
				cout << endl;
				karma = -1;
				cout << "Do you A. Say I'm sorry. It was a reflex. Or B. Set Phasers to kill" << endl;
				cout << "and shoot him." << endl;
				mainTritone();
				cout << endl;
				cin >> choice;
				if (choice == 'B')
				{
					confirmationBeep();
					cout << "You shot him. What are you doing! Your not supposed to be shooting" << endl;
					cout << "your friends!" << endl;
					firePhaser();
					mainTritone();
					cout << endl;
					karma = -2;
					storyProgress = 2;
				}
				else if (choice == 'A')
				{
					confirmationBeep();
					cout << "Stranger: ... ok..." << endl;
					mainTritone();
					cout << endl;
					storyProgress = 2;
				}
					
			}
			else
			{
				confirmationBeep();
				cout << "Stranger: I'm fine, nice meeting you!." << endl;
				mainTritone();
				cout << endl;
				karma = 1;
				storyProgress = 2;
			}
		}

//Beta Section Beta

		cout << "-*You arive at the ShipDock*-" << endl;
		mainTritone();
		cout << endl;
		textPauseLong();

//Beta Section Beta Alpha

		if (karma == -2)
		{
			confirmationBeep();
			cout << "Unknown Captain: Hello I am Captain Julia, I'm Sorry, however our" << endl;
			cout << "ship designator was shot down in the corridors by someone." << endl;
			mainTritone();
			textPauseLong();
			cout << "Captain Julia: We have run a security check through the corriders and" << endl;
			cout << "found that Kevin Novatia shot him." << endl;
			mainTritone();
			textPause();
			cout << "Security: Ensign, if you would come with us." << endl;
			mainTritone();
			cout << "Do you A. Come willingly B. Shoot them. or C. Run away." << endl;
			mainTritone();
			cin >> input;
			if (input == 'B')
			{
				confirmationBeep();
				cout << "Before you could raise your phaser, you were shot and killed." << endl;
				mainTritone();
				textPauseLong();
				cout << "GAME OVER" << endl;
				mainTritone();
				remainingTheme();
				textPauseLong();
				return 0;
			}

//Beta Section Beta Beta

			else if (input == 'C')
			{
				confirmationBeep();
				firePhaser();
				cout << "Two seconds after you started running," << endl;
				cout << "you were shot and killed." << endl;
				mainTritone();
				textPauseLong();
				cout << "Game Over" << endl;
				mainTritone();
				remainingTheme();
				textPauseLong();
				return 0;
			}

//Beta Section Beta Delta

			else if (input == 'A')
			{
				confirmationBeep();
				cout << "-*You were taken to the court on starbase.*-" << endl;
				mainTritone();
				cout << endl;
				textPauseLong();
				cout << "Judge: You are convicted of murdering another person. We have evidance" << endl;
				cout << "showing your homicide. Do you have anything to say?" << endl;
				mainTritone();
				cout << endl;
				textPause();
				cout << "Do you A. Say No. B. Try to run. or C. Take the security guards phaser." << endl;
				mainTritone();
				cin >> input;
				if (input == 'A')
				{
					confirmationBeep();
					cout << endl;
					cout << "You were sentanced to the penal colony on Theta 5 for 20 years." << endl;
					cout << "Atleast you got to serve StarFleet." << endl;
					cout << endl;
					mainTritone();
					textPause();
					cout << "Game Over" << endl;
					mainTritone();
					remainingTheme();
					textPauseLong();
					return 0;
				}

//Beta Section Beta Epsilon

				else if (input == 'B')
				{
					confirmationBeep();
					cout << endl;
					cout << "You tried to run but you were shot down." << endl;
					firePhaser();
					cout << endl;
					mainTritone();
					textPause();
					cout << "Game Over" << endl;
					mainTritone();
					remainingTheme();
					textPauseLong();
					return 0;
				}

//Beta Section Beta Gamma

				else if (input == 'C')
				{
					confirmationBeep();
					textPause();
					cout << endl;
					cout << "You took the security guards phaser." << endl;
					mainTritone();
					cout << endl;
					textPause();
					cout << "Do you A. Shoot the judge. B. Take someone hostage and try to escape, shoot several people to make the point you will shoot." << endl;
					cout << "or C. Set the phaser to wide-beam kill and shoot." << endl;
					mainTritone();
					cout << endl;
					textPause();
					cin >> input;
					if (input == 'A')
					{
						confirmationBeep();
						textPause();
						cout << "Nice shot, however a split second later you were killed." << endl;
						firePhaser();
						mainTritone();
						textPause();
						cout << endl;
						cout << "Game Over" << endl;
						mainTritone();
						remainingTheme();
						textPauseLong();
						return 0;
					}

//Beta Section Beta Theta

					if (input == 'B' || input == 'C')
					{
						confirmationBeep();
						firePhaser();
						textPause();
						cout << "Well done, now you begin your life as an outlaw and a mass murderer." << endl;
						cout << "Wait, wasn't the point to become a starfleet officer?" << endl;
						mainTritone();
						cout << endl;
						Sleep(3000);
						cout << "Oh by the way, you forgot one thing. The transporter." << endl;
						cout << "Space has pretty thin air don't you think?" << endl;
						cout << endl; 
						mainTritone();
						textPauseLong();
						cout << "Game Over" << endl;
						mainTritone();
						remainingTheme();
						textPauseLong();
						return 0;
					}
				}
			}

		}

//Beta Section Delta

		else if (karma == -1 || karma == 1)
		{
			mainTritone();
			remainingTheme();
			textPause();
			confirmationBeep();
			storyProgress = 2;
			cout << endl;
			cout << "-*You arive at the Ship Dock.*-" << endl;
			cout << endl;
			mainTritone();
			textPauseLong();
			cout << "Unknown Captain: Hello I am Captain Alan and I will be designating you to" << endl;
			cout << "your ships." << endl;
			mainTritone();
			Sleep(3000);
			cout << endl;
			cout << "Captain Alan: Parsins, Parvati, Rudolph, Zachary, you will be" << endl;
			cout << "reporting to Captain Zephren." << endl;
			mainTritone();
			cout << endl;
			Sleep(3000);
			cout << "Captain Alan: Roberto, Jonathan, Patrick, Kevin, you will" << endl;
			cout << "be coming with Captain Jamerson." << endl;
			mainTritone();
			cout << endl;
			Sleep(3000);
			do
			{
				cout << "Do you, A. Walk away. B.Go to Captain Jamerson or C. Shoot everyone." << endl;
				mainTritone();
				textPause();
				cin >> input;
				
				if (input == 'A')
				{
					confirmationBeep();
					textPause();
					cout << endl;
					cout << "Captain Jamerson. Hey! Your supposed to come to me!." << endl;
					mainTritone();
				}
				else if (input == 'C')
				{
					confirmationBeep();
					textPause();
					cout << "Seriously. Are you this homicidal. I'm going to save you from Game" << endl;
					cout << "Over and restarting the whole game. Try again." << endl;
					mainTritone();
				}
				else if (input == 'B')
				{
					confirmationBeep();
					textPause();
					cout << "-*You walk to Captain Jamerson*-" << endl;
					mainTritone();
					dl1 = true;
				}
			}while (!dl1);
		}
//Beta Section Episilon
		cout << "Captain Jamerson: Welcome to the crew. We will have a welcome party over" << endl;
		cout << "in the ship Mess Hall." << endl;
		mainTritone();
		textPause();
		cout << "-*You walk into the ship*-" << endl;
		cout << endl;
		mainTritone();
		textPauseShort();
		cout << "There are several corriders with signs leading to an area." << endl;
		cout << endl;
		mainTritone();
		cout << "The left corrider goes to the weapons locker." << endl;
		cout << endl;
		mainTritone();
		textPauseLong();
		cout << "The middle corrider goes to engineering." << endl;
		cout << endl;
		mainTritone();
		textPauseLong();
		cout << "The right corrider goes to the mess hall." << endl;
		cout << endl;
		mainTritone();
		textPauseLong();
		cout << endl;
			
		do
		{
			cout << "Do you go A. Left. B. Forward. Or C. Right." << endl;
			mainTritone();
			cin >> input;
			if (input == 'A')
			{
				confirmationBeep();
				cout << "Captain Jamerson: And why would you go to the weapons locker Ensign?" << endl;
				mainTritone();
			}
			else if (input == 'B')
			{
				confirmationBeep();
				cout << "Engineer: You're not supposed to be in here." << endl;
				mainTritone();
			}
			else if (input == 'C')
			{
				confirmationBeep();
				cout << "-*You hear distant murmering*-" << endl;
				mainTritone();
				dl2 = true;
			}
		}while (!dl2);
		cout << "Officer: Hi there, we just got out the piano. Do you want to play a song?" << endl;
		cout << "You say A.Sure B.No C. ... " << endl;
		mainTritone();
		cin >> input;
		if (input == 'A')
		{
			confirmationBeep();
			cout << endl;
			textPause();
			cout << "-*You start playing*-" << endl;
			cout << endl;
			mainTritone();
			textPauseLong();
			beepFurElise();
			textPauseLong();
			cout << "-*Clap Clap Clap Clap Clap Clap*-" << endl;
			mainTritone();
			textPause();
			cout << "Wonderful!" << endl;
			mainTritone();
			textPause();
		}
		else if (input == 'B' || input == 'C')
		{
			confirmationBeep();
			cout << "Your desision." << endl;
			mainTritone();
		}
	}


//Start Section Beta
//Start Game N response response

	else if (skipPoints == "No")
	{
		confirmationBeep();
		cout << "Hmph. I thought you wanted to play. I guess I was wrong." << endl;
		mainTritone();
		textPauseLong();
		cout << "GAME OVER" << endl;
		mainTritone();
		remainingTheme();
		return 0;
	}
//Beta Section Gamma
	cout << "-*The Party Ends*-" << endl;
	cout << endl;
	mainTritone();
	textPause();
	cout << "Com:All hands battlestations!" << endl;
	mainTritone();
	textPause();
	cout << "Officer: Ensign report to the bridge." << endl;
	mainTritone();
	textPause();

	do
	{
		cout << "Do you A.Go to the Bridge. B. Go to Engineering. Or C. The Shuttlebay." << endl;
		mainTritone();
		cin >> input;
		if (input == 'A')
		{
			confirmationBeep();
			textPause();
			cout << "-*The Ship Shakes*-" << endl;
			mainTritone();
			cout << endl;
			textPauseShort();
			cout << "You run to the bridge. On the way you see an injured crewman." << endl;
			mainTritone();
			textPause();
			cout << "Crewman: *Gasp* Please help me." << endl;
			mainTritone();
			textPause();
			cout << "Do you A. Help the crewman or B. continue on your way." << endl;
			mainTritone();
			cin >> input;
			if (input == 'A')
			{
				confirmationBeep();
				cout << "-*You help the crewman to get to sickbay.*-" << endl;
				mainTritone();
				cout << endl;
				textPause();
				karma++;
			}
			else if (input == 'B' || input == 'A')
			{
				cout << "-*You continue to the bridge.*-" << endl;
				cout << endl;
				mainTritone();
				textPause();
			}
			if (true)
			{

				cout << "Captain Jamerson: Kevin, take a station. Tactical, Com, or Operations." << endl;
				mainTritone();
				cin >> shipPositionClass;

//Beta Section Theta Alpha

				if (shipPositionClass == "Tactical")
				{
					confirmationBeep();
					cout << "Captain Jamerson: Charge Phasers." << endl;
					mainTritone();
					textPause();
					cout << "Target enemy ship" << endl;
					mainTritone();
					textPause();
					cout << "Attack pattern Alpha" << endl;
					mainTritone();
					textPauseLong();
					cout << "A. Charge Phasers, B. Fire Phasers." << endl;
					mainTritone();
					textPauseLong();
					cin >> input;
					if (input == 'A')
					{
						confirmationBeep();
						textPause();
						cout << "Charging Phasers." << endl;
						mainTritone();
						textPause();
						cout << "Captain Jamerson: Fire!" << endl;
						mainTritone();
						textPause();
						cout << "A. Fire Phasers. B. Do Nothing." << endl;
						mainTritone();
						cin >> input;
						if (input == 'A')
						{
							confirmationBeep();
							cout << "Firing Phasers." << endl;
							firePhaser();
							mainTritone();
							textPause();
							cout << "Operations Officer: Enemy destroyed!." << endl;
							mainTritone();
							textPause();
							cout << "What were we shooting at?" << endl;
							mainTritone();
							textPause();
							cout << "Captain Jamerson: Klingon ship." << endl;
							mainTritone();
							dl3 = true;
						}
						else if (input == 'B')
						{
							confirmationBeep();
							cout << "Captain Jamerson: What are you doing! Fire Phasers!" << endl;
							mainTritone();
							textPause();
							cout << "Firing Phasers." << endl;
							firePhaser();
							mainTritone();
							textPause();
							cout << "Operation Officer: Enemy destroyed!." << endl;
							mainTritone();
							textPause();
							cout << "What were we whooting at?" << endl;
							mainTritone();
							textPause();
							cout << "Captain Jamerson: Klingon ship. Now tell me why didn't you fire!" << endl;
							mainTritone();
							textPause();
							cout << "Sorry, I suppose I was distracted." << endl;
							mainTritone();
							textPause();
							cout << "Captain Jamerson: Well be more focused next time." << endl;
							mainTritone();
							dl3 = true;
						}
					}
					else if (input == 'B')
					{
						confirmationBeep();
						textPause();
						cout << "-*Phasers aren't firing sir.*-" << endl;
						mainTritone();
						textPause();
						cout << "Captain Jamerson: Try charging them." << endl;
						mainTritone();
						textPause();
						cout << "Charging Phasers." << endl;
						mainTritone();
						textPause();
						cout << "Captain Jamerson: Fire!" << endl;
						firePhaser();
						mainTritone();
						textPause();
						cout << "A. Fire Phasers. B. Do Nothing." << endl;
						mainTritone();
						cin >> input;
						if (input == 'A')
						{
							confirmationBeep();
							cout << "Firing Phasers." << endl;
							firePhaser();
							mainTritone();
							textPause();
							cout << "Operations Officer: Enemy destroyed!." << endl;
							mainTritone();
							textPause();
							cout << "What were we shooting at?" << endl;
							mainTritone();
							textPause();
							cout << "Captain Jamerson: Klingon ship." << endl;
							mainTritone();
							dl3 = true;
						}
						else if (input == 'B')
						{
							confirmationBeep();
							cout << "Captain Jamerson: What are you doing! Fire Phasers!" << endl;
							mainTritone();
							textPause();
							cout << "Firing Phasers." << endl;
							firePhaser();
							mainTritone();
							textPause();
							cout << "Operation Officer: Enemy destroyed!." << endl;
							mainTritone();
							textPause();
							cout << "What were we whooting at?" << endl;
							mainTritone();
							textPause();
							cout << "Captain Jamerson: Klingon ship. Now tell me why didn't you fire!" << endl;
							mainTritone();
							textPause();
							cout << "Sorry, I suppose I was distracted." << endl;
							mainTritone();
							textPause();
							cout << "Captain Jamerson: Well be more focused next time." << endl;
							mainTritone();
							dl3 = true;
						}
					}
				}

//Beta Section Theta Beta

				else if (shipPositionClass == "Operations")
				{
					confirmationBeep();
					textPause();
					cout << "Captain Jamerson: Target the ship." << endl;
					mainTritone();
					textPauseLong();
					cout << "Captain Jamerson: Attack Pattern Alpha" << endl;
					mainTritone();
					textPauseLong();
					cout << "Captain Jamerson: Charge phasers." << endl;
					mainTritone();
					textPauseLong();
					cout << "A. Target Starbase B. Target Klingon Ship." << endl;
					mainTritone();
					textPause();
					cin >> input;
					if (input == 'A')
					{
						confirmationBeep();
						textPause();
						cout << "Tactical fire phasers." << endl;
						firePhaser();
						mainTritone();
						textPause();
						cout << "Captain Jamerson: What the. Who issued the command to target" << endl;
						cout << "the station?" << endl;
						mainTritone();
						textPause();
						cout << "Tactical: The command was issued from the.. Com..." << endl;
						mainTritone();
						textPause();
						cout << "Security: Klingon Spy!" << endl;
						firePhaser();
						mainTritone();
						textPause();
						cout << "Congradualtions. Your dead. Accused of being a Klingon Spy." << endl;
						cout << "If you actually were a Klingon, you'd be ecstatic of dieing in battle." << endl;
						cout << endl; 
						mainTritone();
						textPauseLong();
						cout << "Game Over" << endl;
						mainTritone();
						remainingTheme();
						textPauseLong();
						return 0;						
					}
					else if (input == 'B')
					{
						confirmationBeep();
						textPause();
						cout << endl;
						cout << "Captain JamersonL Target enemy ship." << endl;
						mainTritone();
						textPauseLong();
						cout << "Captain Jamerson: Charge Phasers." << endl;
						mainTritone();
						textPause();
						cout << endl;
						cout << "Tactical: Phasers charged." << endl;
						mainTritone();
						textPause();
						cout << endl;
						cout << "Captain Jamerson: Fire!"<< endl;
						firePhaser();
						mainTritone();
						textPause();
						cout << endl;
						cout << "Tactical: What were we shooting at?" << endl;
						mainTritone();
						textPause();
						cout << endl;
						cout << "Captain Jamerson: Klingon ship." << endl;
						mainTritone();
						textPause();
						cout << endl;
						dl3 = true;
					}
				}

//Beta Section Theta Delta

				else if (shipPositionClass == "Com")
				{
					confirmationBeep();
					textPause();
					cout << "Captain Jamerson: Attack Pattern Alpha!" << endl;
					mainTritone();
					textPause();
					cout << "A. Randomly press buttons. B.Go to Warp. C. Look up in" << endl;
					cout << "the database how to do Attack Pattern Alpha." << endl;
					mainTritone();
					textPause();
					cin >> input;
					if (input == 'A')
					{
						confirmationBeep();
						cout << "Self Destruct Initiated." << endl;
						mainTritone();
						textPause();
						cout << "Game Over" << endl;
						mainTritone();
						remainingTheme();
						textPauseLong();
						return 0;
					}
					else if (input == 'B')
					{
						confirmationBeep();
						cout << "Well guess what. You just warped into the starbase. Die with style" << endl;
						cout << "I suppose." << endl;
						mainTritone();
						textPause();
						cout << "Game Over" << endl;
						mainTritone();
						remainingTheme();
						textPauseLong();
						return 0;
					}
					else if (input == 'C')
					{
						confirmationBeep();
						textPauseShort();
						cout << "To initiate attack pattern alpha. Tell the computer to" << endl;
						mainTritone();
						textPause();
						cout << "engage engines and keep a radius of 100 kilometers and circle around the" << endl;
						mainTritone();
						textPause();
						cout << "enemy by a constant right turn." << endl;
						mainTritone();
						textPauseShort();

						do
						{
							cout << "A. Engage engines and keep A radius of 100 kilometers. B. Circle enemy" << endl;
							mainTritone();
							cin >> input;
							if (input == 'A')
							{
								confirmationBeep();
								cout << "Keeping a radius of 100 kilometers..." << endl;
								mainTritone();
								dl4 = true;
							}
							else if (input == 'B')
							{
								confirmationBeep();
								cout << "Unable to comply. Engines offline." << endl;
								mainTritone();
							}
						}while (!dl4);

//Split

						do
						{
							cout << "A. Engage engines and keep A radius of 100 kilometers. B. Circle enemy" << endl;
							mainTritone();
							cin >> input;
							if (input == 'A')
							{
								confirmationBeep();
								cout << "Unable to comply, already done." << endl;
								mainTritone();
							}
							else if (input == 'B')
							{
								confirmationBeep();
								cout << "Circling Enemy Ship..." << endl;
								mainTritone();
								dl5 = true;
							}
						}while (!dl5);
						cout << "Captain Jamerson: Operations, target the enemy ship. Tactical charge phasers." << endl;
						mainTritone();
						textPause();
						cout << "Operations: Target locked" << endl;
						mainTritone();
						cout << "Tactical: Phasers Charged." << endl;
						mainTritone();
						textPauseLong();
						cout << "Captain Jamerson: Fire Phasers!" << endl;
						firePhaser();
						mainTritone();
						textPause();
						cout << "Captain Jamerson: Enemy destroyed." << endl;
						mainTritone();
						textPause();
						cout << "Tactical: Who was the enemy." << endl;
						mainTritone();
						textPause();
						cout << "Captain Jamerson: Klingon Ship." << endl;
						mainTritone();
						dl3 = true;
					}
				}
			}
		}

//Beta Section Gamma Beta

		else if (input == 'B')
		{
			confirmationBeep();
			mainTritone();
			cout << "Engineer: What are you doing here?" << endl;
			mainTritone();
			textPause();
			cout << "-*Engineer Looks at Your Uniform*-" << endl;
			mainTritone();
			textPause();
			cout << "Your supposed to be in the bridge." << endl;
			mainTritone();
		}
		else if (input == 'C')
		{
			confirmationBeep();
			cout << "Ahem are you trying to escape the ship?" << endl;
			mainTritone();
		}
	}while(!dl3);

//Delta Section Alpha
	if (true)
	{
		cout <<"-*Door Opens*- "<< endl;
		mainTritone();
		
		cout <<"Klingon: For the high command!" << endl;
		mainTritone();
		textPause();
		cout <<"-*Klingon Fires a Disruptor at the Captain*-"<< endl;
		mainTritone();
		textPause();
		cout <<"A. Shoot the Klingon B. Do nothing"<< endl;
		mainTritone();
		cin >> input;
	}
		if (input == 'A')
		{
			confirmationBeep();
			cout << "You shot the Klingon" << endl;
			firePhaser();
			mainTritone();
			textPause();
			popularity = 1;
		}

		else if (input == 'B')
		{
			confirmationBeep();
			cout << "Security: Die Klingon!" << endl;
			mainTritone();
			textPause();
			cout << "-*Phaser Blast*-" << endl;
			firePhaser();
			mainTritone();
			textPause();
		}
		cout << "-*Beep Beep*-" << endl;
		Beep(923,125);  
		textPauseShort();
		Beep(923,125);  
		textPause();
		cout << "Commander: Three D-7s have dropped out of warp." << endl;
		Beep(923,125);  
		textPauseShort();
		Beep(923,125);  
		textPause();
		cout << "Commander: They are targeting the station!" << endl;
		textPause();
		cout << "They are firing!" << endl;
		mainTritone();
		textPause();
		firePhaser();
		textPauseShort();
		firePhaserLong();
		Sleep(250);
		firePhaserShort();
		Sleep(600);
		firePhaserLong();
		textPauseMicro();
		firePhaser();
		textPause();

	if (shipPositionClass == "Tactical")
	{
		cout << "Kevin arm and fire phasers!" << endl;
		mainTritone();
		textPause();
		cout << "A.Arm & Fire phasers. B.Shoot the rest of the crew." << endl;
		mainTritone();
		cin >> input;
		if (input == 'A')
		{
			cout << "Firing Phasers" << endl;
			firePhaser();
			textPause();
			cout << "Commander: We are being targeted. They are firing!" << endl;
			firePhaser();
			textPauseMicro();
			firePhaserShort();
			textPauseMicro();
			firePhaserLong();
			cout << "-*Explosions all around*-" << endl;
			mainTritone();
			textPause();
			cout << "-*You are the last person left on the bridge*-" << endl;
			mainTritone();
		}
		else if (input == 'B')
		{
			cout << "-*You shoot all the rest of the crew*-" << endl;
			mainTritone();
			textPause();
			cout << "-*You are the last person left on the bridge*-" << endl;
			mainTritone();
		}
	}
	if (shipPositionClass == "Operations")
	{
		cout << "Kevin Target the ship!!" << endl;
		mainTritone();
		textPause();
		cout << "A. Target enemy. B.Shoot the rest of the crew." << endl;
		mainTritone();
		cin >> input;
		if (input == 'A')
		{
			cout << "Firing Phasers" << endl;
			firePhaser();
			textPause();
			cout << "Commander: We are being targeted. They are firing!" << endl;
			firePhaser();
			textPauseMicro();
			firePhaserShort();
			textPauseMicro();
			firePhaserLong();
			cout << "-*Explosions all around*-" << endl;
			mainTritone();
			textPause();
			cout << "-*You are the last person left on the bridge*-" << endl;
			mainTritone();
		}
		else if (input == 'B')
		{
			cout << "-*You shoot all the rest of the crew*-" << endl;
			mainTritone();
			textPause();
			cout << "-*You are the last person left on the bridge*-" << endl;
			mainTritone();
		}
	}

	if (shipPositionClass == "Com")
	{
		cout << "Kevin Manuvers Alpha!" << endl;
		mainTritone();
		textPause();
		cout << "A. Start Manuvers. B.Shoot the rest of the crew." << endl;
		mainTritone();
		cin >> input;
		if (input == 'A')
		{
			cout << "Firing Phasers" << endl;
			firePhaser();
			textPause();
			cout << "Commander: We are being targeted. They are firing!" << endl;
			firePhaser();
			textPauseMicro();
			firePhaserShort();
			textPauseMicro();
			firePhaserLong();
			cout << "-*Explosions all around*-" << endl;
			mainTritone();
			textPause();
			cout << "-*You are the last person left on the bridge*-" << endl;
			mainTritone();
		}
		else if (input == 'B')
		{
			cout << "-*You shoot all the rest of the crew*-" << endl;
			mainTritone();
			textPause();
			cout << "-*You are the last person left on the bridge*-" << endl;
			mainTritone();
		}
	}
	if (true)
	{
		textPause();
		cout << "A. Take Tactical Position B. Surrender" << endl;
		mainTritone();
		cin >> input;
	}
		if (input == 'A')
		{
			cout << "Phasers and Torpedoes fire everywhere." << endl;
			mainTritone();
			mainTritone();
			textPause();
			firePhaser();
			textPauseShort();
			firePhaserLong();
			Sleep(250);
			firePhaserShort();
			Sleep(600);
//2014!
			firePhaserLong();
			textPauseMicro();
			firePhaser();
			textPause();
			cout << "-----        ------                   --" << endl;
			cout << "   -        -||||||-                o---|" << endl;
			cout << "    -------------                     --" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			textPause();
			cout << "-----        ------                --" << endl;
			cout << "   -        -||||||-0------------o---|" << endl;
			cout << "    -------------                  --" << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			textPause();
			cout << "-----        ------               +|+" << endl;
			cout << "   -        -||||||-            (+-O-+)" << endl;
			cout << "    -------------                 +|+" << endl;
			textPauseLong();
			cout << "One Klingon K'vort ship is approaching at fast warp." << endl;
			cout << "Phasers work best on shields and do half damege to hull. Photons work the other way around." << endl;
			mainTritone();
			dl6 = false;
	do
		{
			cout << "A. Phasers B.Photons" << endl;
			cin >> input;
			if (input == 'A')
			{
				SenemyShields = SenemyShields - phasers;
				shields = shields - SenemyWeapons;

				srand(static_cast<unsigned int>(time(0)));
				dodgePre = rand();
				dodge = (dodgePre % shipDodge) + 1;
				if (dodge == 2)
				{
				if (shields > 1)
					{
						shields = shields + SenemyWeapons;
						cout << "Dodged Attack" << endl;
					}
					else if (shields < 1)
					{
						hull = hull + SenemyWeapons;
					cout << "Dodged Attack" << endl;
					}
				}

				cout << "Enemy Shields:" << SenemyShields << endl;
				cout << "Shields:" << shields << endl;
				mainTritone();
				if (SenemyShields < 1)
				{
					SenemyHull = SenemyHull - (phasers/2);
					cout << "Enemy Hull:" << SenemyHull << endl;

				}
				if (hull < 1)
				{
					cout << "Your ship exploded. Simulation Terminated" << endl;
					dl6 = true;
				}
				if (shields < 1)
				{
					hull = hull - SenemyWeapons;
				}


				if(SenemyShields < 1)
				{
					cout << "Enemy Shields are Down!" << endl;
					mainTritone();
				}
			}
			else if (input == 'B')
			{
					
				srand(static_cast<unsigned int>(time(0)));
				dodgePre = rand();
				dodge = (dodgePre % shipDodge) + 1;
				if (dodge == 2)
				{
					if (shields > 1)
					{
						shields = shields + SenemyWeapons;
						cout << "Dodged Attack" << endl;
					}
					else if (shields < 1)
					{
						hull = hull + SenemyWeapons;
					cout << "Dodged Attack" << endl;
					}
				}

				shields = shields - SenemyWeapons;
				cout << "Shields:" << shields << endl;
				if (SenemyShields < 1)
				{
					SenemyHull = SenemyHull - torpedoes;
					cout << "Enemy Hull:" << SenemyHull << endl;

				}
				if (SenemyShields > 1)
				{
					SenemyShields = SenemyShields - (torpedoes/2);
					cout << "Enemy Shields:" << SenemyHull << endl;

				}
				if (hull < 1)
				{
					cout << "Your ship exploded. Simulation Terminated" << endl;
					dl6 = true;
				}
				if (shields < 1)
				{
					hull = hull - SenemyWeapons;
				}

				if(SenemyHull < 1)
				{
					cout << "Enemy Destroyed!" << endl;
					dl6 = true;
				}
				else if (SenemyShields > 1)
				{
					cout << "No damege, Their shields are still up." << endl;
				}
			}
		}while(!dl6);


		}
		else
		{
			cout << "Do you know how Klingons treat their prisoners?" << endl;
			mainTritone();
			cout << "Klingons don't take prisoners unless it's nessicary" << endl;
			mainTritone();
			cout << "You were shot and killed." << endl;
			mainTritone();
			textPauseLong();
			cout << "GAME OVER" << endl;
			mainTritone();
			remainingTheme();
			textPauseLong();
			return 0;
		}
		
		cout << "End of Tutorial" << endl;
		mainTritone();
		remainingTheme();


			

	}
	cout << "Star Trek Adventure" << endl;
		cout << "Part II - Where No One Has Gone Before" << endl;
		mainTritone();
		remainingTheme();
		cout << endl;
		cout << endl;



		textPauseLong();
		cout << "5 Days After The Battle of Starbase 78" << endl;
		mainTritone();
		textPause();
		cout << endl;
		cout << "Admiral Preston: Kevin, I promote you to Captain. And offer you your first command." << endl;
		mainTritone();
		textPause();
		cout << endl;
		cout << "Admiral Preston: Do you wish to take command of the Avenger, a Defiant class ship." << endl;
		cout << "Speciallizing in Evasive Manuvers and Combat." << endl;
		mainTritone();
		textPause();
		cout << endl;
		cout << "Admiral Preston: Do you wish to take command of the Solstace, a Nova class ship." << endl;
		cout << "Speciallizing in Evasive Manuvers, Warp Speed, and Science." << endl;
		mainTritone();
		textPause();
		cout << endl;
		cout << "Admiral Preston: Or do you wish to take command of the Breakpoint, a Ambassador class ship." << endl;
		cout << "Well rounded on Warp Speed, Combat, and Science, however has low manuverability." << endl;
		mainTritone();
		textPause();
			
		
	if (true)
	{
		do
		{
			cout << "Avenger, Solstace, or Breakpoint?" << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << endl;
			cin >> shipName;
			if(shipName == "Avenger")
			{
				mainTritone();
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
				mainTritone();
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
				mainTritone();
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
				mainTritone();
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
		textPause();
		cout << "You have chosen the " << shipName << " a " << shipClass << " class starship." << endl;
		mainTritone();
		textPause();
		cout << "Lets test it in a simulator." << endl;
		mainTritone();
		textPauseLong();

		cout << "Klingon Destroyer K'riath, a K'vort class ship is approaching at high warp." << endl;
		mainTritone();
		a = false;
			
		do
			{
				cout << "A. Phasers B.Photons" << endl;
				cin >> input;
				if (input == 'A')
				{
					mainTritone();
						

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
						mainTritone();
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
					mainTritone();
						

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
						mainTritone();
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
						mainTritone();
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
						mainTritone();
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
						mainTritone();
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
						mainTritone();
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
			mainTritone();
			textPause();
			cout << "You are assigned to the task force to defeat the enemy Starbase" << endl;
			mainTritone();
			if (true)
			{
				mainTritone();
				a = false;
				cout << "We will give you a makeshift crew for this mission." << endl;
				mainTritone();
				textPause();
				cout << "Arriving at Tou Signa V" << endl;
				mainTritone();
				textPause();
				cout << "Sir, We are detecting 4 other Federation ships combating" << endl;
				cout << "The Klingon Starbase." << endl;
				mainTritone();
				AfleetNumber = 4;
				a = false;
				do
				{
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

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
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
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
							cout << endl;
							kratHull = 0;
							cout << "Enemy Starbase Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							mainTritone();
							remainingTheme();
						}
							

						if(kratShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
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
						mainTritone();
							

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
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - kratWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
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
							cout << "Enemy Starbase Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							mainTritone();
							remainingTheme();
						}
							

						if(kratShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
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
					
				if (true)
				{
					{
							
						if(shipName == "Avenger")
						{
							mainTritone();
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
							mainTritone();
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
							mainTritone();
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
							mainTritone();
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
					
		cout << "Setting Course to Starbase 78." << endl;
		mainTritone();
		textPause();
		textPause();
		cout << "Admiral Decker: Captain Novatia, as the current crises is over." << endl;
		cout << "You will be given your crew." << endl;
		mainTritone();
		cout << endl;
		textPause();
		cout << "Your Commander is Commander Keith Benning." << endl;
		mainTritone();
		cout << endl;
		textPause();
		cout << "Commander Keith: Hello Sir." << endl;
		cout << endl;
		textPause();
		cout << "Your Operations Officer is Ensign Ethan Niron." << endl;
		cout << endl;
		mainTritone();
		textPause();
		cout << "-*Ensign Ethan Nods*-" << endl;
		cout << endl;
		mainTritone();
		textPause();
		cout << "Tactical is Luitenent Commander Jay Parkinsons" << endl;
		cout << "He is also your Security Chief." << endl;
		mainTritone();
		cout << endl;
		textPause();
		cout << "Your Chief Engineer is Blake Finery" << endl;
		mainTritone();
		textPause();
		cout << endl;
		cout << "Your Doctor is Zachary Iona." << endl;
		mainTritone();
		cout << endl;
		textPause();
		cout << "Your mission is to accompany the USS Berlin on its diplomatic mission to Ba'tok" << endl;
		cout << "Find out why the Klingons are attacking us." << endl;
		destinationOne = "Earth";
		destinationTwo = "Ba'tok";
		textPause();
		mainTritone();
		cout << "Your ship the " << shipName << " leaves spacedock." << endl;
		mainTritone();
		textPause();
		cout << "Set Course For" << endl;
		cout << "Type your Destination" << endl;
		cout << destinationOne << "   " << destinationTwo << "   " << destinationThree << "   " << destinationFour << "   " << destinationFive << "   " << destinationSix << "   " << destinationSeven << "   " << destinationEight << "   " << destinationNine << "   " << destinationTen << endl; 
		cin >> answer;
		if (answer == "Ba'tok")
		{
			cout << "Ensign Niron: Setting course for Ba'tok" << endl;
			storyProgress = 3;
			mainTritone();
		}
		else if (answer == "Earth")
		{
			cout << "Ensign Niron: Setting course for Earth" << endl;
			mainTritone();
			storyProgress = 0;
		}
		cout << "Commander Benning: Captain, some of the crew are orginizing a party over in the Mess Hall. Would you like to join us?" << endl;
		mainTritone();
		textPause();
		cout << endl;
		cout << "A. Yes   B. No" << endl; 
		cin >> inputTwo;
		if (inputTwo == 'B')
		{
			cout << "Ok then, well, if you ever change your mind. You know where to find us." << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << "-*After a while you arrive at your destination*-" << endl;
			mainTritone();
		}
		else if (inputTwo == 'A')
		{
			cout << endl;
			cout << "Ok then, come with me." << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << "-*You walk through the corridors*-" << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << "Commander Benning: Our new engineer apperently likes experimenting." << endl;
			mainTritone();
			cout << endl;
			textPause();
			cout << "A. Oh? B. Quiet I want silence." << endl;
			cin >> input;
			if (input == 'B')
			{
				cout << endl;
				cout << "Commander Benning: Aknowledged." << endl;
			}
			else if (input == 'A')
			{
				cout << endl;
				cout << "Commander Benning: Yeah he's been working on upgrading shields." << endl;
				cout << "He finished some upgrades a while ago I think." << endl;
				cout << "Oh, he has asked permission to activate the upgrades." << endl;
				mainTritone();
				textPause();
				cout << endl;
				cout << "A. Yes B. No" << endl;
				cin >> input;
				if (input == 'A')
				{
					cout << "Commander Benning: I'll tell him." << endl;
					shields = shields + 1000;
				}
				else
				{
					cout << "Commander Benning: Ok then." << endl;
				}
			}
			cout << endl;
			cout << "Commander Benning: We are here." << endl;
			mainTritone();
			textPauseShort();
			cout << endl;
			cout << "-*You arrive at the Mess Hall*-" << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << "Commander Benning: You first." << endl;
			cout << endl;
			textPause();
			mainTritone();
			cout << "-*You enter the room*-" << endl;
			mainTritone();	
			cout << endl;
			textPause();
			cout << "Luitenent Parkinson: Captain theres a urgent matter we need to attend to." << endl;
			mainTritone();
			textPause();
			cout << endl;
			cout << "A. What is it. B. Shut up. C. What ever it is i'm sure you can take care of it." << endl;
			mainTritone();
			cin >> input;
			if (input == 'B')
			{
				cout << "Luitenent Parkinson: What? Fine." << endl;
				mainTritone();
				popularity = popularity - 1;
			}
			else if (input == 'C')
			{
				cout << "Luitenent Parkinson: Ok" << endl;
				mainTritone();
			}
			else if (input == 'A')
			{
				cout << "Luitenent Parkinson: Our security sensors are too weak. The sensors cannot detect where everyone is!" << endl;
				mainTritone();
				cout << endl;
				textPause();
				cout << "A. ... Thats it? B. Luitenent, no offense but you are overreacting. C. OH MY GOSH YOUR RIGHT! Luitenent Finery upgrade the sensors." << endl;
				mainTritone();
				cout << endl;
				cin >> input;
				cout << endl;
				if (input == 'A')
				{
					cout << "Luitenent Parkinson: ... " << endl;
					popularity = popularity - 1;
					mainTritone();
					cout << endl;
					textPause();
				}
				else if (input == 'B')
				{
					cout << "Luitenent Parkinson: No. not at all. Captain, we need to upgrade the sensors." << endl;
					mainTritone();
					cout << endl;
					textPause();
				}
				else if (input == 'C')
				{
					cout << "Luitenent Parkinson: Thank you Captain." << endl;
					popularity = popularity + 1;
					mainTritone();
					cout << endl;
					textPause();
				}
				cout << "Com: This is Ensign Niron, We are approaching our destination." << endl;
				mainTritone();
				cout << endl;
				textPause();
				cout << "-*You arrive on the bridge*-" << endl;
				mainTritone();
			}
		}
			
		if (storyProgress < 3)
		{
			cout << "Ensign Niron: We have arrived at Earth" << endl;
			mainTritone();
			cout << endl;
			textPause();
			cout << "A. Go to sector Ba'tok.  B. Hail Utopia Planetia.  C. Attack Earth." << endl;
			cin >> inputTwo;
			
		if (inputTwo == 'A')
		{
			cout << "Setting Course for Ba'tok" << endl;
			storyProgress = 3;
		}
		else if (inputTwo == 'B')
		{
			cout << "Utopia Planetia: This is Utopia Planetia, state your intent" << endl;
			cout << "A. Nevermind   B. Upgrades" << endl;
			cin >> input;
			if (input == 'A')
			{
			cout << endl;
			cout << "Utopia Planetia, goodbye. Well your supposed to go to Ba'tok right?" << endl;
			textPause();
			cout << "-*You go to Ba'tok*-" << endl;
			storyProgress = 3;
			}
			if (input == 'B')
			{
				cout << endl;
				cout << "Utopia Planetia: Beggining Upgrades to shields." << endl;
				textPause();
				cout << "Upgrades Completed." << endl;
				cout << endl;
				shields = shields + 5000;
				cout << "Utopia Planetia, goodbye. Well your supposed to go to Ba'tok right?" << endl;
				textPause();
				cout << "-*You go to Ba'tok*-" << endl;
				storyProgress = 3;
			}
		}
		else if (inputTwo == 'C')
		{	
			do
			{
				cout << "A. Phasers B.Photons" << endl;
				cin >> input;
				if (input == 'A')
				{
					mainTritone();
						

					srand(static_cast<unsigned int>(time(0)));
					dodgePre = rand();
					dodge = (dodgePre % shipDodge) + 1;
					if (dodge == 2)
					{
						
					if (shields > 1)
						{
							typhonBaseWeapons = 0;
							cout << "Dodged Attack" << endl;
						}
						else if (shields < 1)
						{
							typhonBaseWeapons = 0;
						cout << "Dodged Attack" << endl;
						}
					}
					if (typhonBaseShields < 1)
					{
						typhonBaseHull = typhonBaseHull - (phasers/2);
							

					}
					if (typhonBaseShields > 1)
					{
						typhonBaseShields = typhonBaseShields - phasers;
							
					}
					if (shields < 1)
					{
					hull = hull - typhonBaseWeapons;
						
					}
					if (shields > 1)
					{
					shields = shields - typhonBaseWeapons;
						
					}
						
						
					if (hull < 1)
					{
						cout << "Your ship exploded. Simulation Terminated" << endl;
						a = true;
					}
					if(typhonBaseHull < 1)
					{
						cout << "Enemy Destroyed!" << endl;
						a = true;
						typhonBaseHull = 0;
					}
						

					if(typhonBaseShields < 1)
					{
						cout << "Enemy Shields are Down!" << endl;
						mainTritone();
						typhonBaseShields = 0;
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
					cout << "Enemy Hull:" << typhonBaseHull << endl;
					cout << "Enemy Shields:" << typhonBaseShields << endl;
					cout << endl;
					cout << endl;
					cout << "Stats" << endl;
					cout << endl;
					cout << "Hull:" << hull << endl;
					cout << "Shields:" << shields << endl;
					cout << endl;
					cout << endl;
					cout << "_______________" << endl;
					typhonBaseWeapons = typhonBaseWeapons;
				}
				else if (input == 'B')
				{
					mainTritone();
						

					srand(static_cast<unsigned int>(time(0)));
					dodgePre = rand();
					dodge = (dodgePre % shipDodge) + 1;
					if (dodge == 2)
					{
						
					if (shields > 1)
						{
							typhonBaseWeapons = 0;
							cout << "Dodged Attack" << endl;
						}
						else if (shields < 1)
						{
							typhonBaseWeapons = 0;
						cout << "Dodged Attack" << endl;
						}
					}
					if (typhonBaseShields < 1)
					{
						typhonBaseHull = typhonBaseHull - torpedoes;
							

					}
					if (typhonBaseShields > 1)
					{
						typhonBaseShields = typhonBaseShields - (torpedoes/2);
							
					}
					if (shields < 1)
					{
						hull = hull - typhonBaseWeapons;
						shields = 0;
					}
					if (shields > 1)
					{
						shields = shields - typhonBaseWeapons;
					}
						
						
					if (hull < 1)
					{
						cout << "Your ship exploded. Simulation Terminated" << endl;
						a = true;
						hull = 0;
					}
					if(typhonBaseHull < 1)
					{
						cout << "Enemy Destroyed!" << endl;
						a = true;
						typhonBaseHull = 0;
					}
						

					if(typhonBaseShields < 1)
					{
						cout << "Enemy Shields are Down!" << endl;
						mainTritone();
						typhonBaseShields = 0;
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
						cout << "Enemy Hull:" << typhonBaseHull << endl;
						cout << "Enemy Shields:" << typhonBaseShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						typhonBaseWeapons = typhonBaseWeapons;
						if (typhonBaseShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
				}
			}while(!e);
				
				{
						
					if(shipName == "Avenger")
					{
						mainTritone();
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
						mainTritone();
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
						mainTritone();
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
						mainTritone();
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
		if (storyProgress == 3)
		{
			cout << "Ensign Niron: We have arrived at Ba'tok" << endl;
			mainTritone();
			cout << endl;
			textPause();
			cout << "USS Berlin: We have arrived at our destination. Hail the K'targ and" << endl;
			cout << "begin the diplomatic talks." << endl;
			mainTritone();
			cout << endl;
			textPause();
			cout << "A. Hail K'targ, B. Attack K'targ." << endl;
			cin >> input;
			if (input == 'B')
			{
				alternates = 3;
			}
			if (input == 'A')
			{
				cout << "Hailing K'targ." << endl;
				mainTritone();
				cout << endl;
				textPause();
				cout << "Chancoller Moreth: This is Chancoller Moreth, to whom am I adressing?" << endl;
				mainTritone();
				textPause();
				cout << "A. Your Doom. B. This is Captain Kevin Novatia of the Federation." << endl;
				cout << "We have come to begin diplomatic talks." << endl;
				mainTritone();
				cout << endl;
				cin >> input;
				if (input == 'A')
				{
					alternates = 3;
				}
				if (input ==  'B')
				{
					cout << "Chancoller Moreth: You incompetent topah! You think you can cause chaos in the Klingon Empire" << endl;
					cout << "and get away with it! No. You will die where you stand." << endl;
					mainTritone();
					cout << endl;
					textPause();
					cout << "A. PetaQ! You make useless claims. You utter one more word Qi'YaH and you will die!" << endl;
					cout << "B. What? Im sure there is a missunderstanding. We never attacked you." << endl;
					mainTritone();
					cout << endl;
					cin >> input;
					if (input == 'B')
					{
						alternates = 3;
					}
					if (input == 'A')
					{
						cout << "Chancoller Moreth: You swear well Federation. Very well. We have found that your Federation agents" << endl;
						cout << "infiltrated our houses and have been sparking a Klingon Civil War. Do you deny this?" << endl;
						mainTritone();
						cout << endl;
						cout << "A. Yes. B. No" << endl;
						mainTritone();
						cout << endl;
						cin >> input;
						if (input == 'B')
						{
							alternates = 3;
						}
						if (input == 'A')
						{
							cout << "Chancoller Moreth: We will give you the evidence. If you can support a claim that says" << endl;
							cout << "you are innocent we will consider it." << endl;
							storyProgress = 4;
							alternates = 0;
						}
					}
				}
			}
			if (alternates == 3)
			{
				cout << "Chancoller Moreth: You die!" << endl;
				AfleetNumber = 1;
				a = false;
				do
				{
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								ktargWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								ktargWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (ktargShields < 1)
						{
							ktargHull = ktargHull - (phasers/2);
						}
						if (ktargShields > 1)
						{
							ktargShields = ktargShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - ktargWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - ktargWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (ktargShields < 1)
							{
								ktargHull = ktargHull - AfleetDamege;
							}
							if (ktargShields > 1)
							{
								ktargShields = ktargShields - AfleetDamege;
							}
						}
						if(ktargHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							ktargHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							mainTritone();
							remainingTheme();
						}
							

						if(ktargShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							ktargShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << ktargHull << endl;
						cout << "Enemy Shields:" << ktargShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						ktargWeapons = vorchaWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								ktargWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								ktargWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (ktargShields < 1)
						{
							ktargHull = ktargHull - torpedoes;
						}
						if (ktargShields > 1)
						{
							ktargShields = ktargShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						if (AfleetNumber > 0)
						{
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						}
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - ktargWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - ktargWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (ktargShields < 1)
							{
								ktargHull = ktargHull - AfleetDamege;
							}
							if (ktargShields > 1)
							{
								ktargShields = ktargShields - AfleetDamege;
							}
						}
						if(ktargHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							ktargHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							mainTritone();
							remainingTheme();
						}
							

						if(ktargShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							ktargShields = 0;
						}
						cout << "_______________" << endl;
						if (ktargShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << ktargHull << endl;
						cout << "Enemy Shields:" << ktargShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						ktargWeapons = vorchaWeapons;
						if (ktargShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
				cout << "Ensign Niron: Another Klingon Ship is Approaching, its a Neg'Var Class." << endl;
				a = false;
				do
				{
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								trethWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								trethWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (trethShields < 1)
						{
							trethHull = trethHull - (phasers/2);
						}
						if (trethShields > 1)
						{
							trethShields = trethShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - trethWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - trethWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (trethShields < 1)
							{
								trethHull = trethHull - AfleetDamege;
							}
							if (trethShields > 1)
							{
								trethShields = trethShields - AfleetDamege;
							}
						}
						if(trethHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							trethHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							mainTritone();
							remainingTheme();
						}
							

						if(trethShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							trethShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << trethHull << endl;
						cout << "Enemy Shields:" << trethShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						trethWeapons = negvarWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								trethWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								trethWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (trethShields < 1)
						{
							trethHull = trethHull - torpedoes;
						}
						if (trethShields > 1)
						{
							trethShields = trethShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - trethWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - trethWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (trethShields < 1)
							{
								trethHull = trethHull - AfleetDamege;
							}
							if (trethShields > 1)
							{
								trethShields = trethShields - AfleetDamege;
							}
						}
						if(trethHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							trethHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							mainTritone();
							remainingTheme();
						}
							

						if(trethShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							trethShields = 0;
						}
						cout << "_______________" << endl;
						if (trethShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << trethHull << endl;
						cout << "Enemy Shields:" << trethShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						trethWeapons = negvarWeapons;
						if (trethShields > 1)
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
							mainTritone();
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
							mainTritone();
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
							mainTritone();
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
							mainTritone();
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
		textPause();
		cout << "After several days." << endl; 
		textPause();
		cout << "Doctor Iona: Sir, i've anylized the DNA. Its Romulan." << endl;
		mainTritone();
		textPause();
		cout << "Romulan? Ensign Niron: Scan the area for Romulan Signitures." << endl;
		mainTritone();
		textPause();
		cout << "Ensign Niron: 8 Romulan Warbirds, De'redex class, are headed toward Qonos." << endl;
		mainTritone();
		textPause();
		cout << "A. Hail Chancoller Moreth. B. Warp to Qonos." << endl;
		cin >> finalChoice;
		if (finalChoice == 'A')
		{
			cout << "Chancoller Moreth: What? Our reports said they were attack Bo'rath." << endl;
			cout << "We are sending out fleets to Qonos now." << endl;
			AfleetNumber = 12;
		}
		if (finalChoice == 'B')
		{
			AfleetNumber = 1;
		}
		cout << "Ensign Niron: Setting a course to Qonos." << endl; 

		cout << "Target the nearest warbird." << endl;
					
				deFleet = 8;
				a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;
		
	a = false;
				do
				{
					deWeapons = deWeapons * deFleet;
					cout << "A. Phasers B.Photons" << endl;
					cin >> input;
					if (input == 'A')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
						}
							

						if (deShields < 1)
						{
							deHull = deHull - (phasers/2);
						}
						if (deShields > 1)
						{
							deShields = deShields - phasers;						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;
							}
							
							
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							cout << endl;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						cout << "Damege Dealt:" << phasers << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
					}
					else if (input == 'B')
					{
						cout << endl;
						cout << endl;
						mainTritone();
							

						srand(static_cast<unsigned int>(time(0)));
						dodgePre = rand();
						dodge = (dodgePre % shipDodge) + 1;
						if (dodge == 2)
						{
							
							if (shields > 1)
							{
								deWeapons = 0;
								cout << "Dodged Attack" << endl;
							}
							else if (shields < 1)
							{
								deWeapons = 0;
							cout << "Dodged Attack" << endl;
							}
						}
						if (deShields < 1)
						{
							deHull = deHull - torpedoes;
						}
						if (deShields > 1)
						{
							deShields = deShields - (torpedoes/2);						
						}
						srand(static_cast<unsigned int>(time(0)));
						shipSelectionPre = rand();
						shipSelection = (shipSelectionPre % (AfleetNumber + 1)) + 1;
						if (shipSelection == 2)
						{
							if (shields < 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								hull = hull - deWeapons;
								shields = 0;
							}
							if (shields > 1)
							{
								cout << "The Enemy is Firing on Us!" << endl;
								shields = shields - deWeapons;					
							}
							
								
							if (hull < 1)
							{
								cout << "Your ship exploded." << endl;
								a = true;
								hull = 0;
								return 0;
							}
						}
						else
						{
							srand(static_cast<unsigned int>(time(0)));
							shipSelectionStageTwoPre = rand();
							shipSelectionStageTwo = (shipSelectionStageTwoPre % 5) + 1;
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
							if (deShields < 1)
							{
								deHull = deHull - AfleetDamege;
							}
							if (deShields > 1)
							{
								deShields = deShields - AfleetDamege;
							}
						}
						if(deHull < 1)
						{
							cout << "Enemy Destroyed!" << endl;
							a = true;
							deHull = 0;
							cout << "Enemy Destroyed!" << endl;
							cout << "Mission Accomplished" << endl;
							deFleet = deFleet - 1;
							mainTritone();
							remainingTheme();
						}
							

						if(deShields < 1)
						{
							cout << "Enemy Shields are Down!" << endl;
							mainTritone();
							cout << endl;
							deShields = 0;
						}
						cout << "_______________" << endl;
						if (deShields > 1)
						{
							torpedoes = torpedoes/2;
						}
						cout << "Damege Dealt:" << torpedoes << endl;
						cout << "Damege All Allies Dealt:" << AfleetDamege << endl;
						cout << endl;
						cout << endl;
						cout << "Enemy Stats" << endl;
						cout << endl;
						cout << "Enemy Hull:" << deHull << endl;
						cout << "Enemy Shields:" << deShields << endl;
						cout << endl;
						cout << endl;
						cout << "Stats" << endl;
						cout << endl;
						cout << "Hull:" << hull << endl;
						cout << "Shields:" << shields << endl;
						cout << endl;
						cout << endl;
						cout << "_______________" << endl;
						deWeapons = deredexWeapons;
						if (deShields > 1)
						{
							torpedoes = torpedoes * 2;
						}
					}
				}while(!a);
			deHull = deredexHull;
			deShields = deredexShields;

	cout << "The Romulan Threat Is Gone, The Klingon Empire is Saved, And the Klingons" << endl;
	cout << "have decided not to wage war on the federation" << endl;


		cout << "End Credits" << endl;
		textPause();
		cout << "-----Extra Music-----" << endl;
		cout << endl;
		cout << "Fur Elise" << endl;
		cout << "Intro of Star Trek" << endl;
		mainTritone();
		remainingTheme();
		cout << endl;
		cout << endl;
		cout << "-----Story Writers-----" << endl;
		cout << endl;
		cout << "Alex Ruan" << endl;
		mainTritone();
		remainingTheme();
		cout << endl;
		cout << endl;
		cout << "-----Programmers-----" << endl;
		cout << endl;
		cout << "Alex Ruan" << endl;
		mainTritone();
		remainingTheme();
		cout << endl;
		cout << endl;
		textPauseLong();
		return 0;
	}
//End of Story

