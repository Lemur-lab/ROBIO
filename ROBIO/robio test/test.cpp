#include "pch.h"
#include "CCompas.h"
#include "CBatterie.h"

// TESTS DE LA CLASSE CCOMPAS 

TEST(TestCCompas, TestSetPosition) {
	
	int res_x; 
	int res_y;

	CCompas CCompas(3, 3);

	CCompas.set_position_x(5);
	CCompas.set_position_y(5); 

	res_x = CCompas.get_position_x(); 
	res_y = CCompas.get_position_y(); 
	
	EXPECT_EQ(res_x, 5); 
	EXPECT_EQ(res_y, 5); 
}


// TESTS DE LA CLASSE CBatterie

TEST(TestCBatterie, TestConsumption) {
  
	int res_batt;

	CBatterie CBatterie(0); 

	CBatterie.battery_consumption(10);

	res_batt = CBatterie.get_level_batterie();

	EXPECT_EQ(res_batt, 10);
  
}


// TESTS DE LA CLASSE Cxxx

//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}

// TESTS DE LA CLASSE Cxxx

//TEST(TestCaseName, TestName) {
//  EXPECT_EQ(1, 1);
//  EXPECT_TRUE(true);
//}