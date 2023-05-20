#include <iostream>


//-- UTS-No.2

using namespace std;

// Selectionsort
    void selectionSort(int arr[], int n);
// Insertionsort
    void insertionSort(int arr[], int n);


int main() {
    int arr[] = {5, 24, 17, 125, 9, 48, 6672, 82, 31};
    int n = sizeof(arr)/sizeof(arr[0]);

    cout << "Original array(unsorted array):" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


    selectionSort(arr, n);

    cout << "Sorted array by selectionsort method:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    insertionSort(arr, n);

    cout << "Sorted array by insertionsort method:" << endl;
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;





    return 0;
}

//-------------Selectionsort----------------//
void selectionSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        int minIndex = i;
        for (int j = i+1; j < n; j++) {
            if (arr[j] > arr[minIndex]) {
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}
//-------------Insertionsort----------------//
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; i++) {
        int key = arr[i];
        int j = i - 1;
        while (j >= 0 && arr[j] < key) {
            arr[j+1] = arr[j];
            j--;
        }
        arr[j+1] = key;
    }
}

