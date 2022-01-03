#include <iostream>
using namespace std;

int main ()
{
    // variables
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;

    // inputs
    cout << "Please input three integers:" << endl;
    cin >> num1 >> num2 >> num3;

    // outputs
    cout << "Input three integer numbers in ascending order:" << endl;

    // num1 greatest
    if (num1 >= num2 && num1 >= num3)
    {
        if (num2 >= num3)
        {
            cout << num3 << " " << num2 << " " << num1 << endl;
        }
        else
        {
            cout << num2 << " " << num3 << " " << num1 << endl;
        }
    }
    // num2 greatest
    else if (num2 >= num1 && num2 >= num3)
    {
        if (num1 >= num3)
        {
            cout << num3 << " " << num1 << " " << num2 << endl;
        }
        else
        {
            cout << num1 << " " << num3 << " " << num2 << endl;
        }
    }
    // num3 greatest
    else
    {
        if (num2 >= num1)
        {
            cout << num1 << " " << num2 << " " << num3 << endl;
        }
        else
        {
            cout << num2 << " " << num1 << " " << num3 << endl;
        }
    }

    return 0;
}
