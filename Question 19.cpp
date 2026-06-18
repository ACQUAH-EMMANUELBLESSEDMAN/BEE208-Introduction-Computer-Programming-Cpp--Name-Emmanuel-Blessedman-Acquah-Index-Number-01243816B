#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;


int main() {  
   string binary;
    cout << "Enter a binary number: ";     
	cin >> binary;
    int decimal = 0;     
	int len = binary.length();  
	
	   
	for (int i = 0; i < len; i++) {         
	if (binary[len - 1 - i] == '1')
    decimal += pow(2, i);
    }
    cout << "Decimal: " << decimal << endl;     
	cout << "Hexadecimal: " << hex << decimal << endl;     
	cout << "Octal: " << oct << decimal << endl;
	
	
    return 0;
}
