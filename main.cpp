#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a, b, c, d, disc;
	cout << "Enter the value of a :" << endl;
	cin >> a;
	cout << "Enter the value of b:" << endl;
	cin >> b;
	cout << "Enter the value of c:" << endl;
	cin >> c;
	d = pow(b, 2) - 4 * a * c;
                                                            

	if (d < 0) {
		cout << "The equation has two complex roots." << endl;

	}
	else {
		disc = pow(d, 0.5);
	}
	
	if (d == 0) {
	
		cout << "The equation has a single repeated root."
			<< (-b + disc) / (2 * a) << endl;

	}
	
	 
	else  {
		
		cout << "The equation has different roots .";
		cout << "The roots 1"
			<< (-b + disc) / (2 * a)
			<<"and root 2"
			<< (-b - disc) / (2 * a);
	}
	

	return 0;





}
