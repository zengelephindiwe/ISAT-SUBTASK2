#include <iostream>
#include <string>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

// Function 1: Decimal to Binary
string decimalToBinary(int decimal) {
    if (decimal == 0) return "0";
    string binary = "";
    while (decimal > 0) { 
        binary = to_string(decimal % 2) + binary;
        decimal /= 2;
    }
        return binary;  
}


// Function 2: Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}
// Function 2: Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}
// Function 2: Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Function 2: Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Function 2: Binary to Decimal
int binaryToDecimal(string binary) {
    int decimal = 0;
    int power = 0;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1') {
            decimal += pow(2, power);
        }
        power++;
    }
    return decimal;
}

// Demo function
void demo() {
    srand(time(0)); // Seed random generator
    int randomNum = rand() % 100; // between 0 and 99
    cout << "Random number: " << randomNum << endl;
    cout << "Binary: " << decimalToBinary(randomNum) << endl;
}

int main() {
    int choice;
    do {
        cout << "\n--- Number Conversion Menu ---\n";
        cout << "1. Decimal to Binary\n";
        cout << "2. Binary to Decimal\n";
        cout << "3. Decimal to Hexadecimal\n";
        cout << "4. Hexadecimal to Decimal\n";
        cout << "5. Demo (Random Number to Binary)\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            int decimal;
            cout << "Enter decimal number: ";
            cin >> decimal;
            cout << "Binary: " << decimalToBinary(decimal) << endl;
        }

 else if (choice == 2) {
            string binary;
            cout << "Enter binary number: ";
            cin >> binary;
            cout << "Decimal: " << binaryToDecimal(binary) << endl;
        }
        else if (choice == 3) {
            int decimal;
            cout << "Enter decimal number: ";
            cin >> decimal;
            cout << "Hexadecimal: " << decimalToHex(decimal) << endl;
        }
        else if (choice == 4) {
            string hex;
            cout << "Enter hexadecimal number: ";
            cin >> hex;
            cout << "Decimal: " << hexToDecimal(hex) << endl;
        }
        else if (choice == 5) {
            demo();
        }
        else if (choice == 6) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice! Try again." << endl;
        }
    } while (choice != 6);

    return 0;
}

      
