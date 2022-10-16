/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

int
main ()
{
  int numOfEmp;
  long idNum;
  string firstName, lastName;
  float salary;
  numOfEmp = 0;

  while (numOfEmp < 5)
    {

      cout << "Employees Personal Information\n";

      cout << "Enter your ID: \n";
      cin >> idNum;

      cout << "Enter your First Name: \n";
      cin >> firstName;

      cout << "Enter your Last Name: \n";
      cin >> lastName;

      cout << "Enter your Salary: \n";
      cin >> salary;

      cout << "Your ID number is: " << idNum << endl;
      cout << "Your name is: " << firstName << " " << lastName << endl;
      cout << "Your Salary is: " << salary << endl;

    numOfEmp = numOfEmp + 1;
    system ("PAUSE");
    }
  return 0;
}
