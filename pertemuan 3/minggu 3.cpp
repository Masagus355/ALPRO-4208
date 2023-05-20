#include <iostream>

using namespace std;

int jumlah(int a, int b){
return a+b;
}
int kurang(int n, int m){
return n-m;
}

void cetakgenap(int z);
void cetakganjil(int k);

int main()

{
    int bil1, bil2;
    cout << "masukkan bilangan 1 =";
    cin >> bil1;
    cout << "masukkan bilangan 2 =";
    cin >> bil2;
    cout << "hasil jumlah adalah =" << jumlah(bil1,bil2) << endl;
    cout << "hasil kurang adalah =" << kurang (bil1,bil2) << endl;


    cetakgenap(0);
    cetakganjil(1);
    return 0;
}

void cetakgenap(int z){
    cout << "masukkan bilangan =" ;
    cin >> z;
    if (z%2==0){
        cout << z << " adalah bilangan genap" << endl;
    }
    else {
        cout << z << " bukan bilangan genap" << endl; 
    }

}
void cetakganjil(int k){
cout << "masukkan bilangan =" << endl;
cin >> k;
if (k%2==1){
    cout<< k <<"merupakan bilangan ganjil" << endl;
}
else
{
    cout << k << "merupakan bilangan genap" << endl;
}
}
