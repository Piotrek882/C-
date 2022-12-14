#include <iostream>

using namespace std;

int main()
{
    cout<<"Podaj swoją masę:"<<endl;
    double masa;
    cin >> masa;
    cout<<"Podaj swój wzrost:"<<endl;
    double wzrost;
    cin >> wzrost;
    wzrost /= 100;
    double bmi = masa / wzrost;
    cout <<"Twoje BMI: "<< bmi << endl;
    if(bmi < 18.5){
        cout<<"Jestes za szczuply"<<endl;
    }else if(bmi > 25){
        cout<<"Jestes za gruby"<<endl;    
    }
    return 0;
}