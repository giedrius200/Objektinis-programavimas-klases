# Objektinis-programavavimas-2
V1.5: Sukuriama bazine klase ir derived klase

```
class Zmogus {
protected:
    string vardas;
    string pavarde;
};
class DerivedStudentas : public Zmogus {
public:
    double egz;
    double mediana;
    double gal;
    using Zmogus::vardas;
    using Zmogus::pavarde;
    /*string getvardas() {
        return vardas_;
    }
    string getpavarde() {
        return pavarde_;
    }*/
    vector <double>paz;
};
```

