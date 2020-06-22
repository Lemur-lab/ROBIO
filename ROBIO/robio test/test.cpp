/**************************************************************

* SOURCE : <test.cpp>
* PRESENTATION : <contient les tests unitaires des differentes classes>

**************************************************************/

#include "pch.h"
#include "CCompas.h"
#include "CBatterie.h"


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


// TESTS DE LA CLASSE Cxxx

//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

