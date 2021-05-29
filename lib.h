#ifndef lib_H_INCLUDED
#define lib_H_INCLUDED

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
#include <iomanip>
#include "vektorius.h"
//#include <vector>
#include <algorithm>
#include <random>
#include <fstream>

#include <chrono>

#include <cstdlib>

#include <thread>

#include <sstream>

#include <list>

#include <deque>
#include <list>

#include <cstdio>
using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

using std::ifstream;
using namespace std;
using namespace std::chrono;
using namespace std::chrono_literals;

using std::chrono::high_resolution_clock;
using std::chrono::duration_cast;
using std::chrono::duration;
using std::chrono::milliseconds;

const int cinTerminator = 0;
struct Studentas {
    char vardas, pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;

};
class Studentas6 {
public:
    char* vardas, * pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;
    Studentas6(const Studentas6& that)
    {
        vardas = new char[strlen(that.vardas) + 1];
        strcpy(vardas, that.vardas);
        pavarde = new char[strlen(that.pavarde) + 1];
        strcpy(pavarde, that.pavarde);
        paz = that.paz;
    }
    Studentas6& operator=(const Studentas6& that)
    {
        if (this != &that)
        {
            delete[] vardas;
            delete[] pavarde;
            delete[] &paz;
            vardas = new char[strlen(that.vardas) + 1];
            strcpy(vardas, that.vardas);
            pavarde = new char[strlen(that.pavarde) + 1];
            strcpy(pavarde, that.pavarde);
            paz = that.paz;
        }
        return *this;
    }
    ~Studentas6()
    {
        delete[] vardas;
        delete[] pavarde;
        delete[]& paz;
    }
};
class Studentas1 {
    // realizacija
public:
    string vardas, pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;
};
class Zmogus {
protected:
    string vardas;
    string pavarde;
};
class DerivedStudentas : public Zmogus {
public:
    double egz;
    double mediana;
    double gal;
    using Zmogus::vardas;
    using Zmogus::pavarde;
    /*string getvardas() {
        return vardas_;
    }
    string getpavarde() {
        return pavarde_;
    }*/
    vector <double>paz;
};
double mediana(vector<double>);
void isvedimas(DerivedStudentas *grupe, int,char);
void sukurimas(int&,vector<string>&);
void rusiavimas(string);
void rusiavimasl(string);
void rusiavimasr(string);

#endif 