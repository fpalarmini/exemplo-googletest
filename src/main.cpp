#include "Calculo.h"
#include <iostream>

int main()
{
    Calculo *calc = new Calculo();
    std::cout << calc->calculaQuadrado(2) << std::endl;
    
    
    return 0;
}