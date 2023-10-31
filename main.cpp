#include"Header.h"


int findMax(int arr[], int size) {
    int max = arr[0];
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int findMax(int arr[][3], int numRows, int numCols) {
    int max = arr[0][0];
    for (int i = 0; i < numRows; i++) {
        for (int j = 0; j < numCols; j++) {
            if (arr[i][j] > max) {
                max = arr[i][j];
            }
        }
    }
    return max;
}

int findMax(int arr[][3][2], int dim1, int dim2, int dim3) {
    int max = arr[0][0][0];
    for (int i = 0; i < dim1; i++) {
        for (int j = 0; j < dim2; j++) {
            for (int k = 0; k < dim3; k++) {
                if (arr[i][j][k] > max) {
                    max = arr[i][j][k];
                }
            }
        }
    }
    return max;
}

int findMax(int a, int b) {
    return (a > b) ? a : b;
}

int findMax(int a, int b, int c) {
    int max = (a > b) ? a : b;
    return (max > c) ? max : c;
}

int main() {
    srand(time(0)); 

    int arr1[5];
    int arr2[3][3];
    int arr3[2][3][2];

    for (int i = 0; i < 5; i++) {
        arr1[i] = rand() % 100; 
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr2[i][j] = rand() % 100;
        }
    }

    for (int i = 0; i < 2; i++) {
        for (int j = 0; j < 3; j++) {
            for (int k = 0; k < 2; k++) {
                arr3[i][j][k] = rand() % 100;
            }
        }
    }

    int result1 = findMax(arr1, 5);
    int result2 = findMax(arr2, 3, 3);
    int result3 = findMax(arr3, 2, 3, 2);
    int result4 = findMax(12, 8);
    int result5 = findMax(5, 10, 7);

    cout << "Max in array1: " << result1 << endl;
    cout << "Max in array2: " << result2 << endl;
    cout << "Max in array3: " << result3 << endl;
    cout << "Max of two integers: " << result4 << endl;
    cout << "Max of three integers: " << result5 << endl;

    return 0;
}
