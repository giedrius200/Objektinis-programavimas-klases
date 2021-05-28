# Objektinis-programavavimas-2
V1.5: Sukuriama bazine klase ir derived klase

```
class Zmogus {
protected:
    string vardas;
    string pavarde;
};
class DerivedStudentas : private Zmogus {
public:
    double egz;
    double mediana;
    double gal;
    string vardas_ = vardas;
    string pavarde_ = pavarde;
    vector <double>paz;
};
```

