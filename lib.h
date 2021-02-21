#ifndef lib_H_INCLUDED
#define lib_H_INCLUDED

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#include <algorithm>
#include <random>
#include <fstream>

#include <cstdlib>

#include <sstream>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

using std::ifstream;

const int cinTerminator = 0;
struct Studentas {
    string vardas, pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;
};

double mediana(vector<double>);
void isvedimas(Studentas *grupe, int,char);
#endif 