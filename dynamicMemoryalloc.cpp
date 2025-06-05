//3. Dynamic Memory Allocation for Array Using Pointers
#include <iostream>
using namespace std;

bool isVowel(char ch) {
    ch = tolower(ch);
    return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
}

int main() {
    char str[] = "Pointer Example";
    int count = 0;
    char* ptr = str;

    while (*ptr) {
        if (isVowel(*ptr))
            count++;
        ptr++;
    }

    cout << "Vowel Count: " << count << endl;
    return 0;
}
