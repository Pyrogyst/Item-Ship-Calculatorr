// Nick Jessop Shipping Calculator 

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	// Top Print
	cout << ".................................................." << endl;
	cout << "ITCS 2530 - Programming Assignment for week #3" << endl;
	cout << ".................................................." << endl;
	cout << " " << endl;

	// Strings
	char ItemName;
	char YNFrag;
	float OrderTotal;
	char Country;
	float ShipCost;
	float Total;
	float YNShipCost;

	//Constant / Math
	Total = OrderTotal + ShipCost;
	YNShipCost = 2.0;

	// Input Statements (how do i not hard code these? couldnt figure that out.)
	cout << "Please enter the item name (no spaces)...........:" << endl;
	cin >> ItemName;
	cout << "Is the item fragile? (y=yes/n=no)................:" << endl;
	cin >> YNFrag;
	cout << "Please enter your order total....................:" << endl;
	cin >> OrderTotal;
	cout << "Please enter destination. (usa/can/aus/mars)..........:" << endl;
	cin >> Country;

	//--------------------------------IF STATEMENTS------------------------------------------
	//USA
	if (Country == 'usa' && OrderTotal >= 150) {
		ShipCost == 0;
	}
	else if (Country == 'usa' && OrderTotal <= 50) {
		ShipCost == 6.00;
	}
	else if (Country == 'usa' && OrderTotal >= 50.01 && <= 100.00) {
		ShipCost == 9.00;
	}
	else if (Country == 'usa' && OrderTotal >= 100.01 && <= 150.00) {
		ShipCost == 12.00;
	}
	else {
		cout << "Invalid entry, exiting";
	}

	//CANADA
	if (Country = 'can' && OrderTotal >= 150) {
		ShipCost = 0;
	}
	else if (Country = 'can' && OrderTotal <= 50) {
		ShipCost = 8.00;
	}
	else if (Country = 'can' && OrderTotal >= 50.01 && <= 100.00) {
		ShipCost = 12.00;
	}
	else if (Country == 'can' && OrderTotal >= 100.01 && <= 150.00) {
		ShipCost = 15.00;
	}
	else {
		cout << "Invalid entry, exiting";
	}

	//AUSTRALIA
	if (Country == 'aus' && OrderTotal >= 150) {
		ShipCost == 0;
	}
	else if (Country == 'aus' && OrderTotal <= 50) {
		ShipCost == 10.00;
	}
	else if (Country == 'aus' && OrderTotal >= 50.01 && <= 100.00) {
		ShipCost == 14.00;
	}
	else if (Country == 'aus' && OrderTotal >= 100.01 && <= 150.00) {
		ShipCost == 17.00;
	}
	else {
		cout << "Invalid entry, exiting";
	}

	//mars
	if (Country == 'mars' && OrderTotal >= 150) {
		ShipCost == 0;
	}
	else if (Country == 'mars' && OrderTotal <= 50) {
		ShipCost == 10000.00;
	}
	else if (Country == 'mars' && OrderTotal >= 50.01 && <= 100.00) {
		ShipCost == 14000.00;
	}
	else if (Country == 'mars' && OrderTotal >= 100.01 && <= 150.00) {
		ShipCost == 17000.00;
	}
	else {
		cout << "Invalid entry, exiting";
	}

	//FRAGILE?
	if (YNFrag == 'y' || 'Y') {
		ShipCost = YNShipCost + ShipCost;
	}
	else if (YNFrag == 'n' || 'N') {
		ShipCost = ShipCost;
	}
	//-------------------------------------------------------------------------------------------

	//Extra Space
	cout << " " << endl;

	//Outputs
	cout << "Your item is" << ItemName << endl;
	cout << "Your shipping cost is" << right << setfill('.') << setw(28) << ShipCost << endl;
	cout << "You are shipping to" << right << setfill('.') << setw(30) << Country << endl;
	cout << "Your total shipping costs are" << right << setfill('.') << setw(11) << Total << endl; 
}
