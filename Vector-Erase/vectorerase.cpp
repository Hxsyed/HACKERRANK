#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size, x, element;
    cin >> size;
    vector<int> hack;
    for (int i = 0; i < size; i++)
    {
        cin >> x;
        hack.push_back(x);
    }
    cin >> element;
    element = element - 1;
    hack.erase(hack.begin() + element);
    int a, b;
    cin >> a >> b;
    a = a - 1;
    b = b - 1;
    hack.erase(hack.begin() + a, hack.begin() + b);
    int vecsize = hack.size();
    cout << vecsize << endl;
    for (int j = 0; j < hack.size(); j++)
    {
        cout << hack[j] << " ";
    }
    return 0;
}