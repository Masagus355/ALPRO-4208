#include <iostream>

using namespace std;
// hitung fungsi berikut menggunakan structure dengan member:
// Luas Persegi Panjang = panjang x lebar
// Luas Lingkaran = 22/7 * r * r
// Volume Kerucut = 1/3 * phi * r2 * t
// Volume Bola = 4/3 * phi * r3

typedef struct rumus{
int p,l,r,t,option;
float phi=3.14;
char command;

    void persegipanjang(){
    cout << "mencari luas persegi panjang " << endl;
    cout << "diketahui panjang : " ; cin >> p ;
    cout << "diketahui lebar   : " ; cin >> l ;
    float carihasil=p*l;
    cout << "Maka, hasilnya adalah = " << carihasil << endl;
    }
    void lingkaran(){
    cout << "\n";
    cout << "mencari luas lingkaran " << endl;
    cout << "Jika diketahui phi sama dengan << 22/7, " << endl;
    cout << "dan diketahui rusuk : " ; cin >> r ;
    float carihasil=22*r*r/7;
    cout << "Maka, hasilnya adalah = " << carihasil << endl;
    }
    void kerucut(){
    cout << "\n";
    cout << "mencari volume kerucut " << endl;
    cout << "Jika diketahui phi sama dengan "<< phi <<", " << endl;
    cout << "diketahui rusuk  : " ; cin >> r ;
    cout << "diketahui tinggi : " ; cin >> t ;
    float carihasil=1*phi*r*r*t/3;
    cout << "Maka, hasilnya adalah = " << carihasil << endl;
    }
    void bola(){
    cout << "\n";
    cout << "mencari volume bola " << endl;
    cout << "Jika diketahui phi sama dengan "<< phi <<", " << endl;
    cout << "diketahui rusuk  : " ; cin >> r ;
    float carihasil=4*phi*r*r*r/3;
    cout << "Maka, hasilnya adalah = " << carihasil << endl;
    }

void menu() {
        do {
            cout << "|--------- MENU ---------|" << endl;
            cout << "1. Luas Persegi Panjang" << endl;
            cout << "2. Luas Lingkaran" << endl;
            cout << "3. Volume Kerucut" << endl;
            cout << "4. Volume Bola" << endl;
            cout << "5. End Program" << endl;
            cout << "Pilih opsi (1-5): ";
            cin >> option;

            switch (option) {
                case 1:
                    persegipanjang();
                    break;
                case 2:
                    lingkaran();
                    break;
                case 3:
                    kerucut();
                    break;
                case 4:
                    bola();
                    break;
                case 5:
                    cout << "Program closed" << endl;
                    return;
                default:
                    cout << "Invalid option. Please try again." << endl;
                    break;
            }
            cout << "\nLanjutkan Program? (y/n): ";
            cin >> command;
        } while (command == 'y');

        cout << "Program closed" << endl;
    }
};
int main()
{
    rumus build;
    build.menu();
    return 0;
}
