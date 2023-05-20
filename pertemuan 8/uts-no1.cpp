#include <iostream>


//-- UTS-No.1
using namespace std;

int getMax(int bilangan[], int banyakBilangan);
void checkminNArray(int bilangan[], int banyakBilangan);
int minN(int bilangan, int z);
void checkodd(int a);


int main()
{
    int bilangan[100], banyakBilangan;
    cout<<"Masukkan besar array: ";
    cin>>banyakBilangan;
    for(int i = 0; i <banyakBilangan; i++){
        cout<<"Masukkan data/angka ke-"<<i+1 <<": ";
        cin>>bilangan[i];
    }

    cout<<"Hasil array:"<<endl;
    for(int i = 0; i <banyakBilangan; i++){
        cout<<bilangan[i]<<" ";
    }
    cout <<"   "<<endl;

   checkminNArray( bilangan,  banyakBilangan);
    return 0;
}
int minN(int bilangan, int z) {
        int result;
    if(bilangan<z){
        int result = bilangan;}
        else
            {
           int result = z;
            }
    }
void checkminNArray(int bilangan[], int banyakBilangan) {
    int min_val=1000;
    int findIndex=0;
    for (int i = 1; i < banyakBilangan; i++) {
             if(bilangan[i]%2==0){
                    min_val = minN(min_val, bilangan[i]);
                    findIndex=i;
        }
    }
    checkodd(min_val);cout << min_val;
    cout<<" index ke : "<< findIndex <<endl;

}
 void checkodd(int a){
        if(a%2==1){
       cout << "nilai ganjil terkecil : " ;
    } else {
       cout << "nilai genap terkecil : " ;
    }
 }

