#ifndef lib_H_INCLUDED
#define lib_H_INCLUDED

#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <random>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

const int cinTerminator = 0;
struct Studentas {
    string vardas, pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;
};

double mediana(vector<double>);
void isvedimas(Studentas *grupe, int);
#endif 