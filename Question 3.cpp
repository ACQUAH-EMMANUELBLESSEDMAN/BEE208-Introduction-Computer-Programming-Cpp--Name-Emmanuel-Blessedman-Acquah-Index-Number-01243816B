#include<iostream>
 using namespace std;
int main() {
	
	
    int m, n, o;
	cout<< "Enter three integers:"; 
	cin>> m >> n >> o;
	
    if (m == n && n == o) 
	cout<< "equal" << endl;     
	else
    cout<< "not equal" << endl;
    
    return 0;
}
