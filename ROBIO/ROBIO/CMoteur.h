#pragma once
#include "CCompas.h"

/**************************************************************

* CLASSE : <CMoteur>
* PRESENTATION : <Pilote de couple de moteur du chassis>

**************************************************************/

class CMoteur
{
private:

public:
	CMoteur();		//Constructeur de CMoteur 
	~CMoteur();		//Destructeur de CMoteur

	CCompas compas;

	void deplacement_robot(int iDeplacement_x, int Deplacement_y); // Deplace le robot
};