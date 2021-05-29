#include "lib.h"
double mediana(vector<double> scores)
{
  size_t size = scores.size();

  if (size == 0)
  {
    return 0;  // Undefined, really.
  }
  else
  {
    //sort(scores.begin(), scores.end());
    if (size % 2 == 0)
    {
      return (scores[(size) / 2 - 1] + scores[(size) / 2]) / 2;
    }
    else 
    {
      return scores[(size) / 2];
    }
  }
}
void sukurimas(int& kiek, vector<string>&failai) {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);
    string filename;
    int numeris;
    int kiekstud;

    for (int o = 0; o < kiek; o++) {
        ofstream file;
        cout << "Iveskite filename" << o+1 << " failo pavadinima" << endl;
        cin >> filename;
        failai.push_back(filename);
        file.open(filename + ".txt");
        if (file.is_open())
        {
            file << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
            cout << "Kiek studentu generuosite?" << endl;
            cin >> kiekstud;
            auto t1 = high_resolution_clock::now();
            for (int i = 0; i < kiekstud; i++) {
                numeris = distr(gen);
                file << "Vardas" << i << "    Pavarde" << i << "      " << numeris << endl;
            }
            auto t2 = high_resolution_clock::now();
            auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
            cout << "Iraso faila: " << filename << " : "
                << duration.count() << " milliseconds" << endl;
        }
        else { cout << "Negaliu atidaryti failo"; };
        file.close();
    }
}
bool maziau(double i) {
    return (i < 5);
}
bool compare(double i) { 
    return (i < 5); }

void rusiavimas(string filename) {
    std::ifstream out(filename);
    out.open(filename);
    long int n = 0;

    double number = 0;

    n = std::count(std::istreambuf_iterator<char>(out),
        std::istreambuf_iterator<char>(), '\n');
    string vardas, pavarde;

    //Studentas grupe;

    out.close();
    out.open(filename);
    std::ofstream out1("vargsiukai " + filename);
    std::ofstream out2("kieta " + filename);
    out1 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    out2 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;

    string line;

    //std::vector<Studentas1> grupe;
    //Studentas1 temp;
    std::vector<DerivedStudentas> grupe;
    DerivedStudentas temp;
    string dummyLine;
    getline(out, dummyLine);
    int it = 0;
    auto t1 = high_resolution_clock::now();
    while (out >> temp.vardas >> temp.pavarde >> number) {
        temp.paz.push_back(number);
            if (number < 5) {
                out1 << temp.vardas << "    " << temp.pavarde << "      " << temp.paz[it] << endl;
            }

            else {
                out2 << temp.vardas << "    " << temp.pavarde << "      " << temp.paz[it] << endl;

            }
        grupe.push_back(temp);
        it++;
    }

    auto t2 = high_resolution_clock::now();

    auto const predicate = [](double const value) { return value < 5; };
    //grupe.push_back(DerivedStudentas());
    auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
    cout << "Skirste i grupes: " << filename << " : "
        << duration.count() << " milliseconds" << endl;
    n = 0;

}

void rusiavimasl(string filename) {
    std::ifstream out(filename);
    out.open(filename);
    long int n = 0;

    double number = 0;

    n = std::count(std::istreambuf_iterator<char>(out),
        std::istreambuf_iterator<char>(), '\n');
    string vardas, pavarde;

    //Studentas* grupe;

    out.close();
    out.open(filename);
    std::ofstream out1("vargsiukai " + filename);
    std::ofstream out2("kieta " + filename);
    out1 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    out2 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;

    string line;

    std::list<DerivedStudentas> grupe;
    DerivedStudentas temp;
    string dummyLine;
    getline(out, dummyLine);
    int it = 0;
    auto t1 = high_resolution_clock::now();
    while (out >> temp.vardas >> temp.pavarde >> number) {
        temp.paz.push_back(number);
        if (number < 5) {
            out1 << temp.vardas << "    " << temp.pavarde << "      " << temp.paz[it] << endl;
        }

        else {
            out2 << temp.vardas << "    " << temp.pavarde << "      " << temp.paz[it] << endl;

        }
        grupe.push_back(temp);
        it++;
    }

    //grupe.push_back(DerivedStudentas());

    auto t2 = high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
    cout << "Skirste i grupes list: " << filename << " : "
        << duration.count() << " milliseconds" << endl;
    n = 0;


}

