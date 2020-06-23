#include "CCompas.h"
#include <cstdlib>


CCompas::CCompas()
{
}


CCompas::CCompas(int iPos_x, int iPos_y)
{
	iPosition_x = iPos_x;
	iPosition_y = iPos_y;
}


CCompas::~CCompas()
{
}


int CCompas::Get_position_x()
{
	return iPosition_x;
}


int CCompas::Get_position_y()
{
	return iPosition_y;
}


void CCompas::Set_position_x(int iPos_x)
{
	iPosition_x = iPos_x;

}


void CCompas::Set_position_y(int iPos_y)
{
	iPosition_y = iPos_y;

}
