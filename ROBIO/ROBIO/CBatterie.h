#pragma once

/**************************************************************

* CLASSE : <CBatterie>
* PRESENTATION : <Capteur de niveau de charge de la batterie du ROBIOT>

**************************************************************/

class CBatterie
{
private:
	int iNiveau_Batterie;


public:

	CBatterie(); //Constructeur de CBatterie
	CBatterie(int iNiveau_Init); //Constructeur de CBatterie
	~CBatterie(); //Destructeur de CBatterie

	int Get_Level_Batterie(); // retourne la valeur de la batterie 
	void Set_Level_Batterie(int iCharge); // mise � jour de la valeur de la batterie 
	void Consommation_Batterie(int iConsommation); // consommation de batterie 
};
