//Calcular pi
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std ;

int main(){
	float pi = 0;
	int i;
	
	for(i = 0; i<=5000000; i ++){
		pi = (pow((-1), i)/ ((2*i)+1)) + pi;
	}
	cout.precision(7);
	cout << "El resultado de pi es: ";
	cout << (pi*4) << endl;
	return 0;
}
