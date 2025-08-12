#include <iostream>
#include <cmath>

using operator_t = char;

int main()
{
    using std::cin;
    using std::cout;

    operator_t op;
    double x, y, result;

    cout << "*** Calculator Program ***" << "\n";

    cout << "What is the operator: ";
    cin >> op;

    cout << "What is the first number: ";
    cin >> x;

    cout << "What is the second number: ";
    cin >> y;

    switch (op)
    {
    case '+':
        result = x + y;
        cout << x << " + " << y << " = " << result;
        break;

    case '-':
        result = abs(x - y);
        cout << "|" << x << " + " << y << "|" << " = " << result;
        break;

    case '*':
        result = x * y;
        cout << x << " * " << y << " = " << result;
        break;

    case '/':
        result = x / y;
        cout << x << " / " << y << " = " << result;
        break;
    default:
        cout << "Please enter one of the following operators: + or - or * or /" << "\n";
        main();
    }

    return 0;
}