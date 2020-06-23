//#include "pch.h"
#include "CBatterie.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

CBatterie::CBatterie() : iNiveau_Batterie(0)
{

}

CBatterie::CBatterie(int iNiveau_Init)
{
	iNiveau_Batterie = iNiveau_Init;
}

CBatterie::~CBatterie()
{
}


int CBatterie::Get_Level_Batterie()
{
	return iNiveau_Batterie;
}


void CBatterie::Set_Level_Batterie(int iCharge)
{
	iNiveau_Batterie = iCharge;
}

void CBatterie::Consommation_Batterie(int iConsommation)
{

	iNiveau_Batterie = iNiveau_Batterie + iConsommation;
}


