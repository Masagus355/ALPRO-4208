#include <iostream>

using namespace std;

struct sepeda{
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

int main()
{
   sepeda build;
   build.printmerk();
   build.printtype();
   build.printtahun();
   build.printharga();
    return 0;
}
