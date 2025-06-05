//1. Function that Returns a Pointer to the Largest Element
#include <iostream>
using namespace std;

int* findMax(int arr[], int n) {
    int* maxPtr = arr;
    for (int i = 1; i < n; i++) {
        if (*(arr + i) > *maxPtr)
            maxPtr = arr + i;
    }
    return maxPtr;
}

int main() {
    int arr[] = {10, 20, 90, 30, 50};
    int* maxElement = findMax(arr, 5);
    cout << "Largest Element = " << *maxElement << endl;
    return 0;
}
