#include "iostream"
#include "string"

using namespace std;

const char hexchar[17] = {"0123456789ABCDEF"};

string dec2hez(int dec) {
    string hex;
    int rem;
    while (dec) {
        hex += hexchar[dec%16];
    }
    return hex;
}

void printHex(string what) {
    cout << what << endl;
}

int main() {

    int dec;
    string hex;

    cout << "PLease, enter the decimal number:\n";
    cin >> dec;

    hex = dec2hez(dec);
    printHex(hex);


    return 0;
}