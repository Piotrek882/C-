#include <iostream>

using namespace std;

int main()
{

//float a=3.14;
//cout <<"a="<<a<<endl;
//cout<<"a="<<(int)a<<endl;
//int b,c=1;
//b=2*c;

//cout <<"b="<<b<<endl;
//char J='J';
//char a='a';
//char n='n';
//cout<<(int)J<<(int)a<<(int)n<<endl;

// char P='P';
// char i='i';
// char o='o';
// char t='t';
// char r='r';
// cout<<(int)P<<(int)i<<(int)o<<(int)t<<(int)r<<endl; //wyświetla w kodie ASCII

//
//int a=3;
//int b=--a;
//int c=a++;
//cout<<c<<endl;

//int a=0;
//int b=3;
//int c=!a&&b;
//int d=!b||b;
//cout<<d<<endl;

//operatory bitowe

	// a = 5(00000101), b = 9(00001001)
	int a = 5, b = 9;

	// The result is 00000001
	cout<<"a = " << a <<","<< " b = " << b <<endl;
	cout << "a & b = " << (a & b) << endl;

	// The result is 00001101
	cout << "a | b = " << (a | b) << endl;

	// The result is 00001100
	cout << "a ^ b = " << (a ^ b) << endl;

	// The result is 11111010
	cout << "~a = " << (~a) << endl;

	// The result is 00010010
	cout<<"b << 1" <<" = "<< (b << 1) <<endl;

	// The result is 00000100
	cout<<"b >> 1 "<<"= " << (b >> 1 )<<endl;
	int c=2,d,e;
	d=c>>1;
	e=c<<1;
	cout<<(d|c)<<endl;
	cout<<(e|c) <<endl;

	return 0;
}
