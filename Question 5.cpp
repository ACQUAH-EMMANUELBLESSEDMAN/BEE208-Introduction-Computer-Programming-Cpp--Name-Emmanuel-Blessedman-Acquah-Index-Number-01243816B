#include <iostream> 
using namespace std;


int main() { 
    int c, d;
    cout << "Enter two integers: ";  
	cin >> c >> d;
    if (c > d)
    cout << "First value is greater" << endl;    
	else if (d > c)
    cout << "Second value is greater" << endl;  
	else
    cout << "Both are equal" << endl;
    
    
    return 0;
}
