#include <iostream>
#include "Header.h"
using namespace std;
void Sort(double arr[4], int n);
void Sort(int arr[4], int n);
void Sort(Complex* arr, int n);
int main() {
    Complex arr[4]{ 5, 9, 1, 7, 5, 8, 4, 3 };
    Sort(arr, 4);
    //int arr2[4]{ 5, 9, 1, 7};
   // Sort(arr2, 4);
}

void Sort(double arr[4], int n) {
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }

    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
}
bool Complex::compareTo(Complex n)
{
    return (this->modul() > n.modul());
}
double Complex::modul()
{
    return sqrt(this->im * this->im + this->re * this->re);
}
void Sort(int arr[4], int n) {
    for (int i = 1; i < n; ++i)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (arr[j] < arr[j + 1])
            {
                int b = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = b;
            }
        }
    }

    for (int i = n - 1; i >= 0; --i)
    {
        cout << arr[i] << " ";
    }
}
void Sort(Complex* arr, int n)
{
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j].compareTo(arr[j + 1])) {
                swap(arr[j], arr[j + 1]);
            }
        }
    }
    for (int i = 0; i < n; i++) {
        if (arr[i].re > 0) {
            cout << arr[i].im << "+" <<arr[i].re << "i" << "    ";
        }
        else { cout << arr[i].im << arr[i].re << "i" << "    "; }
    }
}


/*#pragma once
#ifndef HEADER_H
#define HEADER_H
#include <iostream>
#include <math.h>
using namespace std;
struct  Complex
{
    double im = 0;
    double re = 0;
    bool compareTo(Complex n);
    double modul();

};
#endif*/
