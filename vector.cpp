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
    char ivesti;
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);
    for(int i= 0; i<n; i++)
    {

        cout << "Iveskite studento varda ir pavarde" <<endl;
        cin >> grupe[i].vardas;
        cin >> grupe[i].pavarde;
        cout << "Iveskite kiek pazymiu studentas tures" << endl;
        cin >> kiek;
        cout << "Ar namu darbai bus random (t,n)?" << endl;
        cin >> ivesti;
        cout << "Iveskite jo namu darbu pazymius"<< endl;
        grupe[i].gal = 0;
        for(int y = 0; y < kiek; y++){
            if (ivesti == 'n') {
                cin >> num;
            }
            else {
                num = distr(gen);
                cout << num << endl;
            }
        grupe[i].paz.push_back(num);
        grupe[i].gal = grupe[i].gal + grupe[i].paz[y];

        }
        cout << "Iveskite jo egzamino pazymi " << std::endl;
        cin >> grupe[i].egz;

        grupe[i].gal = grupe[i].gal/kiek*0.4 +0.6*grupe[i].egz;
        
        cout << grupe[i].gal << std::endl;
        grupe[i].mediana = mediana(grupe[i].paz);
    }
    isvedimas(grupe,n);
}
    