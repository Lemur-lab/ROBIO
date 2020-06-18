#include "CBatterie.h"
#include <time.h>
#include <cstdlib>
#include <iostream>

CBatterie::CBatterie() : level_batterie(0)
{

}

CBatterie::CBatterie(int level)
{
	level_batterie = level ; 
}

CBatterie::~CBatterie()
{
}


int CBatterie::get_level_batterie()
{
	return level_batterie;
}


bool CBatterie::set_level_batterie(int level)
{
	level_batterie = level;

	if (level_batterie == NULL || level_batterie != level)
	{
		return false;
	}
	else
	{
		return true;
	}
}



