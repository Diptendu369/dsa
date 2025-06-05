//5. Pointer to Pointer (Double Pointer)
#include <iostream>
using namespace std;

int main() {
    int a = 100;
    int* ptr = &a;
    int** dptr = &ptr;
    cout << "Value: " << **dptr << endl;
    return 0;
}
