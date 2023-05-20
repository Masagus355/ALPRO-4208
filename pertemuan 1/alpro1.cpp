#include <iostream>

using namespace std;

int main()
{
    /*
    int a;
    cout << "INPUT NIM =\t" ;
    cin >> a;
    cout << "NIM adalah\t" << a << endl;
    */

    //Bilangan 50-1 outputkan yg genap

    int i;
        for(i=51;i>=1;i--){
                if (i%2==0 && i%4==0){
                    cout<<i<<endl;
                }
        }




    return 0;
}
