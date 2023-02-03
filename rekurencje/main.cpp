#include <iostream>

using namespace std;

int silnia(int n){
    if (n==0) return 1;
    return silnia(n-1)*n;
}
int fib(int n){
    if ((n==1)||(n==2)) return 1;
    return fib(n-1)+fib(n-2);

}
int fib_i (int n) {
    int a = 0, b = 1;
    for(int i=0;i<n;i++)
     {
            b += a;
            a = b-a;
     }
     cout<<b<<endl;
}

int main()
{
    cout<<silnia(5)<<endl;
    cout<<fib(6)<<endl;
    cout<<fib_i(6)<<endl;
    return 0;
}
