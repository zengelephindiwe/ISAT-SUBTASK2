#include <iostream>
#include <string>
using namespace std;

// Function to convert decimal to binary
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0"; // handle 0 case
    string binary = "";
    while (decimal > 0) {
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
    return binary;
}

// Function to convert binary to decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    for (char bit : binary) {
        if (bit == '0' || bit == '1') {
            decimal = decimal * 2 + (bit - '0');
        } else {
            // invalid character
            return -1;
        }
    }
    return decimal;
}

int main() {
    int choice;
    do {
        cout << "\n=== Conversion Menu ===\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int decimal;
            cout << "Enter a decimal number: ";
            cin >> decimal;
            cout << "Binary representation: " << decimalToBinary(decimal) << endl;
        } 
        else if (choice == 2) {
            string binary;
            cout << "Enter a binary number: ";
            cin >> binary;
            int result = binaryToDecimal(binary);
            if (result == -1) {
                cout << "Invalid binary number! Please enter only 0s and 1s.\n";
            } else {
                cout << "Decimal representation: " << result << endl;
            }
        } 
        else if (choice != 3) {
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 3);

    cout << "Program exited.\n";
    return 0;
}

      
