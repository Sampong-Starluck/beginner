#include <iostream> // must include for every code that have .cpp
// #include <stdio.h>// for C programming
// extra library
#include <stdlib.h>
#include <conio.h>
#include <math.h>

using namespace std;

int main()
{
    // this code is for calculate equation

    int a, b, c;
    cout << "*** Enter the value for a b and c *** " << endl;
    cout << "a: ";
    cin >> a;
    cout << "b: ";
    cin >> b;
    cout << "c: ";
    cin >> c;
    double delta, x1, x2;
    // calculate delta
    delta = (b * b) - (4 * a * c);
    std::cout << "delta = " << delta << "\n" << std::endl;
    //check delta and decide for the best operation

    if (delta > 0)
    {
        x1 = (-b + sqrt(delta)) / (2 * a);
        x2 = (-b - sqrt(delta)) / (2 * a);
        std::cout << "This equation has 2 roots" << std::endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (delta == 0)
    {
        std::cout << "This equation have 1 root" << '\n';
        cout << "x = " << -b / (2 * a) << endl;
    }
    else
    {
        std::cout << "This aequation have 2 complex roots" << '\n';
    }
    

}
