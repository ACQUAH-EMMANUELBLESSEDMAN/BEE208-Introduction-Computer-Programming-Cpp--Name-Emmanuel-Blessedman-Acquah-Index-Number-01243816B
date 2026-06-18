#include <iostream> 
using namespace std;
int main() {
    float s, t;
    cout << "Enter two floats: ";     
	cin >> s >> t;
    float larger = (s > t) ? s : t;     
	cout << "Larger value: " << larger << endl;
	
    return 0;
}