void rusiavimasr(string filename) {
    std::ifstream out(filename);
    out.open(filename);
    long int n = 0;

    double number = 0;

    n = std::count(std::istreambuf_iterator<char>(out),
        std::istreambuf_iterator<char>(), '\n');
    string vardas, pavarde;

    //Studentas* grupe;

    out.close();
    out.open(filename);
    std::ofstream out1("vargsiukai " + filename);
    std::ofstream out2("kieta " + filename);
    out1 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    out2 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;

    string line;

    std::deque<DerivedStudentas> grupe;
    DerivedStudentas temp;
    string dummyLine;
    getline(out, dummyLine);
    int it = 0;
    auto t1 = high_resolution_clock::now();
    while (out >> temp.vardas >> temp.pavarde >> number) {
        temp.paz.push_back(number);
        if (number < 5) {
            out1 << temp.vardas << "    " << temp.pavarde << "      " << temp.paz[it] << endl;
        }

        else {
            out2 << temp.vardas << "    " << temp.pavarde << "      " << temp.paz[it] << endl;

        }
        grupe.push_back(temp);
        it++;
    }

    //grupe.push_back(DerivedStudentas());

    auto t2 = high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
    cout << "Skirste i grupes list: " << filename << " : "
        << duration.count() << " milliseconds" << endl;
    n = 0;


}
//void isvedimas(DerivedStudentas *grupe, int n, char failas1)
//{
//    if (failas1 == 't') {
//
//
//        std::ofstream failas;
//        failas.open("isvesti.txt");
//
//        char isvesti;
//        cout << "Ar isvesti mediana?(T,N)" << std::endl;
//        std::cin >> isvesti;
//        failas << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << std::left << std::setw(20);
//        if (isvesti == 't') {
//            failas << std::setfill(' ') << "Mediana" << std::endl;
//        }
//        else {
//            failas << std::endl;
//        }
//        for (int i = 0; i < n; i++) {
//            if (isvesti == 't') {
//                failas << "----------------------------------------------------------------------------\n";
//            }
//            else {
//                failas << "-------------------------------------------------\n";
//            }
//            failas << std::left << std::setw(20) << std::setfill(' ') << grupe[i].vardas;
//            failas << std::left << std::setw(20) << std::setfill(' ') << grupe[i].pavarde;
//            failas << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].gal;
//            if (isvesti == 't') {
//                failas << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].mediana << std::endl;
//            }
//            else {
//                failas << std::endl;
//            }
//            if (isvesti == 't') {
//                failas << "----------------------------------------------------------------------------\n";
//            }
//            else {
//                failas << "-------------------------------------------------\n";
//            }
//        }
//    }
//    else {
//
//        char isvesti;
//        cout << "Ar isvesti mediana?(T,N)" << std::endl;
//        std::cin >> isvesti;
//        cout << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << std::left << std::setw(20);
//        if (isvesti == 't') {
//            cout << std::setfill(' ') << "Mediana" << std::endl;
//        }
//        else {
//            cout << std::endl;
//        }
//        for (int i = 0; i < n; i++) {
//            if (isvesti == 't') {
//                cout << "----------------------------------------------------------------------------\n";
//            }
//            else {
//                cout << "-------------------------------------------------\n";
//            }
//            cout << std::left << std::setw(20) << std::setfill(' ') << grupe[i].vardas;
//            cout << std::left << std::setw(20) << std::setfill(' ') << grupe[i].pavarde;
//            cout << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].gal;
//            if (isvesti == 't') {
//                cout << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].mediana << std::endl;
//            }
//            else {
//                cout << std::endl;
//            }
//            if (isvesti == 't') {
//                cout << "----------------------------------------------------------------------------\n";
//            }
//            else {
//                cout << "-------------------------------------------------\n";
//            }
//        }
//    }
//}