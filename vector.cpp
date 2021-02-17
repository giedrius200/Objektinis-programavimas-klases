#include "lib.h"


int main(){
    Studentas *grupe;
    int n;
    std::cin >> n;
    grupe = new Studentas [n];
    bool t = true;
    int kiek = 0;
    int vieta = 0;
    int u = 0;
    double num;
    for(int i= 0; i<n; i++)
    {
        std::cout << "Iveskite studento varda ir pavarde" <<std::endl;
        std::cin >> grupe[i].vardas;
        std::cin >> grupe[i].pavarde;
        std::cout << "Iveskite jo namu darbu pazymius(jei daugiau nera tai iveskite'0') "<< std::endl;
        grupe[i].gal = 0;
        while ((std::cin >> num) && num != cinTerminator) {
        grupe[i].paz.push_back(num);
        grupe[i].gal = grupe[i].gal + grupe[i].paz[kiek];
        kiek ++;
        }
        std::cout << "Iveskite jo egzamino pazymi " << std::endl;
        std::cin >> grupe[i].egz;

        grupe[i].gal = grupe[i].gal/kiek*0.4 +0.6*grupe[i].egz;
        
        std::cout << grupe[i].gal << std::endl;
        grupe[i].mediana = mediana(grupe[i].paz);
    }
    isvedimas(grupe,n);
}
    