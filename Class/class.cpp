#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
    int age;
    string firstname;
    string lastname;
    int standard;

public:
    void setage(int a)
    {
        age = a;
    }
    int getage()
    {
        return age;
    }
    void setfirstname(string b)
    {
        firstname = b;
    }
    string getfirstname()
    {
        return firstname;
    }
    void setlastname(string c)
    {
        lastname = c;
    }
    string getlastname()
    {
        return lastname;
    }
    void setstandard(int c)
    {
        standard = c;
    }
    int getstandard()
    {
        return standard;
    }
};

int main()
{
    Student ob;
    int a, b;
    string c, d;
    cin >> a;
    cin >> c;
    cin >> d;
    cin >> b;
    ob.setage(a);
    cout << ob.getage() << endl;
    ob.setlastname(d);
    ob.setfirstname(c);
    cout << ob.getlastname() << ", " << ob.getfirstname() << endl;
    ob.setstandard(b);
    cout << ob.getstandard() << endl;
    cout << endl;
    cout << ob.getage() << "," << ob.getfirstname() << "," << ob.getlastname() << "," << ob.getstandard();
    return 0;
}