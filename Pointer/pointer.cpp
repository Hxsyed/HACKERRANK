#include <iostream>
#include <cmath>
using namespace std;

void update(int *a, int *b)
{
    int *temp, *temp1;
    int sum, sub1;
    temp = a;
    temp1 = b;
    sum = *temp + *temp1; // derefrence operator to obtian value
    sub1 = *temp - *temp1;
    int sub = abs(sub1);
    cout << sum << endl;
    cout << sub;
}

int main()
{
    int a, b;
    int sum, sub;
    int *pa = &a, *pb = &b; // setting adress of var to pointers

    scanf("%d %d", &a, &b); 
    update(pa, pb);
    return 0;
}