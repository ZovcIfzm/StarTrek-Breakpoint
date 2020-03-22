
//////////////////
#include <iostream>
#include <string>
#include <windows.h>
#include <cstdlib>
#include <ctime>
#include <fstream>


//Needed Begining Stuff
using namespace std;
//////////////////

//I see your looking at this fine code.
//Note known Errors that Need Fixing
//None

//Note known Errors that don't really need fixing but it would be good to fix
//None

int main()
{
//Class
	

//Initializing the Variables
//Errors - None


	//Class
		

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
		bool dl7;
		dl7 = false;
		int popularity;
		popularity = 0;
		karma = 0;
		int AfleetNumber;
		int AfleetDamege;
		int alternates;
		alternates = 0;
		string answer;
		string shipPositionClass;
		char inputTwo;
		char choice;
		char finalChoice;

		string destinationOne;
		string destinationTwo;
		string destinationThree;
		string destinationFour;
		string destinationFive;
		string destinationSix;
		string destinationSeven;
		string destinationEight;
		string destinationNine;
		string destinationTen;
		string destination;


		destinationOne = "-";
		destinationTwo = "-";
		destinationThree = "-";
		destinationFour = "-";
		destinationFive = "-";
		destinationSix = "-";
		destinationSeven = "-";
		destinationEight = "-";
		destinationNine = "-";
		destinationTen = "-";


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

	//Klingon

		int poleronPhaser1;
		int poleronPhaser2;
		int poleronPhaser3;
		int klingonDisruptors1;
		int klingonDisruptors2;

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

	//Klingon Static Values

		poleronPhaser1 = 900;
		poleronPhaser2 = 1400;
		poleronPhaser3 = 2200;
		klingonDisruptors1 = 1200;
		klingonDisruptors2 = 1700;

	//Romulan

		int plasmaPhaser;
		plasmaPhaser = 800;
		int deredexHull;
		int deredexShields;
		int deredexWeapons;
		deredexWeapons = plasmaPhaser;

		deredexHull = 2000;
		deredexShields = 3000;

		int deHull;
		int deShields;
		int deWeapons;
		deHull = deredexHull;
		deShields = deredexShields;
		deWeapons = plasmaPhaser;
		int deFleet;

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
		bool partA;
		bool partB;
		bool partC;
		bool partD;
		bool partE;
		partA = true;
		partB = true;
		partC = true;
		partD = true;
		partE = true;

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
			Beep(523,125);  // C
			cout << "Part I - Tutorial" << endl;
			Sleep(2000);
			cout << "You are Ensign Kevin Novatia" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(3000);
			cout << "You are on Starbase 78 in the Lancardo Sector" << endl; 
			cout << "awaiting your first deep space assignment." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(5000);
			cout << "The Stardate is 44253.8" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(5000);
			cout << "Lets Begin" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep (2000);

	//Screen Jump
	//Errors - None
	//Amount of Jump can be debated

			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			cout << endl;
			Sleep(2000);

	//Story Begining
	//Alpha Section Alpha
	//Errors - None
			if(true)
			{
			cout << "You awake on your bed and get up. You room is small and cubicle." << endl; 
			cout << "There is a door, a cabinet, your bed, and a calandar." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(2000);
			cout << "Do you A. Go back to sleep. B. Go out the door. C. Look in the cabinet." << endl;
			cout << "Or D. Look at your calendar." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
			if (input == 'A')
			{
				Beep(523,125);  // C
				cout << "You go back to sleep." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(2000);
				cout << "You awake on your bed and get up. You room is small and cubicle. There is a door, a cabinet, your bed, and a calandar." << endl;
				cout << "Do you, B. Go out the door. C. Look in the cabinet. Or D. Look at your calendar." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(1000);
				cin >> input;
				if (input == 'B')
				{
					Beep(523,125);  // C
					cout << "You go out the door and you realize, you have no idea" << endl;
					cout << "what you are supposed to do. You go back inside your room." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(1000);
					cout << "Do you, C. Look in the cabinet. Or D. Look at your calendar." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;
					if (input == 'C')
					{
						Beep(523,125);  // C
						cout << "You look in the cabinet there is nothing there." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << "Do you, D. Look at your calendar." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cin >> input;
						if (input == 'D')
						{
							Beep(523,125);  // C
							cout << "Well FINALLY. You just had to choose every other option didn't you." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(2000);
							cout << "On the calender you see you have to go to the ship dock to wait for your ship." << endl;
							cout << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
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
				Beep(523,125);  // C
				cout << "You go out the door and you realize, you have no idea what" << endl;
				cout << "you are supposed to do. You go back inside your room." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "Do you, A. Go back to sleep, C. Look in the cabinet." << endl;
				cout << "Or D. Look at your calendar." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cin >> input;

				if (input == 'A')
				{
					Beep(523,125);  // C
					cout << "You wake up." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(2000);
					cout << "Do you C. Look in the cabinet. Or D. Look at your calendar." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;

					if (input == 'D')
					{
						Beep(523,125);  // C
						Sleep(2000);
						cout << "On the calender you see you have to go to the ship dock to" << endl;
						cout << "wait for your ship." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(3000);
						cout << endl;
						storyProgress = 1;
					}
				}
				else if (input == 'C')
				{
					Beep(523,125);  // C
					cout << "You look in the cabinet there is nothing there." << endl;
					cout << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << "Do you, D. Look at your calendar." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;
					if (input == 'D')
					{
						Beep(523,125);  // C
						Sleep(2000);
						cout << "On the calender you see you have to go to the ship dock" << endl;
						cout << "to wait for your ship." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(3000);
						storyProgress = 1;
					}
				}

	//Split

				if (input == 'C')
				{
					Beep(523,125);  // C
					cout << "You look in the cabinet there is nothing there." << endl;
					cout << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << "Do you, D. Look at your calendar." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;
					if (input == 'D')
					{
						Beep(523,125);  // C
						Sleep(2000);
						cout << "On the calender you see you have to go to the ship dock to wait" << endl;
						cout << "for your ship." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(3000);
						storyProgress = 1;

	//Split

				if (input == 'D')
				{
					Beep(523,125);  // C
					Sleep(2000);
					cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
					cout << "your ship." << endl;
					cout << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
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
				Beep(523,125);  // C
				cout << "You look in the cabinet there is nothing there." << endl;
				cout << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "Do you, A. Go back to sleep, B. Go out the door. Or D. Look at your calendar." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cin >> input;
				if (input == 'D')
				{
					Beep(523,125);  // C
					Sleep(2000);
					cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
					cout << "your ship." << endl;
					cout << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(3000);
					storyProgress = 1;
				}

	//Split

				if (input == 'B')
				{
					Beep(523,125);  // C
					cout << "You go out the door and you realize, you have no idea what you are" << endl;
					cout << "supposed to do. You go back inside your room." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << "Do you, A. Go to sleep. Or D. Look at your calendar." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;
					if (input == 'D')
					{
						Beep(523,125);  // C
						Sleep(2000);
						cout << "On the calender you see you have to go to the ship dock to wait" << endl;
						cout << "for your ship." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(3000);
						storyProgress = 1;
					}

	//Split

					if (input == 'A')
					{
						Beep(523,125);  // C
						cout << "You go back sleep." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << "Do you D go look at your calendar?" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cin >> input;
						if (input == 'D')
						{
							Beep(523,125);  // C
							Sleep(2000);
							cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
							cout << "your ship." << endl;
							cout << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(3000);
							storyProgress = 1;
						}
					}
				}
				if (input == 'A')
				{
					Beep(523,125);  // C
					cout << "You awake on your bed and get up." << endl;
					cout << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(2000);
					cout << "Do you B. Go outside. Or D. Look at your calendar." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;
					if (input == 'B')
					{
						Beep(523,125);  // C
						cout << "You go outside and realize you have no idea where to go. You go back" << endl;
						cout << "in your room." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << "Do you, D. Look at your calendar." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cin >> input;
						if (input == 'D')
						{
							Beep(523,125);  // C
							Sleep(2000);
							cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
							cout << "your ship." << endl;
							cout << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(3000);
							storyProgress = 1;
						}
					}
					if (input == 'D')
					{
						Beep(523,125);  // C
						Sleep(2000);
						cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
						cout << "your ship." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(3000);
						storyProgress = 1;
					}
				}

	//Alpha Section Epsilon
	//Errors - None

				{
					if (input == 'A')
					{
						Beep(523,125);  // C
						cout << "You awake on your bed and get up." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(2000);
						cout << "Do you D. Look at your calendar." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cin >> input;
						if (input == 'D')
						{
							Beep(523,125);  // C
							Sleep(2000);
							cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
							cout << "your ship." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cout << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(3000);
							storyProgress = 1;
						}
					}
				}	
				
			}
			else if (input == 'D')
			{
				Beep(523,125);  // C
				Sleep(2000);
				cout << "On the calender you see you have to go to the ship dock to wait for" << endl;
				cout << "your ship." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(3000);
				storyProgress = 1;

	//Beta Section Alpha
	//Coridors

			}
			if (storyProgress = 1)
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Beep(659,250);  // E
				Beep(523,250);  // C
				Beep(440,250);  // A
				Beep(587,250);  // D
				Beep(784,500);  // G
				cout << "You get up and go to the ship dock. As you are walking along the corrider," << endl;
				cout << "someone comes up to you" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << endl;
				cout << "Stranger: Hello, how are you today?" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(2000);
				cout << endl;
				cout << "Do you A. Say Hello I am fine, how are you? B. Say Get out of my way idiot" << endl;
				cout << "and punch him. or C. Shoot him with a phaser." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				cin >> choice;
				if (choice == 'B' || choice == 'C')
				{
					Beep(523,125);  // C
					cout << "Stranger: OW! Security! Security!" << endl;
					Beep(440,500);  // A
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(2000);
					cout << endl;
					karma = -1;
					cout << "Do you A. Say I'm sorry. It was a reflex. Or B. Set Phasers to kill" << endl;
					cout << "and shoot him." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					cin >> choice;
					if (choice == 'B')
					{
						Beep(523,125);  // C
						cout << "You shot him. What are you doing! Your not supposed to be shooting" << endl;
						cout << "your friends!" << endl;
						Beep(440,500);  // A
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						karma = -2;
						storyProgress = 2;
					}
					else if (choice == 'A')
					{
						Beep(523,125);  // C
						cout << "Stranger: ... ok..." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						storyProgress = 2;
					}
					
				}
				else
				{
					Beep(523,125);  // C
					cout << "Stranger: I'm fine, nice meeting you!." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					karma = 1;
					storyProgress = 2;
				}
			}

	//Beta Section Beta

			cout << "-*You arive at the ShipDock*-" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << endl;
			Sleep(2000);

	//Beta Section Beta Alpha

			if (karma == -2)
			{
				Beep(523,125);  // C
				cout << "Unknown Captain: Hello I am Captain Julia, I'm Sorry, however our" << endl;
				cout << "ship designator was shot down in the corridors by someone." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(2000);
				cout << "Captain Julia: We have run a security check through the corriders and" << endl;
				cout << "found that Kevin Novatia shot him." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Security: Ensign, if you would come with us." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "Do you A. Come willingly B. Shoot them. or C. Run away." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cin >> input;
				if (input == 'B')
				{
					Beep(523,125);  // C
					cout << "Before you could raise your phaser, you were shot and killed." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(2000);
					cout << "GAME OVER" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Beep(659,250);  // E
					Beep(523,250);  // C
					Beep(440,250);  // A
					Beep(587,250);  // D
					Beep(784,500);  // G
					Sleep(2000);
					return 0;
				}

	//Beta Section Beta Beta

				else if (input == 'C')
				{
					Beep(523,125);  // C
					Beep(440,500);  // A
					cout << "Two seconds after you started running," << endl;
					cout << "you were shot and killed." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(2000);
					cout << "Game Over" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Beep(659,250);  // E
					Beep(523,250);  // C
					Beep(440,250);  // A
					Beep(587,250);  // D
					Beep(784,500);  // G
					Sleep(2000);
					return 0;
				}

	//Beta Section Beta Delta

				else if (input == 'A')
				{
					Beep(523,125);  // C
					cout << "-*You were taken to the court on starbase.*-" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(2000);
					cout << "Judge: You are convicted of murdering another person. We have evidance" << endl;
					cout << "showing your homicide. Do you have anything to say?" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(1000);
					cout << "Do you A. Say No. B. Try to run. or C. Take the security guards phaser." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cin >> input;
					if (input == 'A')
					{
						Beep(523,125);  // C
						cout << endl;
						cout << "You were sentanced to the penal colony on Theta 5 for 20 years." << endl;
						cout << "Atleast you got to serve StarFleet." << endl;
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cout << "Game Over" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Beep(659,250);  // E
						Beep(523,250);  // C
						Beep(440,250);  // A
						Beep(587,250);  // D
						Beep(784,500);  // G
						Sleep(2000);
						return 0;
					}

	//Beta Section Beta Epsilon

					else if (input == 'B')
					{
						Beep(523,125);  // C
						cout << endl;
						cout << "You tried to run but you were shot down." << endl;
						Beep(440,500);  // A
						cout << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cout << "Game Over" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Beep(659,250);  // E
						Beep(523,250);  // C
						Beep(440,250);  // A
						Beep(587,250);  // D
						Beep(784,500);  // G
						Sleep(2000);
						return 0;
					}

	//Beta Section Beta Gamma

					else if (input == 'C')
					{
						Beep(523,125);  // C
						Sleep(1000);
						cout << endl;
						cout << "You took the security guards phaser." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						Sleep(1000);
						cout << "Do you A. Shoot the judge. B. Take someone hostage and try to escape, shoot several people to make the point you will shoot." << endl;
						cout << "or C. Set the phaser to wide-beam kill and shoot." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						Sleep(1000);
						cin >> input;
						if (input == 'A')
						{
							Beep(523,125);  // C
							Sleep(1000);
							cout << "Nice shot, however a split second later you were killed." << endl;
							Beep(440,500);  // A
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << endl;
							cout << "Game Over" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Beep(659,250);  // E
							Beep(523,250);  // C
							Beep(440,250);  // A
							Beep(587,250);  // D
							Beep(784,500);  // G
							Sleep(2000);
							return 0;
						}

	//Beta Section Beta Theta

						if (input == 'B' || input == 'C')
						{
							Beep(523,125);  // C
							Beep(440,500);  // A
							Sleep(1000);
							cout << "Well done, now you begin your life as an outlaw and a mass murderer." << endl;
							cout << "Wait, wasn't the point to become a starfleet officer?" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cout << endl;
							Sleep(3000);
							cout << "Oh by the way, you forgot one thing. The transporter." << endl;
							cout << "Space has pretty thin air don't you think?" << endl;
							cout << endl; 
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(2000);
							cout << "Game Over" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Beep(659,250);  // E
							Beep(523,250);  // C
							Beep(440,250);  // A
							Beep(587,250);  // D
							Beep(784,500);  // G
							Sleep(2000);
							return 0;
						}
					}
				}

			}

	//Beta Section Delta

			else if (karma == -1 || karma == 1)
			{
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Beep(659,250);  // E
				Beep(523,250);  // C
				Beep(440,250);  // A
				Beep(587,250);  // D
				Beep(784,500);  // G
				Sleep(1000);
				Beep(523,125);  // C
				storyProgress = 2;
				cout << endl;
				cout << "-*You arive at the Ship Dock.*-" << endl;
				cout << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(2000);
				cout << "Unknown Captain: Hello I am Captain Alan and I will be designating you to" << endl;
				cout << "your ships." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(3000);
				cout << endl;
				cout << "Captain Alan: Parsins, Parvati, Rudolph, Zachary, you will be" << endl;
				cout << "reporting to Captain Zephren." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(3000);
				cout << "Captain Alan: Roberto, Jonathan, Patrick, Kevin, you will" << endl;
				cout << "be coming with Captain Jamerson." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(3000);
				do
				{
					cout << "Do you, A. Walk away. B.Go to Captain Jamerson or C. Shoot everyone." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(1000);
					cin >> input;
				
					if (input == 'A')
					{
						Beep(523,125);  // C
						Sleep(1000);
						cout << endl;
						cout << "Captain Jamerson. Hey! Your supposed to come to me!." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
					}
					else if (input == 'C')
					{
						Beep(523,125);  // C
						Sleep(1000);
						cout << "Seriously. Are you this homicidal. I'm going to save you from Game" << endl;
						cout << "Over and restarting the whole game. Try again." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
					}
					else if (input == 'B')
					{
						Beep(523,125);  // C
						Sleep(1000);
						cout << "-*You walk to Captain Jamerson*-" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						dl1 = true;
					}
				}while (!dl1);
			}
	//Beta Section Episilon
			cout << "Captain Jamerson: Welcome to the crew. We will have a welcome party over" << endl;
			cout << "in the ship Mess Hall." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "-*You walk into the ship*-" << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(500);
			cout << "There are several corriders with signs leading to an area." << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << "The left corrider goes to the weapons locker." << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(3000);
			cout << "The middle corrider goes to engineering." << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(2000);
			cout << "The right corrider goes to the mess hall." << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(2000);
			cout << endl;
			
			do
			{
				cout << "Do you go A. Left. B. Forward. Or C. Right." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cin >> input;
				if (input == 'A')
				{
					Beep(523,125);  // C
					cout << "Captain Jamerson: And why would you go to the weapons locker Ensign?" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
				}
				else if (input == 'B')
				{
					Beep(523,125);  // C
					cout << "Engineer: You're not supposed to be in here." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
				}
				else if (input == 'C')
				{
					Beep(523,125);  // C
					cout << "-*You hear distant murmering*-" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					dl2 = true;
				}
			}while (!dl2);
			cout << "Officer: Hi there, we just got out the piano. Do you want to play a song?" << endl;
			cout << "You say A.Sure B.No C. ... " << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
			if (input == 'A')
			{
				Beep(523,125);  // C
				cout << endl;
				Sleep(1000);
				cout << "-*You start playing*-" << endl;
				cout << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(2000);
				Beep (659,220);
				Beep (0,220);
				Beep (622,220);
				Beep (0,220);		
				Beep (659,220); 
				Beep (0,220);
				Beep (622,220);
				Beep (0,220);
				Beep (659,220);
				Beep (0,220);
				Beep (494,220); 
				Beep (0,220);
				Beep (587,220); 
				Beep (0,220);
				Beep (523,220); 
				Beep (0,220);
				Beep (440,220);  
				Beep (0,240);
				Beep (262,220); 
				Beep (0,220);
				Beep (330,220);  
				Beep (0,220);
				Beep (440,220);  
				Beep (0,220);
				Beep (494,220);  
				Beep (0,240);
				Beep (330,220);  
				Beep (0,220);
				Beep (415,220);  
				Beep (0,220);
				Beep (494,220);  
				Beep (0,220);
				Beep (523,220);  
				Beep (0,240);
				Beep (330,220);  
				Beep (0,220);
				Beep (659,220);  
				Beep (0,220);
				Beep (622,220); 
				Beep (0,220);
				Beep (659,220);
				Beep (0,220);
				Beep (622,220);  
				Beep (0,220);
				Beep (659,220); 
				Beep (0,220);
				Beep (494,220); 
				Beep (0,220);
				Beep (587,220); 
				Beep (0,220);
				Beep (523,220); 
				Beep (0,220);
				Beep (440,220); 
				Beep (0,240);
				Beep (262,220); 
				Beep (0,220);
				Beep (330,220); 
				Beep (0,220);
				Beep (440,220);  
				Beep (0,220);
				Beep (494,220);  
				Beep (0,240);
				Beep (330,220);  
				Beep (0,220);
				Beep (523,220);  
				Beep (0,220);
				Beep (494,220); 
				Beep (0,240);
				Beep (440,220);

				Sleep(2000);
				cout << "-*Clap Clap Clap Clap Clap Clap*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Wonderful!" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
			}
			else if (input == 'B' || input == 'C')
			{
				Beep(523,125);  // C
				cout << "Your desision." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
		}


	//Start Section Beta
	//Start Game N response response

		else if (skipPoints == "No")
		{
			Beep(523,125);  // C
			cout << "Hmph. I thought you wanted to play. I guess I was wrong." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(2000);
			cout << "GAME OVER" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Beep(659,250);  // E
			Beep(523,250);  // C
			Beep(440,250);  // A
			Beep(587,250);  // D
			Beep(784,500);  // G
			return 0;
		}
	//Beta Section Gamma
		cout << "-*The Party Ends*-" << endl;
		cout << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1000);
		cout << "Com:All hands battlestations!" << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1000);
		cout << "Officer: Ensign report to the bridge." << endl;
		Beep(392,250);  // G
		Beep(523,125);  // C
		Beep(698,500);  // F
		Sleep(1000);

		do
		{
			cout << "Do you A.Go to the Bridge. B. Go to Engineering. Or C. The Shuttlebay." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
			if (input == 'A')
			{
				Beep(523,125);  // C
				Sleep(1000);
				cout << "-*The Ship Shakes*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(500);
				cout << "You run to the bridge. On the way you see an injured crewman." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Crewman: *Gasp* Please help me." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Do you A. Help the crewman or B. continue on your way." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cin >> input;
				if (input == 'A')
				{
					Beep(523,125);  // C
					cout << "-*You help the crewman to get to sickbay.*-" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(1000);
					karma++;
				}
				else if (input == 'B' || 'A')
				{
					cout << "-*You continue to the bridge.*-" << endl;
					cout << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(1000);
				}
				if (true)
				{

					cout << "Captain Jamerson: Kevin, take a station. Tactical, Com, or Operations." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(3000);
					cin >> shipPositionClass;

	//Beta Section Theta Alpha

					if (shipPositionClass == "Tactical")
					{
						Beep(523,125);  // C
						cout << "Captain Jamerson: Charge Phasers." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cout << "Target enemy ship" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cout << "Attack pattern Alpha" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(2000);
						cout << "A. Charge Phasers, B. Fire Phasers." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(2000);
						cin >> input;
						if (input == 'A')
						{
							Beep(523,125);  // C
							Sleep(1000);
							cout << "Charging Phasers." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Captain Jamerson: Fire!" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "A. Fire Phasers. B. Do Nothing." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cin >> input;
							if (input == 'A')
							{
								Beep(523,125);  // C
								cout << "Firing Phasers." << endl;
								Beep(440,500);  // A
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Operations Officer: Enemy destroyed!." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "What were we shooting at?" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Captain Jamerson: Klingon ship." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								dl3 = true;
							}
							else if (input == 'B')
							{
								Beep(523,125);  // C
								cout << "Captain Jamerson: What are you doing! Fire Phasers!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Firing Phasers." << endl;
								Beep(440,500);  // A
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Operation Officer: Enemy destroyed!." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "What were we whooting at?" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Captain Jamerson: Klingon ship. Now tell me why didn't you fire!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Sorry, I suppose I was distracted." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Captain Jamerson: Well be more focused next time." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								dl3 = true;
							}
						}
						else if (input == 'B')
						{
							Beep(523,125);  // C
							Sleep(1000);
							cout << "-*Phasers aren't firing sir.*-" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Captain Jamerson: Try charging them." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Charging Phasers." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Captain Jamerson: Fire!" << endl;
							Beep(440,500);  // A
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "A. Fire Phasers. B. Do Nothing." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cin >> input;
							if (input == 'A')
							{
								Beep(523,125);  // C
								cout << "Firing Phasers." << endl;
								Beep(440,500);  // A
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Operations Officer: Enemy destroyed!." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "What were we shooting at?" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Captain Jamerson: Klingon ship." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								dl3 = true;
							}
							else if (input == 'B')
							{
								Beep(523,125);  // C
								cout << "Captain Jamerson: What are you doing! Fire Phasers!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Firing Phasers." << endl;
								Beep(440,500);  // A
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Operation Officer: Enemy destroyed!." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "What were we whooting at?" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Captain Jamerson: Klingon ship. Now tell me why didn't you fire!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Sorry, I suppose I was distracted." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Sleep(1000);
								cout << "Captain Jamerson: Well be more focused next time." << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								dl3 = true;
							}
						}
					}

	//Beta Section Theta Beta

					else if (shipPositionClass == "Operations")
					{
						Beep(523,125);  // C
						Sleep(1000);
						cout << "Captain Jamerson: Target the ship." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(2000);
						cout << "Captain Jamerson: Attack Pattern Alpha" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(2000);
						cout << "Captain Jamerson: Charge phasers." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(2000);
						cout << "A. Target Starbase B. Target Klingon Ship." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cin >> input;
						if (input == 'A')
						{
							Beep(523,125);  // C
							Sleep(1000);
							cout << "Tactical fire phasers." << endl;
							Beep(440,500);  // A
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Captain Jamerson: What the. Who issued the command to target" << endl;
							cout << "the station?" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Tactical: The command was issued from the.. Com..." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Security: Klingon Spy!" << endl;
							Beep(440,500);  // A
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(750);
							cout << "Congradualtions. Your dead. Accused of being a Klingon Spy." << endl;
							cout << "If you actually were a Klingon, you'd be ecstatic of dieing in battle." << endl;
							cout << endl; 
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(2000);
							cout << "Game Over" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Beep(659,250);  // E
							Beep(523,250);  // C
							Beep(440,250);  // A
							Beep(587,250);  // D
							Beep(784,500);  // G
							Sleep(2000);
							return 0;						
						}
						else if (input == 'B')
						{
							Beep(523,125);  // C
							Sleep(1000);
							cout << endl;
							cout << "Captain JamersonL Target enemy ship." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(2000);
							cout << "Captain Jamerson: Charge Phasers." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << endl;
							cout << "Tactical: Phasers charged." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << endl;
							cout << "Captain Jamerson: Fire!"<< endl;
							Beep(440,500);  // A
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << endl;
							cout << "Tactical: What were we shooting at?" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << endl;
							cout << "Captain Jamerson: Klingon ship." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << endl;
							dl3 = true;
						}
					}

	//Beta Section Theta Delta

					else if (shipPositionClass == "Com")
					{
						Beep(523,125);  // C
						Sleep(1000);
						cout << "Captain Jamerson: Attack Pattern Alpha!" << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cout << "A. Randomly press buttons. B.Go to Warp. C. Look up in" << endl;
						cout << "the database how to do Attack Pattern Alpha." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						Sleep(1000);
						cin >> input;
						if (input == 'A')
						{
							Beep(523,125);  // C
							cout << "Self Destruct Initiated." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Game Over" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Beep(659,250);  // E
							Beep(523,250);  // C
							Beep(440,250);  // A
							Beep(587,250);  // D
							Beep(784,500);  // G
							Sleep(2000);
							return 0;
						}
						else if (input == 'B')
						{
							Beep(523,125);  // C
							cout << "Well guess what. You just warped into the starbase. Die with style" << endl;
							cout << "I suppose." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Game Over" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Beep(659,250);  // E
							Beep(523,250);  // C
							Beep(440,250);  // A
							Beep(587,250);  // D
							Beep(784,500);  // G
							Sleep(2000);
							return 0;
						}
						else if (input == 'C')
						{
							Beep(523,125);  // C
							Sleep(500);
							cout << "To initiate attack pattern alpha. Tell the computer to" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "engage engines and keep a radius of 100 kilometers and circle around the" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "enemy by a constant right turn." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(500);

							do
							{
								cout << "A. Engage engines and keep A radius of 100 kilometers. B. Circle enemy" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								cin >> input;
								if (input == 'A')
								{
									Beep(523,125);  // C
									cout << "Keeping a radius of 100 kilometers..." << endl;
									Beep(392,250);  // G
									Beep(523,125);  // C
									Beep(698,500);  // F
									dl4 = true;
								}
								else if (input == 'B')
								{
									Beep(523,125);  // C
									cout << "Unable to comply. Engines offline." << endl;
									Beep(392,250);  // G
									Beep(523,125);  // C
									Beep(698,500);  // F
								}
							}while (!dl4);

	//Split

							do
							{
								cout << "A. Engage engines and keep A radius of 100 kilometers. B. Circle enemy" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								cin >> input;
								if (input == 'A')
								{
									Beep(523,125);  // C
									cout << "Unable to comply, already done." << endl;
									Beep(392,250);  // G
									Beep(523,125);  // C
									Beep(698,500);  // F
								}
								else if (input == 'B')
								{
									Beep(523,125);  // C
									cout << "Circling Enemy Ship..." << endl;
									Beep(392,250);  // G
									Beep(523,125);  // C
									Beep(698,500);  // F
									dl5 = true;
								}
							}while (!dl5);
							cout << "Captain Jamerson: Operations, target the enemy ship. Tactical charge phasers." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Operations: Target locked" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cout << "Tactical: Phasers Charged." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(2000);
							cout << "Captain Jamerson: Fire Phasers!" << endl;
							Beep(440,500);  // A
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Captain Jamerson: Enemy destroyed." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Tactical: Who was the enemy." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							Sleep(1000);
							cout << "Captain Jamerson: Klingon Ship." << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							dl3 = true;
						}
					}
				}
			}

	//Beta Section Gamma Beta

			else if (input == 'B')
			{
				Beep(523,125);  // C
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "Engineer: What are you doing here?" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*Engineer Looks at Your Uniform*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "Your supposed to be in the bridge." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
			else if (input == 'C')
			{
				Beep(523,125);  // C
				cout << "Ahem are you trying to escape the ship?" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
		}while(!dl3);

	//Delta Section Alpha
		if (true)
		{
			cout <<"-*Door Opens*- "<< endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
		
			cout <<"Klingon: For the high command!" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout <<"-*Klingon Fires a Disruptor at the Captain*-"<< endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout <<"A. Shoot the Klingon B. Do nothing"<< endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
		}
			if (input == 'A')
			{
				Beep(523,125);  // C
				cout << "You shot the Klingon" << endl;
				Beep(440,500);  // A
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				popularity = 1;
			}

			else if (input == 'B')
			{
				Beep(523,125);  // C
				cout << "Security: Die Klingon!" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*Phaser Blast*-" << endl;
				Beep(440,500);  // A
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
			}
			cout << "-*Beep Beep*-" << endl;
			Beep(923,125);  
			Sleep(500);
			Beep(923,125);  
			Sleep(1000);
			cout << "Commander: Three D-7s have dropped out of warp." << endl;
			Beep(923,125);  
			Sleep(500);
			Beep(923,125);  
			Sleep(1000);
			cout << "Commander: They are targeting the station!" << endl;
			Sleep(1000);
			cout << "They are firing!" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			Beep(440,500);  // A
			Sleep(500);
			Beep(440,750);  // A
			Sleep(250);
			Beep(440,250);  // A
			Sleep(600);
			Beep(440,750);  // A
			Sleep(100);
			Beep(440,500);  // A
			Sleep(1000);

		if (shipPositionClass == "Tactical")
		{
			cout << "Kevin arm and fire phasers!" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "A.Arm & Fire phasers. B.Shoot the rest of the crew." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
			if (input == 'A')
			{
				cout << "Firing Phasers" << endl;
				Beep(440,500);  // A
				Sleep(1000);
				cout << "Commander: We are being targeted. They are firing!" << endl;
				Beep(440,500);  // A
				Sleep(100);
				Beep(440,250);  // A
				Sleep(100);
				Beep(440,750);  // A
				cout << "-*Explosions all around*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*You are the last person left on the bridge*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
			else if (input == 'B')
			{
				cout << "-*You shoot all the rest of the crew*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*You are the last person left on the bridge*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
		}
		if (shipPositionClass == "Operations")
		{
			cout << "Kevin Target the ship!!" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "A. Target enemy. B.Shoot the rest of the crew." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
			if (input == 'A')
			{
				cout << "Firing Phasers" << endl;
				Beep(440,500);  // A
				Sleep(1000);
				cout << "Commander: We are being targeted. They are firing!" << endl;
				Beep(440,500);  // A
				Sleep(100);
				Beep(440,250);  // A
				Sleep(100);
				Beep(440,750);  // A
				cout << "-*Explosions all around*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*You are the last person left on the bridge*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
			else if (input == 'B')
			{
				cout << "-*You shoot all the rest of the crew*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*You are the last person left on the bridge*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
		}

		if (shipPositionClass == "Com")
		{
			cout << "Kevin Manuvers Alpha!" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "A. Start Manuvers. B.Shoot the rest of the crew." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
			if (input == 'A')
			{
				cout << "Firing Phasers" << endl;
				Beep(440,500);  // A
				Sleep(1000);
				cout << "Commander: We are being targeted. They are firing!" << endl;
				Beep(440,500);  // A
				Sleep(100);
				Beep(440,250);  // A
				Sleep(100);
				Beep(440,750);  // A
				cout << "-*Explosions all around*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*You are the last person left on the bridge*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
			else if (input == 'B')
			{
				cout << "-*You shoot all the rest of the crew*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << "-*You are the last person left on the bridge*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
		}
		if (true)
		{
			Sleep(1000);
			cout << "A. Take Tactical Position B. Surrender" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cin >> input;
		}
			if (input == 'A')
			{
				cout << "Phasers and Torpedoes fire everywhere." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				Beep(440,500);  // A
				Sleep(500);
				Beep(440,750);  // A
				Sleep(250);
				Beep(440,250);  // A
				Sleep(600);
	//2014!
				Beep(440,750);  // A
				Sleep(100);
				Beep(440,500);  // A
				Sleep(1000);
				cout << "-----        ------                   --" << endl;
				cout << "   -        -||||||-                o---|" << endl;
				cout << "    -------------                     --" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				Sleep(1000);
				cout << "-----        ------                --" << endl;
				cout << "   -        -||||||-0------------o---|" << endl;
				cout << "    -------------                  --" << endl;
				cout << endl;
				cout << endl;
				cout << endl;
				Sleep(1000);
				cout << "-----        ------               +|+" << endl;
				cout << "   -        -||||||-            (+-O-+)" << endl;
				cout << "    -------------                 +|+" << endl;
				Sleep(2000);
				cout << "One Klingon K'vort ship is approaching at fast warp." << endl;
				cout << "Phasers work best on shields and do half damege to hull. Photons work the other way around." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
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
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
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
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
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
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "Klingons don't take prisoners unless it's nessicary" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "You were shot and killed." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(2000);
				cout << "GAME OVER" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Beep(659,250);  // E
				Beep(523,250);  // C
				Beep(440,250);  // A
				Beep(587,250);  // D
				Beep(784,500);  // G
				Sleep(2000);
				return 0;
			}
		
			cout << "End of Tutorial" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Beep(659,250);  // E
			Beep(523,250);  // C
			Beep(440,250);  // A
			Beep(587,250);  // D
			Beep(784,500);  // G


			

		}
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
				cout << "You are assigned to the task force to defeat the enemy Starbase" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				if (true)
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
					a = false;
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
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
					
			cout << "Setting Course to Starbase 78." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			Sleep(1000);
			cout << "Admiral Decker: Captain Novatia, as the current crises is over." << endl;
			cout << "You will be given your crew." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << endl;
			Sleep(1000);
			cout << "Your Commander is Commander Keith Benning." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << endl;
			Sleep(1000);
			cout << "Commander Keith: Hello Sir." << endl;
			cout << endl;
			Sleep(1000);
			cout << "Your Operations Officer is Ensign Ethan Niron." << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "-*Ensign Ethan Nods*-" << endl;
			cout << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "Tactical is Luitenent Commander Jay Parkinsons" << endl;
			cout << "He is also your Security Chief." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			cout << endl;
			Beep(698,500);  // F
			Sleep(1000);
			cout << "Your Chief Engineer is Blake Finery" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << endl;
			cout << "Your Doctor is Zachary Iona." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << endl;
			Sleep(1000);
			cout << "Your mission is to accompany the USS Berlin on its diplomatic mission to Ba'tok" << endl;
			cout << "Find out why the Klingons are attacking us." << endl;
			destinationOne = "Earth";
			destinationTwo = "Ba'tok";
			Sleep(1000);
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			cout << "Your ship the " << shipName << " leaves spacedock." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << "Set Course For" << endl;
			cout << "Type your Destination" << endl;
			cout << destinationOne << "   " << destinationTwo << "   " << destinationThree << "   " << destinationFour << "   " << destinationFive << "   " << destinationSix << "   " << destinationSeven << "   " << destinationEight << "   " << destinationNine << "   " << destinationTen << endl; 
			cin >> answer;
			if (answer == "Ba'tok")
			{
				cout << "Ensign Niron: Setting course for Ba'tok" << endl;
				storyProgress = 3;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
			else if (answer == "Earth")
			{
				cout << "Ensign Niron: Setting course for Earth" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				storyProgress = 0;
			}
			cout << "Commander Benning: Captain, some of the crew are orginizing a party over in the Mess Hall. Would you like to join us?" << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1000);
			cout << endl;
			cout << "A. Yes   B. No" << endl; 
			cin >> inputTwo;
			if (inputTwo == 'B')
			{
				cout << "Ok then, well, if you ever change your mind. You know where to find us." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1000);
				cout << endl;
				cout << "-*After a while you arrive at your destination*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
			}
			else if (inputTwo == 'A')
			{
				cout << endl;
				cout << "Ok then, come with me." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1500);
				cout << endl;
				cout << "-*You walk through the corridors*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1500);
				cout << endl;
				cout << "Commander Benning: Our new engineer apperently likes experimenting." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(1500);
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
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(1500);
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
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(500);
				cout << endl;
				cout << "-*You arrive at the Mess Hall*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1500);
				cout << endl;
				cout << "Commander Benning: You first." << endl;
				cout << endl;
				Sleep(1500);
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << "-*You enter the room*-" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F	
				cout << endl;
				Sleep(1500);
				cout << "Luitenent Parkinson: Captain theres a urgent matter we need to attend to." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				Sleep(1500);
				cout << endl;
				cout << "A. What is it. B. Shut up. C. What ever it is i'm sure you can take care of it." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cin >> input;
				if (input == 'B')
				{
					cout << "Luitenent Parkinson: What? Fine." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					popularity = popularity - 1;
				}
				else if (input == 'C')
				{
					cout << "Luitenent Parkinson: Ok" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
				}
				else if (input == 'A')
				{
					cout << "Luitenent Parkinson: Our security sensors are too weak. The sensors cannot detect where everyone is!" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(1500);
					cout << "A. ... Thats it? B. Luitenent, no offense but you are overreacting. C. OH MY GOSH YOUR RIGHT! Luitenent Finery upgrade the sensors." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					cin >> input;
					cout << endl;
					if (input == 'A')
					{
						cout << "Luitenent Parkinson: ... " << endl;
						popularity = popularity - 1;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						Sleep(1500);
					}
					else if (input == 'B')
					{
						cout << "Luitenent Parkinson: No. not at all. Captain, we need to upgrade the sensors." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						Sleep(1500);
					}
					else if (input == 'C')
					{
						cout << "Luitenent Parkinson: Thank you Captain." << endl;
						popularity = popularity + 1;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						Sleep(1500);
					}
					cout << "Com: This is Ensign Niron, We are approaching our destination." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(1500);
					cout << "-*You arrive on the bridge*-" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
				}
			}
			
			if (storyProgress < 3)
			{
				cout << "Ensign Niron: We have arrived at Earth" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(1500);
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
				Sleep(1500);
				cout << "-*You go to Ba'tok*-" << endl;
				storyProgress = 3;
				}
				if (input == 'B')
				{
					cout << endl;
					cout << "Utopia Planetia: Beggining Upgrades to shields." << endl;
					Sleep(1500);
					cout << "Upgrades Completed." << endl;
					cout << endl;
					shields = shields + 5000;
					cout << "Utopia Planetia, goodbye. Well your supposed to go to Ba'tok right?" << endl;
					Sleep(1500);
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
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
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
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
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
			if (storyProgress = 3)
			{
				cout << "Ensign Niron: We have arrived at Ba'tok" << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(1500);
				cout << "USS Berlin: We have arrived at our destination. Hail the K'targ and" << endl;
				cout << "begin the diplomatic talks." << endl;
				Beep(392,250);  // G
				Beep(523,125);  // C
				Beep(698,500);  // F
				cout << endl;
				Sleep(1500);
				cout << "A. Hail K'targ, B. Attack K'targ." << endl;
				cin >> input;
				if (input == 'B')
				{
					alternates = 3;
				}
				if (input == 'A')
				{
					cout << "Hailing K'targ." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					cout << endl;
					Sleep(1500);
					cout << "Chancoller Moreth: This is Chancoller Moreth, to whom am I adressing?" << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
					Sleep(1500);
					cout << "A. Your Doom. B. This is Captain Kevin Novatia of the Federation." << endl;
					cout << "We have come to begin diplomatic talks." << endl;
					Beep(392,250);  // G
					Beep(523,125);  // C
					Beep(698,500);  // F
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
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
						cout << endl;
						Sleep(1500);
						cout << "A. PetaQ! You make useless claims. You utter one more word Qi'YaH and you will die!" << endl;
						cout << "B. What? Im sure there is a missunderstanding. We never attacked you." << endl;
						Beep(392,250);  // G
						Beep(523,125);  // C
						Beep(698,500);  // F
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
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
							cout << endl;
							cout << "A. Yes. B. No" << endl;
							Beep(392,250);  // G
							Beep(523,125);  // C
							Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(ktargShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(ktargShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(trethShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(trethShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
			Sleep(1000);
			cout << "After several days." << endl; 
			Sleep(1000);
			cout << "Doctor Iona: Sir, i've anylized the DNA. Its Romulan." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1500);
			cout << "Romulan? Ensign Niron: Scan the area for Romulan Signitures." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1500);
			cout << "Ensign Niron: 8 Romulan Warbirds, De'redex class, are headed toward Qonos." << endl;
			Beep(392,250);  // G
			Beep(523,125);  // C
			Beep(698,500);  // F
			Sleep(1500);
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
								Beep(659,250);  // E
								Beep(523,250);  // C
								Beep(440,250);  // A
								Beep(587,250);  // D
								Beep(784,500);  // G
							}
							

							if(deShields < 1)
							{
								cout << "Enemy Shields are Down!" << endl;
								Beep(392,250);  // G
								Beep(523,125);  // C
								Beep(698,500);  // F
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
			Sleep(2000);
			return 0;
		}
//End of Story

