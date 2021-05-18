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
void sukurimas() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_int_distribution<> distr(1, 10);
    string filename;
    int o = 1000;
    int numeris;
    while (o != 1000000) {
        auto t1 = high_resolution_clock::now();
        std::string filename = std::to_string(o) + ".txt";
        std::ofstream out(filename);
        out << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
 
        for (int i = 0; i < o; i++) {
            numeris = distr(gen);
            out << "Vardas" << i << "    Pavarde" << i << "      " << numeris << endl;
            
        }
        auto t2 = high_resolution_clock::now();
        auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
        cout << "Iraso faila: " << o << " : "
            << duration.count() << " milliseconds" << endl;
        //out.close();
        o = o * 10;
    }
}
bool maziau(double i) {
    return (i < 5);
}
bool compare(double i) { 
    return (i < 5); }

void rusiavimas(string filename, int o) {
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
    std::ofstream out1("vargsiukai" + filename);
    std::ofstream out2("kieta" + filename);
    out1 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    out2 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    
    string line;

    std::vector<Studentas1> grupe(n);
    std::vector<Studentas1> vargsiukai(n);

    auto const predicate = [](double const value) { return value < 5; };
    string dummyLine;
    getline(out, dummyLine);
    auto t1 = high_resolution_clock::now();

    for (long int u = 0; u < n; u++) {
        out >> grupe[u].vardas >> grupe[u].pavarde >> number;
        grupe[u].paz.push_back(number);
        //cout << number << endl;
        //std::remove_copy_if(grupe[u].paz.begin(), grupe[u].paz.end(), back_inserter(vargsiukai[u].paz), maziau);

        //std::vector<double> vargsiukai[u].paz(grupe[u].paz.size());
        if (number < 5) {
            std::copy(grupe[u].vardas.begin(), grupe[u].vardas.end(), std::back_inserter(vargsiukai[u].vardas));
            std::copy(grupe[u].pavarde.begin(), grupe[u].pavarde.end(), std::back_inserter(vargsiukai[u].pavarde));
            std::copy(grupe[u].paz.begin(), grupe[u].paz.end(), std::back_inserter(vargsiukai[u].paz));
            out1 << vargsiukai[u].vardas << "    " << vargsiukai[u].pavarde << "      " << vargsiukai[u].paz[0] << endl;
        }
        else {
            std::copy(grupe[u].vardas.begin(), grupe[u].vardas.end(), std::back_inserter(vargsiukai[u].vardas));
            std::copy(grupe[u].pavarde.begin(), grupe[u].pavarde.end(), std::back_inserter(vargsiukai[u].pavarde));
            out2 << vargsiukai[u].vardas << "    " << vargsiukai[u].pavarde << "      " << grupe[u].paz[0] << endl;
        }
       
    }
    //grupe.push_back(Studentas1());
    auto t2 = high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
    cout << "Skirste i grupes: " << o << " : "
        << duration.count() << " milliseconds" << endl;
    n = 0;

    
}

void rusiavimasl(string filename, int o) {
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
    std::ofstream out1("vargsiukai" + filename);
    std::ofstream out2("kieta" + filename);
    out1 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    out2 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;

    string line;

    std::list<Studentas1> grupe(n);
    string dummyLine;
    getline(out, dummyLine);
    auto t1 = high_resolution_clock::now();
    std::list<Studentas1>::iterator it;
    for (it = grupe.begin(); it != grupe.end(); it++) {
        out >> (it)->vardas >> (it)->pavarde >> number;
        (it)->paz.push_back(number);
        //cout << number << endl;
        if (number < 5) {
            out1 << (it)->vardas << "    " << (it)->pavarde << "      " << (it)->paz[0] << endl;
        }
        else {
            out2 << (it)->vardas << "    " << (it)->pavarde << "      " << (it)->paz[0] << endl;
        }
    }

    //grupe.push_back(Studentas1());

    auto t2 = high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
    cout << "Skirste i grupes list: " << o << " : "
        << duration.count() << " milliseconds" << endl;
    n = 0;


}

void rusiavimasr(string filename, int o) {
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
    std::ofstream out1("vargsiukai" + filename);
    std::ofstream out2("kieta" + filename);
    out1 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;
    out2 << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << endl;

    string line;

    std::deque<Studentas1> grupe(n);
    string dummyLine;
    getline(out, dummyLine);
    auto t1 = high_resolution_clock::now();
    std::deque<Studentas1>::iterator it;
    for (it = grupe.begin(); it != grupe.end(); it++) {
        out >> (it)->vardas >> (it)->pavarde >> number;
        (it)->paz.push_back(number);
        //cout << number << endl;
        if (number < 5) {
            out1 << (it)->vardas << "    " << (it)->pavarde << "      " << (it)->paz[0] << endl;
        }
        else {
            out2 << (it)->vardas << "    " << (it)->pavarde << "      " << (it)->paz[0] << endl;
        }
    }

    //grupe.push_back(Studentas1());

    auto t2 = high_resolution_clock::now();
    auto duration = std::chrono::duration_cast<milliseconds>(t2 - t1);
    cout << "Skirste i grupes list: " << o << " : "
        << duration.count() << " milliseconds" << endl;
    n = 0;


}
void isvedimas(Studentas1 *grupe, int n, char failas1)
{
    if (failas1 == 't') {


        std::ofstream failas;
        failas.open("isvesti.txt");

        char isvesti;
        cout << "Ar isvesti mediana?(T,N)" << std::endl;
        std::cin >> isvesti;
        failas << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << std::left << std::setw(20);
        if (isvesti == 't') {
            failas << std::setfill(' ') << "Mediana" << std::endl;
        }
        else {
            failas << std::endl;
        }
        for (int i = 0; i < n; i++) {
            if (isvesti == 't') {
                failas << "----------------------------------------------------------------------------\n";
            }
            else {
                failas << "-------------------------------------------------\n";
            }
            failas << std::left << std::setw(20) << std::setfill(' ') << grupe[i].vardas;
            failas << std::left << std::setw(20) << std::setfill(' ') << grupe[i].pavarde;
            failas << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].gal;
            if (isvesti == 't') {
                failas << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].mediana << std::endl;
            }
            else {
                failas << std::endl;
            }
            if (isvesti == 't') {
                failas << "----------------------------------------------------------------------------\n";
            }
            else {
                failas << "-------------------------------------------------\n";
            }
        }
    }
    else {

        char isvesti;
        cout << "Ar isvesti mediana?(T,N)" << std::endl;
        std::cin >> isvesti;
        cout << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << std::left << std::setw(20);
        if (isvesti == 't') {
            cout << std::setfill(' ') << "Mediana" << std::endl;
        }
        else {
            cout << std::endl;
        }
        for (int i = 0; i < n; i++) {
            if (isvesti == 't') {
                cout << "----------------------------------------------------------------------------\n";
            }
            else {
                cout << "-------------------------------------------------\n";
            }
            cout << std::left << std::setw(20) << std::setfill(' ') << grupe[i].vardas;
            cout << std::left << std::setw(20) << std::setfill(' ') << grupe[i].pavarde;
            cout << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].gal;
            if (isvesti == 't') {
                cout << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].mediana << std::endl;
            }
            else {
                cout << std::endl;
            }
            if (isvesti == 't') {
                cout << "----------------------------------------------------------------------------\n";
            }
            else {
                cout << "-------------------------------------------------\n";
            }
        }
    }
}