#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main()
{
    double payRate, grossIncome, netIncome, schoolAmount, bondsAmount;
    double clothesAmount, parentsBondsAmount, hoursWorked;
    
    const double Tax_Rate = 0.14;
    const double Clothes_Percentage_of_Income = 0.10;
    const double School_Percentage_of_Income = 0.01;
    const double Savings_Bonds_Percentage_of_Income = 0.25;
    const double Parents_Co_Contribution_Amount = 0.50;
    
    cout << "Number of Working Hour: ";
    cin >> hoursWorked;
    
    cout << "Hourly Rate: $";
    cin >> payRate;
    
    grossIncome = hoursWorked * payRate;
    netIncome = grossIncome *= Tax_Rate;
    clothesAmount = netIncome * Clothes_Percentage_of_Income;
    schoolAmount = netIncome * School_Percentage_of_Income;
    netIncome -= (clothesAmount + schoolAmount); 
    bondsAmount = netIncome * Savings_Bonds_Percentage_of_Income;
    parentsBondsAmount = bondsAmount * Parents_Co_Contribution_Amount;
    
    cout << fixed << showpoint << setprecision(2);
    
    cout << "Gross Income: $" << grossIncome << endl;
    cout << "Net Income: $" << netIncome << endl;
    cout << "Clothes & Accessories: $" << clothesAmount << endl;
    cout << "School Supplies: $" << schoolAmount << endl;
    cout << "Savings Bonds: $" << bondsAmount << endl;
    cout << "Parents Additional Saving Bonds: $" <<parentsBondsAmount << endl;
    
    _getch();
    return 0;
}
