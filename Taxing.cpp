#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
  //Total collected, sales, county tax, state tax, total tax
  double total;
  double sales;
  double countyTax;
  double stateTax;
  double totalTax;
  //Input values
  string month;
  string year;

  //Take the inputs needed
  cout << "Please input a month: ";
  cin >> month;
  cout << endl;
  cout << "Please input a year: ";
  cin >> year;
  cout << endl;
  cout << "Please input total amount collected: ";
  cin >> total;
  cout << endl;

  //Calculating State tax
  stateTax = 0.04 * total;

  //Calculating County tax
  countyTax = 0.02 * total;

  //Calculating total tax
  totalTax = countyTax + stateTax;

  //Calculating sales
  sales = total - totalTax;

  //Formating the table
  //Each number will have two decimal places
  cout << "Month: " << month <<endl;
  cout << "Year: " << year <<endl;
  cout << "----------------" << endl;
  cout << "Total Collected: \t" << "$" << std::fixed << std::setprecision(2) << total << endl;
  cout << "Sales: \t\t\t" << "$" << std::fixed << std::setprecision(2) << sales << endl;
  cout << "County Sales Tax: \t" << "$" << std::fixed << std::setprecision(2) << countyTax << endl;
  cout << "State Sales Tax: \t" << "$" << std::fixed << std::setprecision(2) << stateTax << endl;
  cout << "Total Sales Tax: \t" << "$" << std::fixed << std::setprecision(2) << totalTax << endl;

  return 0;
} //main
