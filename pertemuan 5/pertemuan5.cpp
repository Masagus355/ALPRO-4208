#include <iostream>

using namespace std;

void swapN(int &a,int &b);


int main()
{
    //latihan function swapN//
     int a,b;
    cout << "input number 1 = " << endl;cin >> a;
    cout << "input number 2 = " << endl;cin >> b;
    cout << "before swap (" << a << " , " << b << ")" << endl;
    swapN(a,b);
    cout << "after  swap (" << a << " , " << b << ")" << endl;
    return 0;
}
void swapN(int &a, int &b){
int c=a;
 a=b;
b=c;
}
