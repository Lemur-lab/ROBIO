#pragma once
class CMoteur
{
		// Donn�es priv�es
private :
	int a; 

	// Donn�es publiques
public :

	int get_batterie()				{ return batterie ; }

	void conso_batterie (int conso)		{ batterie = batterie - conso ; }

};

