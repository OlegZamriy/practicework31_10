#include"Header.h"


template <typename T>
void reverseArray(T arr[], int arrSize) {
    int left = 0;
    int right = arrSize - 1;

    while (left < right) {
        T temp = arr[left];
        arr[left] = arr[right];
        arr[right] = temp;

        left++;
        right--;
    }
}

template <typename T>
void fillArrayWithRandomValues(T arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        arr[i] = static_cast<T>(rand() % 100);  
    }
}

int main() {
    srand(time(0));

    const int arrSize = 6;
    int intArray[arrSize];
    double doubleArray[arrSize];

    fillArrayWithRandomValues(intArray, arrSize);
    fillArrayWithRandomValues(doubleArray, arrSize);

    cout << "Initial array int: ";
    for (int i = 0; i < arrSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    cout << "Initial array double: ";
    for (int i = 0; i < arrSize; i++) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    reverseArray(intArray, arrSize);
    reverseArray(doubleArray, arrSize);

    cout << "A reordered int array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << intArray[i] << " ";
    }
    cout << endl;

    cout << "A reordered double array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << doubleArray[i] << " ";
    }
    cout << endl;

    return 0;
}
