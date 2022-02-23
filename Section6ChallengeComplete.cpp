/*
	Frank's Carpet Cleaning Service
	Charges:
		$25 per small room
		$35 per large room
	Sales tax rate is 6%
	Estimates are valid for 30 days

	Prompt the user for the number of small and large room they would like cleaned
	and provide and estimate such as:

Estimate for carpet cleaning service
Number of small rooms: 3
Number of large rooms: 1
Price per small room: $25
Price per large room: $35
Cost $110
Tax: $6.6
========================================
Total estimate: $116.6
This estimate is valid for 30 days
*/


#include <iostream>

using namespace std;

int main()
{
	cout << "Hello! Welcome to Frank's Carpet Cleaning Service" << endl;

	int number_of_small_rooms{ 0 };
	cout << "\nHow many small rooms would you like cleaned: ";
	cin >> number_of_small_rooms;

	int number_of_large_rooms{ 0 };
	cout << "How many large rooms would you like cleaned : ";
	cin >> number_of_large_rooms;

	cout << "\nEstimate for carpet cleaning service" << endl;
	cout << "Small Rooms: " << number_of_small_rooms << endl;
	cout << "Large Rooms: " << number_of_large_rooms << endl;

	const double price_per_small_room{ 25 };
	cout << "Price per small room: $" << price_per_small_room << endl;
	const double price_per_large_room{ 35 };
	cout << "Price per large room: $" << price_per_large_room << endl;

	cout << "=============================";

	int estimate_cost{ 0 };
	cout << "\nCost: $" << (price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms);

	const double sales_tax{ 0.06 };
	cout << "\nTax: $" << (number_of_small_rooms * price_per_small_room * sales_tax) + (price_per_large_room * number_of_large_rooms * sales_tax);

	cout << "\nTotal Estimate: $" << ((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) +
		(((price_per_small_room * number_of_small_rooms) + (price_per_large_room * number_of_large_rooms)) * sales_tax) << endl;

	const int estimate_expiry{ 30 };
	cout << "This estimate is valid for: " << estimate_expiry << " days" << endl;


	return 0;
}