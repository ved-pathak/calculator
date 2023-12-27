// the calculator.
#include <iostream>
using namespace std;
int main()
{
    float num1, num2, result = 0;
    float x = num1 * 3.14 / 180;
    float trigo = x - ((x * x * x) / 6) + ((x * x * x * x * x) / 120);
    string op;
    cout << "enter first number trigo functions and second be zero" << endl;
    cout << "enter first number:";
    cin >> num1;
    cout << "enter second number:";
    cin >> num2;
    cout << "select operation:";
    cin >> op;
    if (op == "+")
    {
        /* code result*/
        result = num1 + num2;
    }
    else if (op == "-")
    {
        result = num1 - num2;
        /* code */
    }
    else if (op == "*")
    {
        result = num1 * num2;
        /* code */
    }
    else if (op == "/")
    {
        result = num1 / num2;
        /* code */
    }

    else if (op == "sin")
    {
        result = trigo;
    }
    cout << result;
    return 0;
}