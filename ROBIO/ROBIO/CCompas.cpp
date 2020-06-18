#include "CCompas.h"
#include <cstdlib>



CCompas::CCompas() : position_x(0), position_y(0)
{
}


CCompas::CCompas(int pos_x, int pos_y)
{
	position_x = pos_x;
	position_y = pos_y;
}


CCompas::~CCompas()
{
}


int CCompas::get_position_x()
{
	return position_x;
}


int CCompas::get_position_y()
{
	return position_y;
}


bool CCompas::set_position_x(int pos_x)
{
	position_x = pos_x;

	if (position_x == NULL || position_x != pos_x)
	{
		return false;
	}
	else
	{
		return true;
	}
}


bool CCompas::set_position_y(int pos_y)
{
	position_y = pos_y;

	if (position_y == NULL || position_y != pos_y)
	{
		return false;
	}
	else
	{
		return true;
	}
}
