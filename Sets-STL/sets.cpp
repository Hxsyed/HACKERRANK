#include <iostream>
#include <set>
#include <vector>
using namespace std;

int main()
{
    set<int> s;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a, b;
        cin >> a >> b;
        switch (a)
        {
        case 1:
            s.insert(b);
            break;
        case 2:
            s.erase(b);
            break;
        case 3:
            set<int>::iterator itr = s.find(b);
            if (itr != s.end())
            {
                cout << "Yes" << endl;
            }
            else
            {
                cout << "No" << endl;
            }
        }
    }

    return 0;
}