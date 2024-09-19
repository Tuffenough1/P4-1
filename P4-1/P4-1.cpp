#include <iostream>
using namespace std;

int main(void) {

	// Das Variables
	double input;
	char celcius = 'C';
	char fahrenheit = 'F';
	char placeholder;

	cout << "Please input temperature: ";
	cin >> input >> placeholder;

	// Celcius Stuffs and Things
	if (placeholder == celcius){
		if (0 > input){
			cout << "Water is a solid at this temperature." << endl;
		}
		if (0 == input) {
			cout << "Water is both liquid and solid at this temperature." << endl;
		}
		if (0 < input) {
			if (100 > input) {
				cout << "Water is a liquid at this temperature." << endl;
			}
		}
		if (100 == input) {
			cout << "Water is both a liquid and gas at this temperature." << endl;
		}
		if (100 < input) {
			cout << "Water is a gas at this temperature." << endl;
		}
	}

	// Fahrenheight Stuffs and Things
	if (placeholder == fahrenheit) {
		if (32 > input) {
			cout << "Water is a solid at this temperature." << endl;
		}
		if (32 == input) {
			cout << "Water is both liquid and solid at this temperature." << endl;
		}
		if (32 < input) {
			if (212 > input) {
				cout << "Water is a liquid at this temperature." << endl;
			}
		}
		if (212 == input) {
			cout << "Water is both a liquid and gas at this temperature." << endl;
		}
		if (212 < input) {
			cout << "Water is a gas at this temperature." << endl;
		}
	}



}