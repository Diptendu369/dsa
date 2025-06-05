//Print Address and Value of a Variable

#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int* ptr = &a;
    cout << "Address: " << ptr << ", Value: " << *ptr << endl;
    return 0;
}
