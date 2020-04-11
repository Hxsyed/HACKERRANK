#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int main()
{
    string a, b, e;
    cin >> a;
    cin >> b;
    e = a + b;
    int c = a.size();
    int d = b.size();
    cout << c << " " << d << endl;
    cout << e << endl;
    char c1 = a[0];
    a[0] = b[0];
    b[0] = c1;
    cout << a << " " << b << endl;
    return 0;
}
