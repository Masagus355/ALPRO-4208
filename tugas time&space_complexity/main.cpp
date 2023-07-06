#include <iostream>
#include <ctime>

using namespace std;

struct Sort {
    // Bubble Sort
    static void bubbleSort(int arr[], int size) {
        if (size == 1)
            return;

        for (int i = 0; i < size - 1; ++i) {
            if (arr[i] > arr[i + 1])
                swap(arr[i], arr[i + 1]);
        }
        bubbleSort(arr, size - 1);
    }

    // Selection Sort
    static void selectionSort(int arr[], int size) {
        if (size <= 1)
            return;

        int maxIndex = 0;
        for (int i = 1; i < size; ++i) {
            if (arr[i] > arr[maxIndex])
                maxIndex = i;
        }
        swap(arr[maxIndex], arr[size - 1]);

        selectionSort(arr, size - 1);
    }

    // Insertion Sort
    static void insertionSort(int arr[], int size) {
        if (size <= 1)
            return;

        insertionSort(arr, size - 1);

        int key = arr[size - 1];
        int j = size - 2;

        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j--;
        }

        arr[j + 1] = key;
    }
};

struct Search {
    // Linear Search
    static int linearSearch(int arr[], int size, int target) {
        for (int i = 0; i < size; ++i) {
            if (arr[i] == target)
                return i;
        }
        return -1;
    }

    // Binary Search
    static int binarySearch(int arr[], int low, int high, int target) {
        if (high >= low) {
            int mid = low + (high - low) / 2;

            if (arr[mid] == target)
                return mid;

            if (arr[mid] > target)
                return binarySearch(arr, low, mid - 1, target);

                return binarySearch(arr, mid + 1, high, target);
        }
        return -1;
    }
};

struct Changeval {
    int val;

    void changevalPBV(int val) {
        cout << "Passing By Value" << endl;
        cout << "Old value: " << val << endl;
        int nval;
        cout << "Input new value: ";
        cin >> nval;
        val = nval;
        int *cnptr = &nval;

        cout << "Value of non-pointer and pointer: " << val << " and " << *cnptr << endl;
        cout << "Address of non-pointer and pointer: " << &cnptr << " and " << cnptr << endl;
        cout << "\n";
    }

    void changevalPBR(int &val) {
        cout << "Passing By Reference (Value will be changed globally)" << endl;
        cout << "Old value: " << val << endl;
        int nval;
        cout << "Input new value: ";
        cin >> nval;
        val = nval;
        int *cnptr = &nval;
        cout << "Value of non-pointer and pointer: " << val << " and " << *cnptr << endl;
        cout << "Address of non-pointer and pointer: " << &cnptr << " and " << cnptr << endl;
        cout << "\n";
    }
};

// Helper Functions
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void calculateTimeAndSpaceComplexity(clock_t start, clock_t end, int size, const char* algorithm) {
    double timeTaken = double(end - start) / CLOCKS_PER_SEC;
    double spaceComplexity = sizeof(int) * size;

    cout << "Time complexity of " << algorithm << ": " << timeTaken << " seconds" << endl;
    cout << "Space complexity of " << algorithm << ": " << spaceComplexity << " bytes" << endl;
}

int main() {
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;

    int* arr = new int[size];
    cout << "Inputkan Data Array (" << size << "):\n";
    for (int i = 0; i < size; ++i) {
        cout << "Masukkan Nilai ke - " << i + 1 << ": ";
        cin >> arr[i];
    }

    // Bubble Sort
    clock_t start = clock();
    Sort::bubbleSort(arr, size);
    clock_t end = clock();
    cout << "Bubble Sorted Array: ";
    printArray(arr, size);
    calculateTimeAndSpaceComplexity(start, end, size, "Bubble Sort");

    // Selection Sort
    start = clock();
    Sort::selectionSort(arr, size);
    end = clock();
    cout << "Selection Sorted Array: ";
    printArray(arr, size);
    calculateTimeAndSpaceComplexity(start, end, size, "Selection Sort");

    // Insertion Sort
    start = clock();
    Sort::insertionSort(arr, size);
    end = clock();
    cout << "Insertion Sorted Array: ";
    printArray(arr, size);
    calculateTimeAndSpaceComplexity(start, end, size, "Insertion Sort");

    // Linear Search
    int target;
    cout << "Enter the element to search: ";
    cin >> target;
    start = clock();
    int linearIndex = Search::linearSearch(arr, size, target);
    end = clock();
    if (linearIndex != -1) {
        cout << "Element " << target << " found at index " << linearIndex << " using Linear Search" << endl;
        Changeval change;
        change.changevalPBR(target);
    }
    else {
        cout << "Element not found using Linear Search" << endl;
    }

    // Binary Search
    start = clock();
    int binaryIndex = Search::binarySearch(arr, 0, size - 1, target);
    end = clock();
    if (binaryIndex != -1) {
        cout << "Element " << target << " found at index " << binaryIndex << " using Binary Search" << endl;
        Changeval change;
        change.changevalPBV(target);
    }
    else {
        cout << "Element not found using Binary Search" << endl;
    }

    delete[] arr;

    return 0;
}
