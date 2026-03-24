#include <iostream>
#include <cmath> // For log10
using namespace std;

int reverseDigits(int n) {
    // Base case: if it's a single digit, return it
    if (n < 10) {
        return n;
    }

    // Determine the place value of the first digit (e.g., for 456, it's 100)
    int digits = (int)log10(n); 
    
    // Logic: (Last Digit * 10^digits) + recursive call for remaining digits
    return (n % 10 * pow(10, digits)) + reverseDigits(n / 10);
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    cout << reverseDigits(n); // Output: 2654
    return 0;
}
