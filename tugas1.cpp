#include <iostream>
#include <string>

using namespace std;

int jumlah(int a, int b){
    return a+b;
}
int kurang(int n, int m){
    return n-m;
}
int jumlah_arr(int k[5]){
    int z;
        for(int i=0;i<=4;i++){
            z+=k[i];
        }
    return z;
}
int rata_arr(int k[5]){
    int z,y;
        for (int i=0;i<=4;i++){
            z+=k[i];
            y=z/5;
        }
    return y;
}


int main()

{
    cout<<" ____________________________"<<endl;
    cout<<"|  program latihan function  |"<<endl;
    cout<<"|____________________________|"<<endl;

int bil1,bil2,k[5],z;
string f,g;
 f="Kiagus Riyasqie Resadu";
 g="A11.2022.14355";

    cout << "Nama MHS = "<< f << endl;
    cout << "NIM  MHS = "<< g << endl;

    cout<<"---mencari hasil jumlah dan kurang dari 2 bilangan---"<<endl;

    cout << "masukkan bilangan 1 = ";
    cin >> bil1;
    cout << "masukkan bilangan 2 = ";
    cin >> bil2;
    cout << "hasil jumlah dari " << bil1 << " dan " << bil2 << " adalah = " << jumlah(bil1,bil2) << endl;
    cout << "hasil kurang dari " << bil1 << " dan " << bil2 << " adalah = " << kurang (bil1,bil2) << endl;


    cout<<"---mencari hasil jumlah dan rata-rata---"<<endl;
   cout << " inputkan 5 bilangan " <<endl;
        for (z=0;z<=4;z++){
            cout << " input bilangan ke " << z+1;cout << " => ";cin >> k[z];
    }
    cout <<"jumlah nya adalah "<<  jumlah_arr(k) << endl;
    cout <<"rata-rata nya adalah "<< rata_arr(k) << endl;
return 0;
}


