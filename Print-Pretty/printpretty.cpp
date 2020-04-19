#include <iostream>
#include <map>
#include <string>
#include <vector>
#include <iomanip>
#include <math.h>
using namespace std;

//INPUT
// 100
// 959.139 199.252 470.888
// 74.578 802.746 396.295
// 386.884 721.198 628.655
// 722.503 207.868 647.942
// 87.506 792.718 761.498
// 917.727 843.338 908.043
// 952.768 268.783 375.312

// OUTPUT
// 0x3bf
// ________+199.25
// 4.708880000E+02
// 0x4a
// ________+802.75
// 3.962950000E+02
// 0x182
// ________+721.20
// 6.286550000E+02
// 0x2d2
// ________+207.87
// 6.479420000E+02
// 0x57
// ________+792.72
// 7.614980000E+02
// 0x395
// ________+843.34
// 9.080430000E+02
// 0x3b8

void turnhex(double a)
{
    cout << hex << showbase << nouppercase;
    cout << (long long)a << endl;
}

void caseb(double b)
{
    cout << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2);
    cout << b << endl;
}

void casec(double c)
{
    cout << scientific << uppercase << noshowpos << setprecision(9);
    cout << c << endl;
}

int main()
{
    int cases;
    double a, b, c;
    cin >> cases;
    for (int i = 0; i < cases; i++)
    {
        cin >> a >> b >> c;
        turnhex(a);
        caseb(b);
        casec(c);
    }

    return 0;
}