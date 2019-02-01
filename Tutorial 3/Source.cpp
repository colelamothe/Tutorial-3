// Tutorial 3 supplementary program 
// Cole Lamothe 100711084

#include <iostream>
#include <cmath>

using namespace std;

int main() {

	
	//part 1 solving a quadratic equation
	//variable declaration
	double a; // x^2 coefficient
	double b; // x^1 coefficient
	double c; // constant
	double root1, root2; // placeholder variables to store the return values
	
	cout << "This program calculated roots using a quadratic function" << endl;
	cout << "Please enter the x^2 coefficient: " << endl;
	cin >> a;
	cout << "Please enter the x^1 coefficient: " << endl;
	cin >> b;
	cout << "Please enter the constant: " << endl;
	cin >> c;
	
	// -b (+-) sqrt(b^2 - (4*a*c))/2
	if ((pow(b,2) - (4 * a*c)) >= 0) { // checks for a negative in the square root and if it is greater than or equal to 0 it runs the calculation, otherwise it prints an error message
		root1 = (-b - sqrt(pow(b,2) - (4 * a*c))) / (2 * a); //Negative root
		root2 = (-b + sqrt(pow(b,2) - (4 * a*c))) / (2 * a); //Positive root

		cout << "Root 1 is: " << root1 << " Root 2 is: " << root2 << endl;

	}
	else {
		cout << "Non-real root" << endl; // prints an error message in the case of negatives under the square root
	}
	
	cout << "\n" << endl; //seperation of programs
	
	//Part 2 solving for the height of a cylinder
	//h = (S-2*pi*r^2)/(2*pi*r)

	//variable declaration
	double surface; //Surface area of the cylinder
	double radius; //Radius of the cylinder
	double height; //calculated height of the cylinder
	const double pi = 3.14159; //approximation of Pi

	cout << "This program calculates the height of a cylinder given surface area and radius." << endl;
	//user input
	cout << "Please enter the surface area of the cylinder: " << endl;
	cin >> surface;
	cout << "Please enter the radius of the cylinder: " << endl;
	cin >> radius;

	//checking for invalid inputs
	if (surface > 0 && radius > 0) { // Checks if either surface area or radius are greater than 0 and either runs the calculation or returns an error
		height = (surface - 2 * pi*pow(radius, 2)) / (2 * pi*radius); // calculates the height
		if (height > 0) {											  // checks if height is positive. Negative height values cannot exist and will return an error due to bad inputs
			cout << "The height of the cylinder is: " << height << endl;
		}
		else {
			cout << "Surface area to radius ratio invalid. Please check input values." << endl; 
		}

	}
	else {
				cout << "Negative surface area or radius entered. Please restart and enter a positive number." << endl;
	}



	system("pause");
	return 0;
}