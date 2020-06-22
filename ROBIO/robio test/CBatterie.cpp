#include "pch.h"
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


void CBatterie::set_level_batterie(int level)
{
	level_batterie = level;
}

void CBatterie::battery_consumption(int cons){

	level_batterie = level_batterie + cons; 
}


