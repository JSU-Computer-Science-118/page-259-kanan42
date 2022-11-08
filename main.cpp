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
	cout << "Enter the value of a,b, c :" << endl;
	cin >> a <<b <<c;
	d = pow(b, 2) - 4 * a * c;
	discriminant = pow(d, 0.5);
                                                                                              

	if (d < 0) {
		cout << "The equation has two complex roots." << endl;

	}

		
	else if (d == 0) {
		double root = (-b + discriminant) / (2 * a);
		cout << "The equation has a single repeated root." <<" root: "<< root;
	}
	
	 
	else if (d > 0) {
		double root1 = (-b + discriminant) / (2 * a);
		double root2 = (-b + discriminant) / (2 * a);
		cout << "The equation has different roots .";
		cout << "The roots are:" << " root 1 :"
			<< root1 << ", " << "root 2 :" << root2 << endl;

	}
	

	return 0;





}
