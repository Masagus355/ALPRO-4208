#include <iostream>
#include <string>
using namespace std;

bool isEven(int a);

bool isOdd(int a);

bool isFactor(int a, int b);
//
int sumEven(int x[], int y);

int sumOdd(int x[], int y);
//
int maxN(int x, int z);

int minN(int x, int z);
//
int maxArray(int x[], int y);

int minArray(int x[], int y);

bool isFound(int a, int x[], int y);

void swapN(int &x, int &z);
//

int main() {

     cout<<" ____________________________"<<endl;
    cout<<"|  program latihan function  |"<<endl;
    cout<<"|____________________________|"<<endl;

    int x[] = {3, 4, 5, 6, 2, 7, 8, 12, 20};
    int y = sizeof(x) / sizeof(x[0]);
    string f,g;
    f="Kiagus Riyasqie Resadu";
    g="A11.2022.14355";

     cout << "Nama MHS = "<< f << endl;
    cout << "NIM  MHS = "<< g << endl;

    cout << "___________________________________________" << endl;
    cout << "|                  LEGEND                  |"<< endl;
    cout << "|__________________________________________|"<< endl;
    cout << "|1 = benar                                 |" << endl;
    cout << "|0 = salah                                 |" << endl;
    cout << "|array x[] = {3, 4, 5, 6, 2, 7, 8, 12, 20,}|"<< endl;
    cout << "|__________________________________________|" << endl;




    cout << "apakah angka 5 genap  ? " << isEven(5)  << endl;
    cout << "apakah angka 5 ganjil ? " << isOdd(5)   <<endl;
    cout << "apakah 55 faktor dari 5 ? " << isFactor(55, 5)   << endl;
    cout << "jumlah dari nomor genap di array adalah  : " << sumEven(x, y) << endl;
    cout << "jumlah dari nomor ganjil di array adalah : " << sumOdd(x, y) << endl;
    cout << "angka maximum dari 1000 dan 1001 adalah : " << maxN(1000, 1001) << endl;
    cout << "angka minimum dari 1000 dan 1001 adalah : " << minN(1000, 1001) << endl;
    cout << "angka maximum di array adalah : " << maxArray(x, y) << endl;
    cout << "angka minimum di array adalah : " << minArray(x, y) << endl;
    cout << "apakah angka 12 ada di array ? " << isFound(12, x, y) << endl;
    int k,z;
    k = 4;
    z = 7;
    cout << "angka " << k << " dan " << z << " jika ditukar adalah " ;
    swapN(k, z);
    cout << k << " dan " << z << endl;

    return 0;
}
bool isEven(int a) {
    return a % 2 == 0;
}

bool isOdd(int a) {
    return a % 2 == 1;
}

bool isFactor(int a, int b) {
    return a % b == 0;
}
//
int sumEven(int x[], int y) {
    int sum = 0;
    for (int i = 0; i < y; i++) {
        if (isEven(x[i])) {
            sum += x[i];
        }
    }
    return sum;
}
int sumOdd(int x[], int y) {
    int sum = 0;
    for (int i = 0; i < y; i++) {
        if (isOdd(x[i])) {
            sum += x[i];
        }
    }
    return sum;
}
//
int maxN(int x, int z) {
        int result;
    if(x>z){
        int result = x;
    }
        else
            {
           int result = z;
            }
    }
int minN(int x, int z) {
        int result;
    if(x<z){
        int result = x;}
        else
            {
           int result = z;
            }
    }
//
int maxArray(int x[], int y) {
    int max_val = x[0];
    for (int i = 1; i < y; i++) {
        max_val = maxN(max_val, x[i]);
    }
    return max_val;
}
int minArray(int x[], int y) {
    int min_val = x[0];
    for (int i = 1; i < y; i++) {
        min_val = minN(min_val, x[i]);
    }
    return min_val;
}
bool isFound(int a, int x[], int y) {
    for (int i = 0; i < y; i++) {
        if (x[i] == a) {
            return true;
        }
    }
    return false;
}

void swapN(int &x, int &z) {
        int temp = x;
            x = z;
            z = temp;
}
