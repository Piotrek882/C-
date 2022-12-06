#include<iostream>
using namespace std;

int ilosc;
int suma;
int i = 1;

int main()
{

    while(i <= 100000){
        if (i % 7 == 0){
            suma += i;
            ilosc++;
        }
        i++;
    }

    cout << "ilosc liczb od 0 do 100000 podzielnych przez 7: " << ilosc << endl;
    cout << "suma: " << suma << endl;

    return 0;
}
