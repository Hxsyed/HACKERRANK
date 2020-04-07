#include <iostream>
using namespace std;

int max(int a,int b,int c,int d){
    int max1;
    if (a>b && a>c && a>d) max1=a;
    if (b>a && b>c && b>d) max1=b;
    if (c>a && c>b && c>d) max1=c;
    if (d>a && d>b && d>c) max1=d;
    return max1;
}


int main(){
    int a, b, c, d, e;
    cin >> a >> b >> c >> d;

    e = max(a,b,c,d);
    cout << e;
    return 0;
}