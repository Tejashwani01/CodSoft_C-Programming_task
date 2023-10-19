#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
    float num1, num2;
    char op, ch = 'y';
    cout << "\n \n";
    cout << "\t\t\t  ************************* \n";
    cout << "\t\t\t\t Calculator \n";
    cout << "\t\t\t  ************************* \n";
    while (ch == 'y' || ch == 'Y')
    {
        cout << "\n Enter first number : ";
        cin >> num1;
        cout << "\n Enter second number : ";
        cin >> num2;
        cout << "\n Enter operator (+,-,*,/) : ";
        cin >> op;
        switch (op)
        {
        case '+':
            cout << "result = " << num1 + num2;
            break;
        case '-':
            cout << "result = " << num1 - num2;
            break;
        case '*':
            cout << "result =" << num1 * num2;
            break;
        case '/':
            if (num2 > 0)
            {
                cout << "result = " << num1 / num2;
            }
            else
            {
                cout << "Enter valid number";
            }
            break;
        default:
            cout << "Enter valid operator";
            break;
        }
        cout << "\n Do you want to do more calculatons ('Y' or 'N'): ";
        cin >> ch;
    }
    return 0;
}