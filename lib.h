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

#include <chrono>

#include <cstdlib>

#include <thread>

#include <sstream>

#include <list>

#include <deque>

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
    string vardas, pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;
};
class Studentas1 {
    // realizacija
public:
    string vardas, pavarde;
    vector<double> paz;
    double paz1[500];
    double egz, gal, mediana;
};

double mediana(vector<double>);
void isvedimas(Studentas1 *grupe, int,char);
void sukurimas();
void rusiavimas(string, int);
void rusiavimasl(string, int);
void rusiavimasr(string, int);

#endif 