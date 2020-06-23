#include "CMoteur.h"
#include "CCompas.h"
#include <cstdlib>

CMoteur::CMoteur() 
{
}

CMoteur::~CMoteur()
{
}


void CMoteur::deplacement_robot(int iDeplacement_x, int iDeplacement_y) // fonction qui deplace le robot sans prise en compte des obstacles 
{
	
	int iPos_x_Init = compas.Get_position_x();
	int iPos_y_Init = compas.Get_position_y(); 

	int Res_Dep_x = iPos_x_Init + iDeplacement_x; 
	int Res_Dep_y = iPos_y_Init + iDeplacement_y;

	compas.Set_position_x(Res_Dep_x);
	compas.Set_position_y(Res_Dep_y);

}

