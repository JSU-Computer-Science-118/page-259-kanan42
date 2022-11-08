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
	cin>> a >> b >> c 
	d = pow(b, 2) - 4 * a * c;
	discriminant = pow(d, 0.5);                                                      

	if (d < 0) {
		cout << " two complex roots" << endl;

	}

		
	else if (d == 0) {
		double root = (-b + discriminant) / (2 * a);
		cout << "Single root" <<" root: "<< root;
	}
	
	 
	else if (d > 0) {
		double root1 = (-b + discriminant) /(2*a)
		double root2 = (-b - discriminant) / (2 * a);
		cout << "Two real roots";
		cout <<  " root 1 :"
			<< root1 << ", " << "root 2 :" << root2 << endl;

	}
	

	return 0;





}
