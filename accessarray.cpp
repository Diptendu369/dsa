// 2. Access Array Elements Using Pointers
#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int* ptr = arr;
    for (int i = 0; i < 5; i++) {
        cout << *(ptr + i) << " ";
    }
    return 0;
}
