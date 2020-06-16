#pragma once
class CCompas
{
	// Données privées
private :
	int position_x;
	int position_y;

	// Données publiques
public :
	int get_position_x()				{ return position_x; }
	int get_position_y()				{ return position_y; }

	void set_position_x(int pos_x)		{ position_x = pos_x; }
	void set_position_y(int pos_y)		{ position_y = pos_y; }
};

