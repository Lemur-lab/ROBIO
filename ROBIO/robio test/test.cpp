/**************************************************************

* SOURCE : <test.cpp>
* PRESENTATION : <contient les tests unitaires des differentes classes>

**************************************************************/

#include "pch.h"
#include "CCompas.h"
#include "CBatterie.h"
#include "CMesure.h"
#include "CCapteur.h"


// Tests de la classe CCompas

TEST(TestCCompas, TestSetPosition) {
	
	int iRes_x; 
	int iRes_y;

	CCompas CCompas(3, 3);

	CCompas.Set_position_x(5);
	CCompas.Set_position_y(5); 

	iRes_x = CCompas.Get_position_x(); 
	iRes_y = CCompas.Get_position_y(); 
	
	EXPECT_EQ(iRes_x, 5); // verifie que la mise a jour de la position en x du robot a ete faite
	EXPECT_EQ(iRes_y, 5); // verifie que la mise a jour de la position en y du robot a ete faite
}


// Tests de la classe CBatterie

TEST(TestCBatterie, TestConsumption) {
  
	int iRes_Batterie;

	CBatterie CBatterie(0); 

	CBatterie.Consommation_Batterie(10);

	iRes_Batterie = CBatterie.Get_Level_Batterie();

	EXPECT_EQ(iRes_Batterie, 10); // verifie que la conso de la batterie a ete mise a jour
  
}

// Tests de la classe CCapteur

TEST(TestCCapteur, TestConsumption) {

	bool Obstacle;
	bool Tree;
	bool Border;

	CCapteur CCapteur(0, 0, 0); // Initialisation de la classe, pas de détéction à l'init
	Obstacle = CCapteur.GetObstacle();
	Tree = CCapteur.GetTree();
	Border = CCapteur.GetBorder();

	EXPECT_EQ(Obstacle, 0); // verifie que l'obstacle est bien initialisé
	EXPECT_EQ(Tree, 0); // verifie que Tree est bien initialisé
	EXPECT_EQ(Border, 0); // verifie que Border est bien initialisé

	CCapteur.SetObstacle(1);
	CCapteur.SetTree(1);
	CCapteur.SetBorder(1);

	Obstacle = CCapteur.GetObstacle();
	Tree = CCapteur.GetTree();
	Border = CCapteur.GetBorder();

	EXPECT_EQ(Obstacle, 1); // verifie que l'obstacle est bien détecté
	EXPECT_EQ(Tree, 1); // verifie que Tree est bien détecté
	EXPECT_EQ(Border, 1); // verifie que Border est bien détecté

}



TEST(TestCMesure, TestLaunchMesure)
{
	bool MesOn = 0;
	int MesVal = -1;
	
	CMesure CMesure(0,0);

	CMesure.SetMesureOn(1);
	MesOn = CMesure.GetMesureOn();

	EXPECT_EQ(MesOn, 1); // check MesureOn is true and Getter is effective

	CMesure.LaunchMesure();
	MesVal = CMesure.GetMesureData();

	// rand % 9999 outputs between 0 and 9999
	EXPECT_GE(MesVal, 0);
	EXPECT_LE(MesVal, 9999);

}

