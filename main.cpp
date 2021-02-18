#include "lib.h"

int main(){
    Studentas *grupe;
    int n;
    cin >> n;
    grupe = new Studentas [n];
    bool t = true;
    int kiek = 0;
    int vieta = 0;
    int u = 0;
    char ivesti;
    char jau;

    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);
    for(int i= 0; i<n; i++)
    {
        cout << "Iveskite studento varda ir pavarde" <<endl;
        cin >> grupe[i].vardas;
        cin >> grupe[i].pavarde;
        cout << "Ar namu darbai bus random (t,n)?" << endl;
        cin >> ivesti;
        cout << "Iveskite jo namu darbu pazymius " << endl;
        grupe[i].gal = 0;
        while (t){
            if (ivesti == 'n') {
                cin >> grupe[i].paz1[kiek];
                cout << "Ar uzteks (t,n)?" << endl;
                cin >> jau;
                grupe[i].gal = grupe[i].paz1[kiek] + grupe[i].gal;
                kiek++;
                if (jau == 't') {
                    break;
                }
            }
            else {
                grupe[i].paz1[kiek] = distr(gen);
                cout << grupe[i].paz1[kiek] << endl;
                cout << "Ar uzteks (t,n)?" << endl;
                cin >> jau;
                grupe[i].gal = grupe[i].gal + grupe[i].paz1[kiek];
                kiek++;
                if (jau == 't') {
                    break;
                }
            }
          
        }
        cout << "Iveskite jo egzamino pazymi " << endl;
        cin >> grupe[i].egz;

        grupe[i].gal = grupe[i].gal/kiek*0.4 +0.6*grupe[i].egz;
        
        cout << grupe[i].gal << endl;
    }
    for (int i = 0; i < n; i++) {
        if (kiek % 2 != 0) {
            grupe[i].mediana = grupe[i].paz1[(kiek) / 2];
        }
        else {
            grupe[i].mediana = (grupe[i].paz1[kiek / 2] + grupe[i].paz1[(kiek / 2) - 1]) / 2;
        }
    }
    isvedimas(grupe,n);
    
}