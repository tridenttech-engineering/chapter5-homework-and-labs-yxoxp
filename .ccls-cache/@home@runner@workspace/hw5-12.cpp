//hw5-12.cpp - displays the total owed
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double price_1 = 0;
	double price_2 = 0;
	double total_price = 0;
	cout << "Enter price for first product" << endl;
	cin >> price_1;
	cout << "Enter price for second product" << endl;
	cin >> price_2;


	if (price_1 > price_2) {

			price_2 = price_2 / 2;

	} else if (price_2 > price_1) {

			price_1 = price_1 / 2;

	} else if (price_2 == price_1) {

			price_2 = price_2 / 2;
	}

	total_price = price_1 + price_2;

	cout << "Total price is $" << total_price << endl;
	return 0;
}	//end of main function