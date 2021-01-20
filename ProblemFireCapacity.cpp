#include <iostream>

using namespace std; //standard library -- has everything you need for input/output

int main (int argc, char **argv) //command line parameters, first stands for argument count, argv is what stores arguments
{
  int maxRoomCapacity; //maximum room capacity variable declaration
  int peopleAttendingMeeting; //number of people attending meeting variable declaration

  cout << endl << "Enter maximum room capacity: " << endl;
  cout << "-> "; //shows cursor to user
  cin >> maxRoomCapacity; //assigns input to maximum room capacity variable

  cout << endl << "Enter number of people attending meeting: " << endl;
  cout << "-> "; //shows cursor to user
  cin >> peopleAttendingMeeting; //assigns input to people attending meeting variable

  if (peopleAttendingMeeting <= maxRoomCapacity) // conditional to test if people attending meeting is LESS THAN the maximum room capacity
  {
    cout << endl << "It is legal to hold the meeting and " << maxRoomCapacity - peopleAttendingMeeting << " additional people may legally attend." << endl << endl; //executes only if conditional above is true - prints that meeting is legal
  }

  else //executes only if above conditional is false
  {
    cout << endl << "The meeting cannot be held as planned due to fire regulations and " << peopleAttendingMeeting - maxRoomCapacity << " people must be excluded in order to meet the fire regulations." << endl << endl; //prints that meeting cannot take place
  }

  return 0;
}
