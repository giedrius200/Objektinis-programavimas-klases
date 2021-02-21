#include "lib.h"

#include <sstream>


int main() {
    Studentas* grupe;
    long int n = 0;
    cout << "Is failo? (t,n)" << endl;
    char failas1;
    cin >> failas1;
    ifstream failas;
    cout << n << endl;
    if (failas1 == 't') {
        //grupe = new Studentas[n];
        string line;
        int ii = 0;
        //string vardas, pavarde;
        double paz1[15];
        failas.open("studentai.txt");
        n = std::count(std::istreambuf_iterator<char>(failas),
            std::istreambuf_iterator<char>(), '\n');
        failas.close();
        failas.open("studentai.txt");
        cout << n << endl;
        grupe = new Studentas[n];
        string dummyLine;
        getline(failas, dummyLine);
        if (failas.fail()) // checks to see if file opended
        {
            cout << "error" << endl;
            return 1; // no point continuing if the file didn't open...
        }
        double c = 0;
        double number = 0;


        for (int ii = 0; ii < n; ii++) {
            failas >> grupe[ii].vardas >>grupe[ii].pavarde;
            grupe[ii].gal = 0;
            getline(failas, line);
            std::stringstream iss(line);
            while (iss >> number) {
                //cout << "Numeriai" << number << endl;
                grupe[ii].paz.push_back(number);
            }
            grupe[ii].egz = grupe[ii].paz.back();
            grupe[ii].paz.pop_back();
            for (int d = 0; d < grupe[ii].paz.size(); d++) {
                grupe[ii].gal = grupe[ii].gal + grupe[ii].paz[d];
                //cout << grupe[ii].paz[d] <<endl;
            }
            c = grupe[ii].paz.size();
            grupe[ii].gal = (grupe[ii].gal / c) * 0.4 + 0.6 * grupe[ii].egz;
            //cout << grupe[ii].vardas <<" "<< grupe[ii].pavarde<<" Galutinis:" << grupe[ii].gal << endl;
            }
        failas.close();
        for (int b = 0; b < n; b++) {
            //cout << grupe[b].vardas << endl;
            grupe[b].mediana = mediana(grupe[b].paz);
        }
        isvedimas(grupe, n);
    }
    else {
        cout << "Iveskite studentu skaiciu " << endl;
        cin >> n;
        int kiek = 0;
        double num;
        char ivesti;
        char jau;
        grupe = new Studentas[n];
        std::random_device rd;
        std::mt19937 gen(rd());
        std::uniform_int_distribution<> distr(1, 10);

        for (int i = 0; i < n; i++)
        {

            cout << "Iveskite studento varda ir pavarde" << endl;
            cin >> grupe[i].vardas;
            cin >> grupe[i].pavarde;
            cout << "Ar namu darbai bus random (t,n)?" << endl;
            cin >> ivesti;
            cout << "Iveskite jo namu darbu pazymius" << endl;
            grupe[i].gal = 0;
            while (true) {
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

            grupe[i].gal = grupe[i].gal / kiek * 0.4 + 0.6 * grupe[i].egz;

            cout << grupe[i].gal << endl;
            grupe[i].mediana = mediana(grupe[i].paz);
        }
        isvedimas(grupe, n);
    }
}
