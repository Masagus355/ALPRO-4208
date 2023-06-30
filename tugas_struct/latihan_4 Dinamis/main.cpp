#include <iostream>

using namespace std;

 struct mhs
{
    string nim,nama,jurusan,tahun;
};


int main()
{
    int jml_Mhs;
    cout << " Input Jumlah Mahasiswa : "; cin >> jml_Mhs;

    mhs input_mhs[jml_Mhs];
    cout << " Input Data MHS " << endl;
    for (int i=0;i<jml_Mhs;i++){
        cout << "Data Mahasiswa  " << i+1<< endl;
        cout << "Nama             : "; cin>>input_mhs[i].nama;
        cout << "NIM              : "; cin>>input_mhs[i].nim;
        cout << "Jurusan (Spasi_) : "; cin>>input_mhs[i].jurusan;
        cout << "Tahun Lulus      : "; cin>>input_mhs[i].tahun;
        cout << "\n"<<endl;
    }
    cout << "====================================" << endl;
    cout << "Result : " << endl;
    for(int i=0;i<jml_Mhs;i++){
        cout << "----Data Mahasiswa " << i+1<<"----"<< endl;
        cout << "|Nama           = " << input_mhs[i].nama << endl;
        cout << "|NIM            = " << input_mhs[i].nim  << endl;
        cout << "|Jurusan        = " << input_mhs[i].jurusan <<endl;
        cout << "|Tahun Lulus    = " << input_mhs[i].tahun << endl;
        cout << "\n"<<endl;
    }
    return 0;
}
