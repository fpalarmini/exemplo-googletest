#include "gtest/gtest.h"
#include "Calculo.h"

TEST(UnitTest, test1) {
    //arrange
    //act
    //assert
    Calculo *calc = new Calculo();

    EXPECT_EQ (calc->calculaQuadrado (0),  0);
    EXPECT_EQ (calc->calculaQuadrado (2), 4);
    EXPECT_EQ (calc->calculaQuadrado (4), 16);
    EXPECT_EQ (calc->calculaQuadrado (2), 3); //fail

}

TEST(UnitTest, test2) {
    //arrange
    //act
    //assert
    Calculo *calc = new Calculo();

    EXPECT_EQ (calc->calculaQuadrado (0),  0);
    EXPECT_EQ (calc->calculaQuadrado (2), 4);
    EXPECT_EQ (calc->calculaQuadrado (4), 16);
}