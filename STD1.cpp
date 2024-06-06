#include "pch.h"
#include "framework.h"
#include <iostream>
#include <string>
#include <cmath>

using namespace std;

// TODO: Это пример библиотечной функции.
int** intarr(int r, int c) {

    // количество столбцов
    //int** numbers{ new int* [r] {} };  // выделяем память под двухмерный массив
    // выделяем память для вложенных массивов

    //for (int i{}; i < r; i++) {

    //    numbers[i] = new int[c] {};

    //}

    int** m = new int* [r];

    m[0] = new int [r * c];

    for (size_t i = 1; i != r; ++i) {
    
        m[i] = m[i - 1] + c;
    
    }

    cout << "Array " << r << "x" << c << " is created" << endl;

    //return numbers;
    return m;
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
