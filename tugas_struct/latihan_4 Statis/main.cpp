#include <iostream>

using namespace std;

 struct mhs
{
    string nim,nama,jurusan,tahun;
};


int main()
{
    mhs mahasiswa[5];

    mahasiswa[0].nim    ="  A11.2020.01234|";
    mahasiswa[0].nama   ="            Andi|";
    mahasiswa[0].jurusan="    Broadcasting|";
    mahasiswa[0].tahun  ="            2023|";

    mahasiswa[1].nim    ="  A11.2020.01234|";
    mahasiswa[1].nama   ="            Budi|";
    mahasiswa[1].jurusan="Sistem Informasi|";
    mahasiswa[1].tahun  ="            2013|";

    mahasiswa[2].nim    ="  A11.2020.01234|";
    mahasiswa[2].nama   ="             Ali|";
    mahasiswa[2].jurusan="             DKV|";
    mahasiswa[2].tahun  ="            2003|";

    mahasiswa[3].nim    ="  A11.2020.01234|";
    mahasiswa[3].nama   ="            Siti|";
    mahasiswa[3].jurusan="       Kesehatan|";
    mahasiswa[3].tahun  ="            1993|";

    cout << " Data Mahasiswa 1 " << endl;
    cout << "| Nama    : " << mahasiswa[0].nama << endl;
    cout << "| Nim     : " << mahasiswa[0].nim << endl;
    cout << "| Jurusan : " << mahasiswa[0].jurusan << endl;
    cout << "| Tahun   : " << mahasiswa[0].tahun << endl;
    cout << " \n " << endl;

    cout << " Data Mahasiswa 2 " << endl;
    cout << "| Nama    : " << mahasiswa[1].nama << endl;
    cout << "| Nim     : " << mahasiswa[1].nim << endl;
    cout << "| Jurusan : " << mahasiswa[1].jurusan << endl;
    cout << "| Tahun   : " << mahasiswa[1].tahun << endl;
    cout << " \n " << endl;

     cout << " Data Mahasiswa 3 " << endl;
    cout << "| Nama    : " << mahasiswa[2].nama << endl;
    cout << "| Nim     : " << mahasiswa[2].nim << endl;
    cout << "| Jurusan : " << mahasiswa[2].jurusan << endl;
    cout << "| Tahun   : " << mahasiswa[2].tahun  << endl;
    cout << " \n " << endl;

     cout << " Data Mahasiswa 4 " << endl;
    cout << "| Nama    : " << mahasiswa[3].nama << endl;
    cout << "| Nim     : " << mahasiswa[3].nim << endl;
    cout << "| Jurusan : " << mahasiswa[3].jurusan << endl;
    cout << "| Tahun   : " << mahasiswa[3].tahun << endl;
    cout << " \n " << endl;
    return 0;
}
