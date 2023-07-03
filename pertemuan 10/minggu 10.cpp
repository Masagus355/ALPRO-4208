#include <iostream>

using namespace std;
int minvalrec(int a[],int n){
    if(n==1)
        return a[0];
    return min(a[n-1],minvalrec(a,n-1));
}

int maxvalrec(int a[],int n){
    if (n==1)
        return a[0];
    return max(a[n-1],maxvalrec(a,n-1));
}
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}
int main()
{
    int a[100], n;
    cout<<"Masukkan besar array: ";
    cin>>n;
    for(int i = 0; i <n; i++){
        cout<<"input value "<<i+1 <<": ";
        cin>>a[i];
    }

    cout<<"Printed Array : "<<endl;
    for(int i = 0; i <n; i++){
        cout<<a[i]<<" ";
    }
    cout << "\n" << endl;

    cout<<"the minimum value of the array is : "<<minvalrec(a,n)<<endl;
    cout<<"the maximum value of the array is : "<<maxvalrec(a,n)<<endl;
    bubbleSort(a, n);

    cout << "Sorted array by bubblesort method:" << endl;
    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }
    cout << endl;
    return 0;
}
/*materi uas
-   sorting recursive
-   pointer & memory
-   tipe data baru/membuat tipe data sendiri
-   perhitungan efisiensi algoritma
