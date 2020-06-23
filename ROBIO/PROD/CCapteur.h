#pragma once

/**************************************************************

* CLASSE : <CCapteur>
* PRESENTATION : <Capteur de signaux balise (bordures de terrain, obstacles, arbres)>

**************************************************************/

class CCapteur
{
	// Private data
private:
	bool Tree;
	bool Obstacle;
	bool Border;

	// Public data
public:

	/* Constructors and destructor*/
	CCapteur();														// CCapteur constructor
	CCapteur(bool valTree, bool valObstacle, bool valBorder);		// CCapteur constructor
	~CCapteur();													// CCapteur destructor

	/*Getters*/
	bool GetObstacle();					// Return a boolean about to know if there is an obstacle or not
	bool GetBorder();					// Return a boolean about to know if there is a border or not
	bool GetTree();						// Return a boolean about to know if there is a tree or not

	/*Setters*/
	void SetObstacle(bool val);			// Give a boolean state to the variable if there is an obstacle or not
	void SetBorder(bool val);			// Give a boolean state to the variable if there is a border or not
	void SetTree(bool val);				// Give a boolean state to the variable if there is a tree or not

};

