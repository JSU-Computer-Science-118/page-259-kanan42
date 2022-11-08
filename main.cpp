//Hannah Coleman J00963674
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a;
	double b;
	double c;
	double d;
	double discriminant;
	cout << "Enter the value of a :" << endl;
	cin >> a;
	cout << "Enter the value of b:" << endl;
	cin >> b;
	cout << "Enter the value of c:" << endl;
	cin >> c;
	d = pow(b, 2) - 4 * a * c;
	discriminant = pow(d, 0.5);
                                                                                              

	if (d < 0) {
		cout << "Complex root" << endl;

	}

	
	

	return 0;





}
