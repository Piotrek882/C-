#include <iostream>

using namespace std;

int rek1(int n){
    if(n==1){
        return 4;
    } else return rek1 (n-1) + 3;
}
int rek2(int n){
    if(n==1){
        return 2;
    } else return rek2(n-1) * 2;
}
float rek3(float n){
    if(n==1){
        return 0.2;
    } else return rek3(n-1) * -3;
}
float rek4(float n){
    if(n==1){
        return -10;
    } else return rek4(n-1) / -2;
}


int main()
{
    cout<<rek1(3)<<endl;
    cout<<rek2(4)<<endl;
    cout<<rek3(3)<<endl;
    cout<<rek4(4)<<endl;
    return 0;
}