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
void isvedimas(Studentas *grupe, int n)
{
    char isvesti;
    std::cout << "Ar isvesti mediana?(T,N)" << std::endl;
    std::cin >> isvesti;
    std::cout << std::left << std::setw(20) << std::setfill(' ') << "Vardas" << std::left << std::setw(20) << std::setfill(' ') << "Pavarde" << std::left << std::setw(20) << std::setfill(' ') << "Vidurkis" << std::left << std::setw(20);
    if (isvesti == 't') {
        std::cout << std::setfill(' ') << "Mediana" << std::endl;
    }
    else {
        std::cout << std::endl;
    }
    for (int i = 0; i < n; i++) {
        if (isvesti == 't') {
            std::cout << "----------------------------------------------------------------------------\n";
        }
        else {
            std::cout << "-------------------------------------------------\n";
        }
        std::cout << std::left << std::setw(20) << std::setfill(' ') << grupe[i].vardas;
        std::cout << std::left << std::setw(20) << std::setfill(' ') << grupe[i].pavarde;
        std::cout << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].gal;
        if (isvesti == 't') {
            std::cout << std::left << std::setw(20) << std::setfill(' ') << std::setprecision(3) << grupe[i].mediana << std::endl;
        }
        else {
            std::cout << std::endl;
        }
        if (isvesti == 't') {
            std::cout << "----------------------------------------------------------------------------\n";
        }
        else {
            std::cout << "-------------------------------------------------\n";
        }
    }
}