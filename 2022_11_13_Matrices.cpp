//Daniel Callejas Rayón
// 2022_11_13_Matrices.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//Hacer una matriz dinamica

#include <iostream> //Cin y Cout
#include <locale> //Nos ayuda a interpretar idiomas
#include <Windows.h> //Funciones del control de programa mediante pausas y dormidas
#include <time.h>

int main()
{
    srand(time(NULL));
    int** puntero = 0; int Fil, Col;
    int matriz1[2][3];
    int dato;

    int filas1 = (sizeof(matriz1[0]) / sizeof(matriz1[0][0]));
    std::cout << "Filas: " << filas1 << std::endl;
    int columnas1 = (sizeof(matriz1[0]) / sizeof(matriz1[0][0]));
    std::cout << "Columnas: " << columnas1 << std::endl;

    for (int i = 0; i < sizeof(matriz1) / (sizeof(matriz1[0])); i++) {
        for (int j = 0; j < (sizeof(matriz1[0]) / (sizeof(matriz1[0][0]))); j++) {
            matriz1[i][j] = rand() % 10;
        }
    }
    for (int i = 0; i < sizeof(matriz1) / (sizeof(matriz1[0])); i++) {
        for (int j = 0; j < (sizeof(matriz1[0]) / (sizeof(matriz1[0][0]))); j++) {
            std::cout << matriz1[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "Dime el numero de filas\n";
    std::cin >> Fil;
    std::cout << "Dame el numero de columnas\n";
    std::cin >> Col;
    if (Fil >= 3 && Col >= 3) {

        puntero = new int* [Fil];
        for (int i = 0; i < Fil; i++) {
            puntero[i] = new int[Col];
        }
        for (int i = 0; i < Fil; i++) {
            for (int j = 0; j < Col; j++) {
                *(*(puntero + i) + j) = rand() % 30;
                std::cout << puntero[i][j] << std::endl;
            }

        }
    }
    else {
        puntero = new int*[Fil];
        for (int i = 0; i < Fil; i++) {

            puntero[i] = new int[Col];

            for (int j = 0; j < Col; j++) {
                std::cout << "Dame el dato ";
                std::cin >> dato;
                puntero[i][j] = dato;
            }
        }
    }

    for (int i = 0; i < Fil; i++)
    {
        for (int j = 0; j < Col; j++)
        {
            std::cout<<puntero[i][j] << " ";
        }
        std::cout << std::endl;
    }
}
