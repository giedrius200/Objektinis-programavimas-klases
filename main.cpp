#include <iostream>
#include <string>
#include <iomanip>

struct Studentas{
    std::string vardas,pavarde;
    double paz[500], egz, gal;
};

int main(){
    Studentas *grupe;
    int n;
    std::cin >> n;
    grupe = new Studentas [n];
    bool t = true;
    int kiek = 0;
    for(int i= 0; i<n; i++)
    {
        std::cout << "Iveskite studento varda ir pavarde" <<std::endl;
        std::cin >> grupe[i].vardas;
        std::cin >> grupe[i].pavarde;
        std::cout << "Iveskite jo namu darbu pazymius(jei daugiau nera tai iveskite'0') ";
        grupe[i].gal = 0;
        while(t){
            std::cin >> grupe[i].paz[i];
            if(grupe[i].paz[i]==0){
                break;
            }
            grupe[i].gal = grupe[i].paz[i]+grupe[i].gal;
            kiek++;
        }
        std::cout << "Iveskite jo egzamino pazymi " << std::endl;
        std::cin >> grupe[i].egz;

        grupe[i].gal = grupe[i].gal/kiek*0.4 +0.6*grupe[i].egz;
        
        std::cout << grupe[i].gal << std::endl;
    }
    std::cout<<std::left<<std::setw(20)<<std::setfill(' ')<<"Vardas"<<std::left<<std::setw(20)<<std::setfill(' ')<<"Pavarde"<<std::left<<std::setw(20)<<std::setfill(' ')<<"Vidurkis"<<std::endl;
    for(int i= 0; i<n; i++){
        std::cout <<"-------------------------------------------------\n";
        std::cout <<std::left<<std::setw(20)<<std::setfill(' ')<< grupe[i].vardas;
        std::cout <<std::left<<std::setw(20)<<std::setfill(' ')<< grupe[i].pavarde;
        std::cout <<std::left<<std::setw(20)<<std::setfill(' ')<< grupe[i].gal << std::endl;
        std::cout <<"-------------------------------------------------\n";
    }
    
}