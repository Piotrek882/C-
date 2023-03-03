#include <iostream>
using namespace std;

bool pierwsza(int n){	
	for(int i = 2; i<n;i++){
	if(n%i == 0){
	return false;
	} else return true;
	}
}

bool pierwsza2(int n){	
	for(int i=2; i*i<n;i++){
	if(n%i == 0){
	return false;
	}else return true;
	}
}

int main() {
	int n;
	cout << "podaj n: " << endl;
	cin >> n;
	cout << pierwsza(n) << endl;
}
