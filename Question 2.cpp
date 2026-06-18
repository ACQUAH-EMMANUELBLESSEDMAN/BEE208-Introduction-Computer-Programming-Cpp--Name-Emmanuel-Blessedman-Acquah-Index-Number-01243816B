#include<iostream>
#include<cmath>
using namespace std;

int main() {
	double radius;
	const double Pl = 3.14159;
	cout<<"enter radius:";
	cin>> radius;
	
	
	
	double area = Pl*pow(radius,2);
	cout<<"area of circle:"<<area<<endl;
	
	
	
	return 0;
}