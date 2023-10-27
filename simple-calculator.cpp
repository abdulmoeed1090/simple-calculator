#include <iostream>
using namespace std;

// check operator function
bool checkopr(char opr)
{

    if (opr == '+' || opr == '-' || opr == '*' || opr == '/')
    {
        return true;
    }
    else
    {
        return false;
    }
}

/* Addition function */
double add(double tre1, double tre2)
{
    return (tre1 + tre2);
}

/* subtract function */
double subtract(double num1, double num2)
{
    return (num1 - num2);
}

/* multiply function */
double multiply(double num1, double num2)
{
    return (num1 * num2);
}

/* divide function */
double divide(double num1, double num2)
{
    return (num1 / num2);
}

/* Main function */
int main()
{
    cout << "WELCOME TO CALCULATOR";

    double num1, num2;
    char opr;

    cout << "\nEnter First Number: ";
    cin >> num1;

    cout << "\nEnter Operator: ";
    cin >> opr;

    // checking operator if it is true or false
    bool result = checkopr(opr);
    if (result == false)
    {
        cout << "Invalid operator !";
        return 0;
    }

    cout << "\nEnter Second Number: ";
    cin >> num2;

    if (opr == '+') // if operator is plus
    {
        double answer = add(num1, num2);
        cout << "\nAnswer = " << answer << endl;
    }
    else if (opr == '-') // if operator is minus
    {
        double answer = subtract(num1, num2);
        cout << "\nAnswer = " << answer << endl;
    }
    else if (opr == '*') // if operator is multiply
    {
        double answer = multiply(num1, num2);
        cout << "\nAnswer = " << answer << endl;
    }
    else if (opr == '/') // if operator is divide
    {
        if (num2 == 0)
        {
            cout << "Invalid input !"; // if num2 is 0
        }
        else
        {
            double answer = divide(num1, num2);
            cout << "\nAnswer = " << answer << endl;
        }
    }

    char exit;
    cout << "Enter any character to exit";
    cin >> exit;
    return 0;
}
