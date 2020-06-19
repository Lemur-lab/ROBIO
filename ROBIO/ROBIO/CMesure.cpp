#include "CMesure.h"

/* Includes */
#include <cstdlib>
#include <iostream>



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
void CMessure::SetMesureOn(bool MOn)
{
	MesureOn = MOn;
}

void CMesure::SetMesureData(int MData)
{
	MesureData = MData;
}

/* Functions */
bool 