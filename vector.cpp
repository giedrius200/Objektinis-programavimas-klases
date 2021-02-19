#include "lib.h"


int main(){
    Studentas *grupe;
    int n;
    cout << "Iveskite studentu skaiciu " << endl;
    cin >> n;
    grupe = new Studentas [n];
    int kiek = 0;
    double num;
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
        cout << "Iveskite jo namu darbu pazymius"<< endl;
        grupe[i].gal = 0;
        while(true){
            if (ivesti == 'n') {
                cin >> num;
                grupe[i].paz.push_back(num);
                cout << "Ar uzteks (t,n)?" << endl;
                cin >> jau;
                grupe[i].gal = grupe[i].gal + grupe[i].paz[kiek];
                kiek++;
                if (jau == 't') {
                    break;
                }
            }
            else {
                num = distr(gen);
                grupe[i].paz.push_back(num);
                cout << num << endl;
                cout << "Ar uzteks (t,n)?" << endl;
                cin >> jau;
                grupe[i].gal = grupe[i].gal + grupe[i].paz[kiek];
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
        grupe[i].mediana = mediana(grupe[i].paz);
    }
    isvedimas(grupe,n);
}
    