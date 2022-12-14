#include <iostream>

using namespace std;

int main()
{
    int wiek1;
    cout<<"Podaj wiek pierwszej osoby"<<endl;
    cin >> wiek1;
    int wiek2;
    cout<<"Podaj wiek drugiej osoby"<<endl;
    cin >> wiek2;
    if(wiek1 > wiek2){
        cout<<"Pierwsza osoba jest starsza"<<endl;
    } else if (wiek2 > wiek1) {
        cout<<"Druga osoba jest starsza"<<endl;
    } else cout<<"Te osoby mają tyle samo lat"<<endl;
    if(wiek1 > 100 && wiek2 > 100){
        cout<<"Dlaczego obie osoby mają ponad sto lat???"<<endl;
    }
    return 0;
}