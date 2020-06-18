#pragma once

class CBatterie
{
private:	
	int state_batterie;
	int data_batterie;
public:

	CBatterie(); //Constructeur de CBattery
	CBatterie(int i_St, int i_Mes); //Constructeur de CBattery
	~CBatterie(); //Destructeur de CBattery
	
	int get_state_batterie(); // retourne la valeur StateBattery
	int get_data_batterie(); // retourne la valeur MesureBattery

};
