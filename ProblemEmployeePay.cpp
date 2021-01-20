#include <iostream>

using namespace std; //standard library -- has everything you need for input/output

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  const double REGULAR_HOURLY_RATE = 16.00;
  const int REGULAR_WORK_WEEK_HOURS = 40;
  double overtimeRate = REGULAR_HOURLY_RATE * 1.5;
  double hoursWorkedInWeek;
  double grossPay;
  double socialSecurityTax;
  double federalIncomeTax;
  double stateIncomeTax;
  const double MEDICAL_INSURANCE = 10;
  double netTakeHomePay;

  cout << endl << "----------" << endl;

  cout << endl << "Enter number of hours worked in a week: " << endl;
  cout << "-> ";
  cin >> hoursWorkedInWeek;

  cout << endl << "----------" << endl;

  if (hoursWorkedInWeek > REGULAR_WORK_WEEK_HOURS)
  {
    grossPay = (REGULAR_HOURLY_RATE * REGULAR_WORK_WEEK_HOURS) + (overtimeRate * (hoursWorkedInWeek - REGULAR_WORK_WEEK_HOURS));
  }

  else
  {
    grossPay = REGULAR_HOURLY_RATE * hoursWorkedInWeek;
  }

  socialSecurityTax = grossPay * 0.06;

  federalIncomeTax = grossPay * 0.14;

  stateIncomeTax = grossPay * 0.05;

  netTakeHomePay = grossPay - socialSecurityTax - federalIncomeTax - stateIncomeTax - MEDICAL_INSURANCE;

  cout << endl << "Gross pay: $" << grossPay << endl << endl;

  cout << "----------" << endl;

  cout << endl << "Withholding Amounts: " << endl << endl;

  cout << "Social security tax: $" << socialSecurityTax << endl;

  cout << "Federal income tax: $" << federalIncomeTax << endl;

  cout << "State income tax: $" << stateIncomeTax << endl;

  cout << "Medical insurance: $" << MEDICAL_INSURANCE << endl << endl;

  cout << "----------" << endl;

  cout << endl << "Net take-home pay for the week: $" << netTakeHomePay << endl << endl;

  cout << "----------" << endl;

  return 0;
}
