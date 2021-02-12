#include <iostream>
#include <string>


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
    int kiek;
    for(int i= 0; i<n; i++)
    {
        std::cout << "Iveskite studento varda ir pavarde" <<std::endl;
        std::cin >> grupe[i].vardas;
        std::cin >> grupe[i].pavarde;
        std::cout << "Iveskite jo namu darbu pazymius ";
        while(t){
            std::cin >> grupe[i].paz[i];
            grupe[i].gal = grupe[i].paz[i]++ / kiek;
            kiek++;
            if(grupe[i].paz[i]==0){
                break;
            }
        }
        std::cout << "Iveskite jo egzamino pazymi " << std::endl;
        std::cin >> grupe[i].egz;

        grupe[i].gal = grupe[i].gal *0.4 +0.6*grupe[i].egz;
        
        std::cout << grupe[i].gal;
    }
    
    
}