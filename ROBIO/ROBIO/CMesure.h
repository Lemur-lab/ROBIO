#pragma once

class CMesure
{
	private:
		bool	MesureOn;
		int		MesureData;

	public:
		/* Constructors and Destructors */
		CMesure(); //Builder
		CMesure(bool MOn, int MData); //Builder with parameters
		~CMesure();//Destructor

		/* Getters */
		bool	GetMesureOn();		// Return MesureOn
		int		GetMesureData();	// Return MesureData

		/* Setters */
		void	SetMesureOn(bool MOn);		// Set MesureOn
		void	SetMesureData(int MData);	// Set MesureData

		/* Functions */
		bool	LaunchMesure();		// Launch mesure, returns True if succeed
};

