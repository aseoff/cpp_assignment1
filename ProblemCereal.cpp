#include <iostream>

using namespace std; //standard library -- has everything you need for input/output

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  const double OUNCES_IN_METRIC_TON = 35273.92; //constant variable storing number of ounces in a metric ton
  double cerealPackageWeightOunces; //weight in ounces declaration
  double cerealPackageWeightMetricTons; //weight in metric tons declaration
  double cerealBoxesForOneMetricTon; //boxes needed for a metric ton declaration

  cout << endl << "Enter cereal package weight (in ounces): " << endl;
  cout << "-> "; //shows cursor to user
  cin >> cerealPackageWeightOunces; //assigns input to weight in ounces variable

  cerealPackageWeightMetricTons = cerealPackageWeightOunces / OUNCES_IN_METRIC_TON; //arithmetic that assigns correct value for weight in metric tons
  cerealBoxesForOneMetricTon = 1 / cerealPackageWeightMetricTons; //arithmetic that assigns correct value for boxes needed for a metric ton

  cout << endl << "Cereal package weighs " << cerealPackageWeightMetricTons << " metric ton(s)." << endl << endl; //prints out the weight in metric tons
  cout << cerealBoxesForOneMetricTon << " cereal box(es) are needed to yield one metric ton of cereal." << endl << endl; //prints out boxes needed to yield one metric ton

  return 0;
}
