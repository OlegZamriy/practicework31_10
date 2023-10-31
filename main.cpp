#include"Header.h"

 

void fillArrayWithRandomValues(int arr[], int arrSize) {
    for (int i = 0; i < arrSize; i++) {
        arr[i] = rand() % 100;  
    }
}

void findMinAndMax(const int arr[], int arrSize, int& minValue, int& minIndex, int& maxValue, int& maxIndex) {
    if (arrSize == 0) {
        cerr << "The array is empty." << endl;
        return;
    }

    minValue = arr[0];
    minIndex = 0;
    maxValue = arr[0];
    maxIndex = 0;

    for (int i = 1; i < arrSize; i++) {
        if (arr[i] < minValue) {
            minValue = arr[i];
            minIndex = i;
        }
        if (arr[i] > maxValue) {
            maxValue = arr[i];
            maxIndex = i;
        }
    }
}

int main() {
    srand(time(0));

    const int arrSize = 6;
    int array[arrSize];

    fillArrayWithRandomValues(array, arrSize);

    int minValue, minIndex, maxValue, maxIndex;

    findMinAndMax(array, arrSize, minValue, minIndex, maxValue, maxIndex);

    cout << "Array: ";
    for (int i = 0; i < arrSize; i++) {
        cout << array[i] << " ";
    }
    cout << std::endl;

    cout << "Minimum: " << minValue << " (index " << minIndex << ")" << endl;
    cout << "Maximum: " << maxValue << " (index " << maxIndex << ")" << endl;

    return 0;
}
