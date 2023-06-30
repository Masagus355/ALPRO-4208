#include <iostream>

using namespace std;

typedef struct sepeda {
    string merk="polygon",type="Sepeda Gunung";
    int tahun=2013,harga=2000000;

    void printmerk(){
        cout << "sepeda ber-merk : " << merk << endl;
    }
    void printtype(){
        cout << "ber-tipe        : " << type << endl;
    }
    void printtahun(){
        cout << "Tahun           : " << tahun << endl;
    }
    void printharga(){
        cout << "Seharga         : " << harga << endl;
    }
};
sepeda sepeda1;
int main()
{
   sepeda *psepeda = &sepeda1;
   psepeda->printmerk();
   psepeda->printtype();
   psepeda->printtahun();
   psepeda->printharga();
    return 0;
}
