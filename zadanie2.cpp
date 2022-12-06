#include<iostream>
using namespace std;

int n;
double do_dodania = 0.3;
double poczatek = -0.2;
double suma;

int main()
{
    cout << "podaj n" << endl;
    cin >> n;

    suma += poczatek;

    for (int i=1; i<n; i++){
        suma += poczatek + do_dodania * i;
    }


    cout << "wynik koncowy: " << suma << endl;

    return 0;
}
