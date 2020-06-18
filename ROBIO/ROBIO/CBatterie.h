#pragma once

class CBatterie
{
private:	
	int level_batterie;


public:

	CBatterie(); //Constructeur de CBatterie
	CBatterie(int level); //Constructeur de CBatterie
	~CBatterie(); //Destructeur de CBatterie
	
	int get_level_batterie(); // retourne la valeur de la batterie 
	bool set_level_batterie(int level); // mise à jour de la valeur de la batterie 
};
