#include "lib.h"
#include <sstream>

int main() {
    //Studentas1* grupe;
    long int n = 0;
    //grupe = new Studentas1[n];
    double vector = 0;
    double list = 0;
    double deque = 0;
    //100000000
    int kiek = 0;
    cout << "Kiek failu sukurti?" << endl;
    cin >> kiek;
    std::vector <string> failas;
    sukurimas(kiek,failas);
    string filename;
    for(int i = 0; i < kiek; i++) {
        cout << "Iveskite failo" << i+1 << " pavadinima is siu failu: " << endl;
        for (int h = 0; h < kiek; h++) {
            cout << failas[h] << endl;
        }
        cin >> filename;
        filename = filename + ".txt";

        auto t1 = high_resolution_clock::now();
        rusiavimas(filename);
        auto t2 = high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
        cout << "Rusiavo vector: " << i+1 << " Laikas "
            << duration.count() << " milliseconds" << endl;
        cout << endl;
        auto t3 = high_resolution_clock::now();
        rusiavimasl(filename);
        //rusiavimas(filename,o);
        auto t4 = high_resolution_clock::now();
        auto duration1 = std::chrono::duration_cast<milliseconds>(t4 - t3);
        cout << "Rusiavo list: " << i << " Laikas "
            << duration1.count() << " milliseconds" << endl;
        cout << endl;
        auto t5 = high_resolution_clock::now();
        rusiavimasr(filename);
        //rusiavimas(filename,o);
        auto t6 = high_resolution_clock::now();
        auto duration6 = std::chrono::duration_cast<milliseconds>(t6 - t5);
        cout << "Rusiavo deque: " << i << " Laikas "
            << duration6.count() << " milliseconds" << endl;
        cout << endl;
        /*cout << "Rusiavo: " << o << " Laikas "
            << duration.count() << " milliseconds" << endl;*/

        vector = duration.count() + vector;
        list = duration1.count() + list;
        deque = duration6.count() + deque;

    }
    cout << endl;
    cout << "Bendras vector " << vector << " milliseconds" << endl;
    cout << "Bendras list " << list << " milliseconds" << endl;
    cout << "Bendras deque " << deque << " milliseconds" << endl;
    int numeris;
}






    
//    cout << "Is failo? (t,n)" << endl;
//    char failas1;
//    cin >> failas1;
//    ifstream failas;
//    string vardas, pavarde;
//    cout << n << endl;
//    if (failas1 == 't') {
//        //grupe = new Studentas[n];
//        string line;
//        int ii = 0;
//        //string vardas, pavarde;
//        double paz1[15];
//        try {
//            failas.open("studentai.txt");
//            n = std::count(std::istreambuf_iterator<char>(failas),
//                std::istreambuf_iterator<char>(), '\n');
//            failas.close();
//            failas.open("studentai.txt");
//            cout << n << endl;
//            grupe = new DerivedStudentas[n];
//            string dummyLine;
//            getline(failas, dummyLine);
//            if (failas.fail()) // checks to see if file opended
//            {
//               
//                cout << "error" << endl;
//                return 1; // no point continuing if the file didn't open...
//            }
//            double c = 0;
//            double number = 0;
//
//            for (int ii = 0; ii < n; ii++) {
//                failas >> grupe[ii].vardas_ >> grupe[ii].pavarde_;
//                grupe[ii].gal = 0;
//                getline(failas, line);
//                std::stringstream iss(line);
//             
//                while (iss >> number) {
//                    //cout << "Numeriai" << number << endl;
//                        grupe[ii].paz.push_back(number);
//                        
//                    if (number == 0) {
//                        throw(number);
//                    }
//                }
//                grupe[ii].egz = grupe[ii].paz.back();
//                grupe[ii].paz.pop_back();
//                for (int d = 0; d < grupe[ii].paz.size(); d++) {
//                    grupe[ii].gal = grupe[ii].gal + grupe[ii].paz[d];
//                    //cout << grupe[ii].paz[d] <<endl;
//                }
//                c = grupe[ii].paz.size();
//                grupe[ii].gal = (grupe[ii].gal / c) * 0.4 + 0.6 * grupe[ii].egz;
//                //cout << grupe[ii].vardas <<" "<< grupe[ii].pavarde<<" Galutinis:" << grupe[ii].gal << endl;
//            }
//            failas.close();
//            for (int b = 0; b < n; b++) {
//                //cout << grupe[b].vardas << endl;
//                grupe[b].mediana = mediana(grupe[b].paz);
//            }
//            isvedimas(grupe, n, failas1);
//        }
//        catch (double number) {
//            cout << "Nulis negali buti pazymys";
//        }
//        
//    }
//    else {
//        cout << "Iveskite studentu skaiciu " << endl;
//        cin >> n;
//        int kiek = 0;
//        double num;
//        char ivesti;
//        char jau;
//        grupe = new DerivedStudentas[n];
//        std::random_device rd;
//        std::mt19937 gen(rd());
//        std::uniform_int_distribution<> distr(1, 10);
//
//        for (int i = 0; i < n; i++)
//        {
//
//            cout << "Iveskite studento varda ir pavarde" << endl;
//            cin >> grupe[i].vardas_;
//            cin >> grupe[i].pavarde_;
//            cout << "Ar namu darbai bus random (t,n)?" << endl;
//            cin >> ivesti;
//            cout << "Iveskite jo namu darbu pazymius" << endl;
//            grupe[i].gal = 0;
//            while (true) {
//                if (ivesti == 'n') {
//                    cin >> num;
//                    grupe[i].paz.push_back(num);
//                    cout << "Ar uzteks (t,n)?" << endl;
//                    cin >> jau;
//                    grupe[i].gal = grupe[i].gal + grupe[i].paz[kiek];
//                    kiek++;
//                    if (jau == 't') {
//                        break;
//                    }
//                }
//                else {
//                    num = distr(gen);
//                    grupe[i].paz.push_back(num);
//                    cout << num << endl;
//                    cout << "Ar uzteks (t,n)?" << endl;
//                    cin >> jau;
//                    grupe[i].gal = grupe[i].gal + grupe[i].paz[kiek];
//                    kiek++;
//                    if (jau == 't') {
//                        break;
//                    }
//                }
//
//            }
//            cout << "Iveskite jo egzamino pazymi " << endl;
//            cin >> grupe[i].egz;
//
//            grupe[i].gal = grupe[i].gal / kiek * 0.4 + 0.6 * grupe[i].egz;
//
//            cout << grupe[i].gal << endl;
//            grupe[i].mediana = mediana(grupe[i].paz);
//        }
//        isvedimas(grupe, n,failas1);
//    }
//}
