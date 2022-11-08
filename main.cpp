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
	double root;
	double root 1;
	double root 2;
	cout << "Enter the value of a :" << endl;
	cin >> a;
	cout << "Enter the value of b:" << endl;
	cin >> b;
	cout << "Enter the value of c:" << endl;
	cin >> c;
	
	d = pow(b, 2) - (4 * a * c);
	discriminant = pow(d, 0.5);                                                      

	if (d < 0) {
		cout << " two complex roots" << endl;

	}

		
	else if (d == 0) {
		 root = (-b + discriminant) / (2 * a);
		cout << "Single root" <<" root: "<< root;
	}
	
	 
	else if (d > 0) {
		 root1 = (-b + discriminant) /(2*a)
		root2 = (-b - discriminant) / (2 * a);
		cout << "Two real roots";
		cout <<  " root 1 :"
			<< root1 << ", " << "root 2 :" << root2 << endl;

	}
	

	return 0;





}
