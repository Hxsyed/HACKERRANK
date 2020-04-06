#include <bits/stdc++.h>
using namespace std;

int main()
{
     // Write Your Code Here
    int n;
    cin >> n;
    switch (n){ // takes in input and checks each case
        case 1:
        cout << "one" << endl;
        break;
        case 2:
        cout << "two" << endl;
        break;
        case 3:
        cout << "three" << endl;
        break;
        case 4:
        cout << "four" << endl;
        break;
        case 5:
        cout << "five" << endl;
        break;
        case 6:
        cout << "six" << endl;
        break;
        case 7:
        cout << "seven" << endl;
        break;
        case 8:
        cout << "eight" << endl;
        break;
        case 9:
        cout << "nine" << endl;
        break;
    }
    if (n>9){ // if the input is bigger than 9
        cout << "Greater than 9" << endl;
    }

    return 0;
}
