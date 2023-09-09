#include <iostream>
using namespace std;

int main() {
    int num, temp, rem, result = 0;
    cout << "Enter a three-digit integer: ";
    cin >> num;
    temp = num;

    while (temp != 0) {
        // remainder contains the last digit
        rem  = temp % 10;
        
        result += rem * rem * rem;
        
        // removing last digit from the orignal number
        temp /= 10;
    }

    if (result == num)
        cout << num << " is an Armstrong number.";
    else
        cout << num << " is not an Armstrong number.";

    return 0;
}
