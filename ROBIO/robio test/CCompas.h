#pragma once

class CCompas
{
	// Données privées
private :
	int position_x;
	int position_y;

	// Données publiques
public :

	CCompas();//Constructeur de CCompas
	CCompas(int pos_x, int pos_y);//Constructeur de CCompas
	~CCompas();//Destructeur de CCompas


	int get_position_x();    // retourne la position x du robot 
	int get_position_y();    // retourne la position y du robot 

	void set_position_x(int pos_x); // met a jour la position x du robot		
	void set_position_y(int pos_y); // met a jour la position y du robot 
};

