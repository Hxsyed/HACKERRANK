#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str)
{
    vector<int> hsyed;
    stringstream ss(str);
    int n;
    char skip;
    while (ss)
    {
        if (ss.peek() != ',')
        {
            if (ss >> n)
            {
                hsyed.push_back(n);
            }
        }
        else
        {
            ss >> skip;
        }
    }
    return hsyed;
}

int main()
{
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for (int i = 0; i < integers.size(); i++)
    {
        cout << integers[i] << "\n";
    }

    return 0;
}