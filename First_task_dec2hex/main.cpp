#include "iostream"
#include "string"

using namespace std;

const char hexchar[17] = {"0123456789ABCDEF"};

string dec2hex(int dec) {
    string hex;
    int rem;
    bool negative;

    if (dec < 0) {
        negative = true;
        dec = -dec;
    }
    else if (dec == 0) {
        return "0";
    }
    while (dec) {
        hex = hexchar[dec%16] + hex;
        dec = dec/16;
    }
    if (negative) {
        hex = "-" + hex;
    }
    return hex;
}

void printHex(int dec, string hex) {
    cout << "DEC " << dec << " = HEX " << hex << endl << endl;;
}

int main() {

    int dec;
    string hex;

    while(true) {
        cout << "Please, enter the decimal number:\n";
        cin >> dec;

        if (cin.eof()) break;
        if (cin.fail()) {
            cin.clear();
            cin.ignore();
            cout << "Error. No interger was input.\n";
        }
        else {
            hex = dec2hex(dec);
            printHex(dec, hex);
        }
    }

    return 0;
}s