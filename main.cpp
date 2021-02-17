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
    for(int i= 0; i<n; i++)
    {
        std::cout << "Iveskite studento varda ir pavarde" <<std::endl;
        std::cin >> grupe[i].vardas;
        std::cin >> grupe[i].pavarde;
        std::cout << "Iveskite jo namu darbu pazymius(jei daugiau nera tai iveskite'0') ";
        grupe[i].gal = 0;
        while(t){
            std::cin >> grupe[i].paz1[kiek];
            if(grupe[i].paz1[kiek]==0){
                break;
            }
            grupe[i].gal = grupe[i].paz1[kiek]+grupe[i].gal;
            
            kiek++;
        }
        std::cout << "Iveskite jo egzamino pazymi " << std::endl;
        std::cin >> grupe[i].egz;

        grupe[i].gal = grupe[i].gal/kiek*0.4 +0.6*grupe[i].egz;
        
        std::cout << grupe[i].gal << std::endl;
        u = kiek;
        if (u+1 % 2 != 0){
        grupe[i].mediana = grupe[i].paz1[u / 2]; 
        }
        else{
        grupe[i].mediana =(grupe[i].paz1[(u - 1) / 2] + grupe[i].paz1[u / 2]) / 2.0;
        }
    }
    isvedimas(grupe,n);
    
}