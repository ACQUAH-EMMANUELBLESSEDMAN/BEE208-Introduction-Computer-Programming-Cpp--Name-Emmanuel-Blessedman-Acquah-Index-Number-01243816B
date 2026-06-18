#include <iostream> 
using namespace std;


int main() {  
   int v, w;
    cout << "Enter two integers: ";  
	cin >> v >> w;
    cout << "Before swap: v = " << v << ", w = " << w << endl;   
	v = v ^ w;  
    cout << "After swap: v = " << v << ", w = " << w << endl;
    
    
    return 0;
}
