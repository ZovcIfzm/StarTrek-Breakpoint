#include "starship.h"
/*
int novaCost = 7000;
int novaHull = 1000;
int novaShields = 1500;
int novaPhasers = phaser1;
int novaTorpedoes = photonTorpedoes;
int novaDodge = scoutDodge;
int novaAIhp = 2500;
*/

class Starship {
	Starship(string _name, int _cost, int _hull, int _shields, int _phasers, int _torpedoes, int _dodge, int _AIhp) : 
		name(_name), cost(_cost), hull(_hull), shields(_shields), phasers(_phasers), torpedoes(_torpedoes), dodge(_dodge), AIhp(_AIhp) {};
	string name;
	int cost;
	int hull;
	int shields;
	int phasers;
	int torpedoes;
	int dodge;
	int AIhp;
};
