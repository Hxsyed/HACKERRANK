#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

/*
1 X Y : Add the marks Y to the student whose name is X.

2 X : Erase the marks of the students whose name is X.

3 X : Print the marks of the students whose name is X. (If X didn't get any marks print 0.)

Insert:

m.insert(make_pair("hello",9)); //Here the pair is inserted into the map where the key is "hello" and the value associated with it is 9.

Erasing an element:

m.erase(val); //Erases the pair from the map where the key_type is val.

Finding an element:

map<string,int>::iterator itr=m.find(val); //Gives the iterator to the element val if it is found otherwise returns m.end() .
Ex: map<string,int>::iterator itr=m.find("Maps"); //If Maps is not present as the key value then itr==m.end().
Accessing the value stored in the key:

To get the value stored of the key "MAPS" we can do m["MAPS"] or we can get the iterator using the find function and then by itr->second we can access the value.

*/

int main()
{
    map<string, int> m;
    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int a;
        cin >> a;
        string name;
        if (a == 1)
        {
            int grade = 0;
            cin >> name;
            cin >> grade;
            m[name] += grade;
        }
        else if (a == 2)
        {
            cin >> name;
            m.erase(name);
        }
        else
        {
            cin >> name;
            map<string, int>::iterator itr = m.find(name);
            if (itr != m.end())
                cout << m[name] << endl;
            else
                cout << 0 << endl;
        }
    }

    return 0;
}