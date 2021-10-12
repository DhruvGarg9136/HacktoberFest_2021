#include<iostream>
using namespace std;

void printUnion(int arr1[], int arr2[], int l1, int l2) {

    int f, i, j, k = 0;
    int arr3[100];
    for (i = 0; i < l1; i++) {
        arr3[k] = arr1[i];
        k++;
    }

    for (i = 0; i < l2; i++) {
        f = 0;
        for (j = 0; j < l1; j++) {
            if (arr2[i] == arr1[j]) {
                f = 1;
            }
        }
        if (f == 0) {
            arr3[k] = arr2[i];
            k++;
        }
    }
    cout << "Union of two array is:";
    for (i = 0; i < k; i++) {
        cout << arr3[i] << " ";
    }
}

int main() {

    int arr1[100];
    int arr2[100];
    int arr3[100];
    int i, j, l1, l2;

    cout << "Enter size of 1st array:";
    cin>>l1;

    cout << "Enter 1st array elements:";
    for (i = 0; i < l1; i++) {
        cin >> arr1[i];
    }
    cout << "Enter size of 2nd array:";
    cin>>l2;

    cout << "Enter 2nd array elements:";
    for (i = 0; i < l2; i++) {
        cin >> arr2[i];
    }

    printUnion(arr1, arr2, l1, l2);
    return 0;
}
