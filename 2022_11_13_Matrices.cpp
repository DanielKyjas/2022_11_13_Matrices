// 2022_11_13_Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Daniel Calleja sRayón
//Hacer una matriz dinamica

#include <iostream> //Cin y Cout
#include <locale> //Nos ayuda a interpretar idiomas
#include <Windows.h> //Funciones del control de programa mediante pausas y dormidas
#include <time.h>

 int main()
{
     srand(time(NULL));
    int** puntero, Fil, Col;
    std::cout << "Dime el numero de filas\n";
    std::cin >> Fil;
    std::cout << "Dame el numero de columnas\n";
    std::cin >> Col;

    puntero = new int* [Fil]; 
    for (int i = 0; i < Fil; i++){
        puntero[i] = new int[Col];
    }
    for (int i = 0; i < Fil; i++) {
        for (int j = 0; j < Col; j++) {
            *(*(puntero+i)+j) = rand() % 30;
            std::cout << puntero[i][j] << std::endl; 
        }

    }
}
