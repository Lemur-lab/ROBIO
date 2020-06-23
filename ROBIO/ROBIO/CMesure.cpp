#include "CMesure.h"


/* Includes */
#include <cstdlib>
#include <iostream>
#include <Windows.h>



/* Constructors and Destructors */
CMesure::CMesure() : MesureOn(0), MesureData(0)
{

}

CMesure::CMesure(bool MOn, int MData)
{
	MesureOn	= MOn;
	MesureData	= MData;
}

CMesure::~CMesure()
{

}

/* Getters */
bool CMesure::GetMesureOn()
{
	return MesureOn;
}

int CMesure::GetMesureData()
{
	return MesureData;
}

/* Setters */
void CMesure::SetMesureOn(bool MOn)
{
	MesureOn = MOn;
}

void CMesure::SetMesureData(int MData)
{
	MesureData = MData;
}

/* Functions */
void CMesure::LaunchMesure()
{
	int MesureVal;	

	Sleep(100);

	MesureVal = rand() % 9999;

	SetMesureData(MesureVal);

	SetMesureOn(0); // Reset MesureOn
}