#pragma once

class CCompas
{
	// Donn�es priv�es
private :
	int position_x;
	int position_y;

	// Donn�es publiques
public :

	CCompas();//Constructeur de CCompas
	CCompas(int pos_x, int pos_y);//Constructeur de CCompas
	~CCompas();//Destructeur de CCompas


	int get_position_x();    // retourne la position x du robot 
	int get_position_y();    // retourne la position y du robot 

	bool set_position_x(int pos_x); // met a jour la position x du robot		
	bool set_position_y(int pos_y); // met a jour la position y du robot 
};

