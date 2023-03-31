#include <stdio.h>
#include <iostream>
#include <string>
using namespace std;
bool isNumberString(const string& s) {
    int len = s.length();
    for (int i = 0; i < len; i++) {
        if (s[i] < '0' || s[i] > '9')
            return false;
    }
    return true;
}
int main() {
    string ccnumber;
    cout << "Welcome to Credit_Card_Validator, brought to you by CodeMaster7000 Studios." << endl;
    while (true) {
        cout << "Enter a credit number to validate: ";
        cin >> ccnumber;
        if (ccnumber == "exit")
            break;
        else if (!isNumberString(ccnumber)) {
            cout << "Invalid input.";
            continue;
        }
        int len = ccnumber.length();
        int doubleEvenSum = 0;
        for (int i = len - 2; i >= 0; i = i - 2) {
            int dbl = ((ccnumber[i] - 48) * 2);
            if (dbl > 9) {
                dbl = (dbl / 10) + (dbl % 10);
            }
            doubleEvenSum += dbl;
        }
        for (int i = len - 1; i >= 0; i = i - 2) {
            doubleEvenSum += (ccnumber[i] - 48);
        }
        cout << (doubleEvenSum % 10 == 0 ? "Valid." : "Invalid.") << endl;
        continue;        
    }
    return 0;
}
