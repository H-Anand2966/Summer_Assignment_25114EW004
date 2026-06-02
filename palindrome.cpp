#include <iostream>
using namespace std;

int main() {
    int num, original, reverse = 0, digit;
    
    cout << "Enter a number: ";
    cin >> num;
    
    original = num;
    
    while (num > 0) {
        digit = num % 10;
        reverse = (reverse * 10) + digit;
        num = num / 10;
    }
    
    if (original == reverse) {
        cout << "It is a palindrome number." << endl;
    } else {
        cout << "It is not a palindrome number." << endl;
    }
    
    return 0;
}