#include <iostream>
using namespace std;
int main()
{
    // 1.
    int n = 0;
    int x = 0;
    for(int t; t<=100000; t++){
        n += 7;
        x += n;
    }
    cout<<x<<endl;
    return 0;
}
