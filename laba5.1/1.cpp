//laba 5.1
//variant 26
#include <iostream>
#include <cmath>

using namespace std;

double g(const double x, const double y); // Function prototype

int main()
{
    double s, t;

    cout << "s = ";
    cin >> s;

    cout << "t = ";
    cin >> t;

    double c = (g(s, t - 1) + pow(g(s, t), 2) * (t * t + s)) / (pow(g(s, t), 2) * (s * s + t * t));
    cout << "c = " << c << endl;

    return 0;
}

double g(const double x, const double y) // Function definition
{
    return (x / (y * y)) * sin(y / (x * x)); // Corrected the formula
}