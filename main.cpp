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
	double root1;
	double root2;
	cout << "Enter the value of a,b, c:" << endl;
	cin >> a >> b >> c;
	discriminant = pow(b, 2) - 4 * a * c;
	root1 = (-b + sqrt(discriminant)) / (2 * a);
	root2 = (-b + sqrt(discriminant)) / (2 * a);
	if (discriminant==0) {
		cout << "The single root is" << root1 << endl;

	}
	else if (discriminant > 0) {
		cout << "Two real roots\n";
		cout << "-First root" << root1 << endl;
		cout << "-Second root" << root2 << endl;

	}
	else if (discriminant > 0) {
		cout << "Complex root\n";
	}
	return 0;


	




}
