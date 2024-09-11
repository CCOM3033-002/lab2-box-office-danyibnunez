#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    string movieName;
    int adultTicketsSold, childTicketsSold;
    const double adultTicketPrice = 10.00;
    const double childTicketPrice = 6.00;
    const double theaterPercentage = 0.20;

    // Display purpose of the program
    cout << "This program calculates the Gross and Net Box Office Profit and the Distributor's Profit of a movie playing in the theater.\n\n";

    // Get input from user
    cout << "Enter the name of the movie: ";
    getline(cin, movieName);
    cout << "Enter the amount of adult tickets sold: ";
    cin >> adultTicketsSold;
    cout << "Enter the amount of child tickets sold: ";
    cin >> childTicketsSold;

    // Calculations
    double grossProfit = (adultTicketsSold * adultTicketPrice) + (childTicketsSold * childTicketPrice);
    double netProfit = grossProfit * theaterPercentage;
    double distributorAmount = grossProfit - netProfit;

    // Display results
    cout << "\n"
         << setw(25) << left << "Movie Name: " << "\"" << movieName << "\"\n"
         << setw(25) << left << "Adult Tickets Sold: " << setw(6) << right << adultTicketsSold << "\n"
         << setw(25) << left << "Child Tickets Sold: " << setw(6) << right << childTicketsSold << "\n"
         << setw(25) << left << "Gross Box Office Profit: " << "$" << setw(8) << right << fixed << showpoint << setprecision(2) << grossProfit << "\n"
         << setw(25) << left << "Net Box Office Profit: " << "$" << setw(8) << right << fixed << showpoint << setprecision(2) << netProfit << "\n"
         << setw(25) << left << "Amount Paid to Distributor: " << "$" << setw(8) << right << fixed << showpoint << setprecision(2) << distributorAmount << "\n";

    return 0;
}