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

		
	else if (d == 0) {
		double root = (-b + discriminant) / (2 * a);
		cout << "The single root is "<< root;
	}
	
	 
	else if (d > 0) {
		double root1 = (-b + discriminant) / (2 * a);
		double root2 = (-b + discriminant) / (2 * a);
		cout << "-First root" << root1<<endl;
		cout << "-Second root" << root2;

	}
	

	return 0;





}
