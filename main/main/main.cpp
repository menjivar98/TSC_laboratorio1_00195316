// main.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include "math_tools.h"
#include "displays_tools.h"

using namespace std;

int main()
{
     Matrix matriz, matriz_cof, matriz_cof_tra, Resultado;
    
    zeroes(matriz,3);
    
    float total;
    
	matriz.at(0).at(0) = 2;	matriz.at(0).at(1) = 2;  matriz.at(0).at(2) = 3;
    matriz.at(1).at(0) = 4; matriz.at(1).at(1) = 5;	 matriz.at(1).at(2) = 6;
    matriz.at(2).at(0) = 7; matriz.at(2).at(1) = 8;  matriz.at(2).at(2) = 9;
    
        cofactors(matriz,matriz_cof);
        Inversa(matriz, matriz_cof, Resultado);
        
        showMatrix(Resultado);

        
    




}

