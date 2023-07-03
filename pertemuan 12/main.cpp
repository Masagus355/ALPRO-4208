#include <iostream>

using namespace std;
//LATIHAN POINTER PT.2
int main()
{
    int x=90;
    int*p1=&x;
    int **p2=&p1;

    cout<<x<<endl;
    cout<<&x<<endl;
    cout<<p1<<endl;
    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<*(*p2)<<endl;



    return 0;
}
