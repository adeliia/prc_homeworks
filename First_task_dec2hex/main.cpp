#include "iostream"
#include "string"

using namespace std;

const char hexchar[17] = {"0123456789ABCDEF"};

string dec2hex(int dec) {
    string hex;
    int rem;
    bool negative = false;

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
    string hex, input;

    while(true) {
        cout << "Please, enter the decimal number (to quit press CTL+d):\n";
        cin >> input;
        if (cin.eof()) break; //quit if CTL+d was pressed
        try {
            dec = stoi( input ); //convert the user's input to int if poossible
            hex = dec2hex(dec);
            printHex(dec, hex);
        }
        catch( ... ) {
            cout << "Invalid value, try again\n\n";
        }
    }

    return 0;
}