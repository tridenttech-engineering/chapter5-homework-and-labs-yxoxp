//lab5-3.cpp - displays the total amount due
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	const double DISCOUNT_RATE_1 = 0.1;
	const double DISCOUNT_RATE_2 = 0.05;
	 const double SHIP_CHG1 = 0.99;
	 const double SHIP_CHG2 = 4.99;
	 double amtOwed = 0.0;
	 char member = ' ';


	 cout << "Amount owed before any discount and shipping: ";
	 cin >> amtOwed;
	 cout << "Premier Club member (Y/N)? ";
	 cin >> member;

	 if (toupper(member) == 'Y')
			 amtOwed -= amtOwed * DISCOUNT_RATE_1;
	 else
			 amtOwed -= amtOwed * DISCOUNT_RATE_2;

	 if (amtOwed >= 100.0)
			 amtOwed += SHIP_CHG1;
	 else
			 amtOwed += SHIP_CHG2;

	 cout << fixed << setprecision(2);
	 cout << "Amount owed after any discount and shipping: "
			 << amtOwed << endl;
	return 0;
}	//end of main function