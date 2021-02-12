#include <iostream>
#include <string>


struct Studentas{
    std::string vardas,pavarde;
    double *paz, egz, gal;
};

int main(){
    Studentas *grupe;
    int n;
    std::cin >> n;
    grupe = new Studentas [n];
    std::cout << "Iveskite studento varda ir pavarde" <<std::endl;
    for(int i= 0; i<n; i++)
    {
        std::cin >> grupe[i].vardas;
        std::cin >> grupe[i].pavarde;
        std::cout << "Iveskite jo namu darbu pazymius ";
        for(int y=0; y<500; y++){
           std::cin >> grupe[i].paz[y];
        }
    }
    
}