#include "pch.h"
#include "framework.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// TODO: Это пример библиотечной функции.
int** intarr(int r, int c) {

    // количество столбцов
    int** numbers{ new int* [r] {} };  // выделяем память под двухмерный массив
    // выделяем память для вложенных массивов

    for (int i{}; i < r; i++) {

        numbers[i] = new int[c] {};

    }

    return numbers;
}
    
string** stringarr(int r, int c) {
    
    // количество столбцов
    string** strin{ new string* [r] {} };  // выделяем память под двухмерный массив
    // выделяем память для вложенных массивов

    for (int i{}; i < r; i++) {

        strin[i] = new string[c] {};

    }

    return strin;

}

double** doublearr(int r, int c) {

    // количество столбцов
    double** doubl{new double * [r] {} };  // выделяем память под двухмерный массив
    // выделяем память для вложенных массивов

    for (int i{}; i < r; i++) {

        doubl[i] = new double[c]{};

    }

    return doubl;
}

int** arrin(int** ar, int r, int c) {

    for (int i = 0; i < r; i++) {

        for (int j = 0; j < c; j++) {

            cin >> ar[i][j];

        }   
    }

    return 0;
}
