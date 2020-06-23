#pragma once

/**************************************************************

* CLASSE : <CCompas>
* PRESENTATION : <Capteur de geolocalisation du ROBIOT>

**************************************************************/

class CCompas
{

private:

	int iPosition_x;
	int iPosition_y;

public:

	CCompas();//Constructeur de CCompas
	CCompas(int iPos_x, int iPos_y);//Constructeur de CCompas
	~CCompas();//Destructeur de CCompas


	int Get_position_x();    // Retourne la position x du robot 
	int Get_position_y();    // Retourne la position y du robot 

	void Set_position_x(int iPos_x); // Met a jour la position x du robot		
	void Set_position_y(int iPos_y); // Met a jour la position y du robot 
};

