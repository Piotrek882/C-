#include <iostream>
#include <cmath>

using namespace std;

int nwd(int a, int b) {
    if (b == 0) {
        return a;
    } else {
        return nwd(b, a % b);
    }
}

void skroc_ulamek(int &licznik, int &mianownik) {
    int nwd_ulamka = nwd(abs(licznik), abs(mianownik));
    licznik /= nwd_ulamka;
    mianownik /= nwd_ulamka;
}

int main() {
    int l1, m1, l2, m2, dzialanie;

    
    cout << "Podaj licznik i mianownik pierwszego ulamka (oddzielone spacja): ";
    cin >> l1 >> m1;

    cout << "Podaj licznik i mianownik drugiego ulamka (oddzielone spacja): ";
    cin >> l2 >> m2;

    
    cout << "Wybierz dzialanie, ktore chcesz wykonac:" << endl;
    cout << "1. Mnozenie" << endl;
    cout << "2. Dzielenie" << endl;
    cout << "3. Dodawanie" << endl;
    cout << "4. Odejmowanie" << endl;
    cin >> dzialanie;

    int wynik_l, wynik_m; 

    
    switch (dzialanie) {
        case 1: 
            wynik_l = l1 * l2;
            wynik_m = m1 * m2;
            break;
        case 2: 
            wynik_l = l1 * m2;
            wynik_m = m1 * l2;
            break;
        case 3: 
            wynik_l = l1 * m2 + l2 * m1;
            wynik_m = m1 * m2;
            break;
        case 4: 
            wynik_l = l1 * m2 - l2 * m1;
            wynik_m = m1 * m2;
            break;
        default:
            cout << "Nieprawidlowy wybor dzialania." << endl;
            return 0;
    }

    
    skroc_ulamek(wynik_l, wynik_m);
    
    if(wynik_l==wynik_m){
        cout<<"Wynik: "<<1<<endl;
    }else if(wynik_m == 1){
        cout<<"Wynik: "<<wynik_l<<endl;
    }else if(wynik_l > wynik_m){
        
    }

    
    cout << "Wynik: " << wynik_l << "/" << wynik_m << endl;

    return 0;
}
