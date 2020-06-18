#pragma once
class CMoteur
{
		// Données privées
private :
	int a; 
	int batterie;
	int conso;

	// Données publiques
public :

	int get_batterie()				{ return batterie ; }

	void conso_batterie (int conso)		{ batterie = batterie - conso ; }

};

