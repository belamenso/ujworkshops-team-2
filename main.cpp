#include <iostream>
#include <string>

using namespace std;

const string PLUS = "+";
const string MINUS = "-";
const string EQ = "=";
const string NOTHING = "";

int main(void) {
    string in;
    cin >> in;
    string action = NOTHING;
    long long accumulator = 5;
    accumulator = stoll(in);
    while (in != "==") {
        if (in == PLUS) {
            action = PLUS;
        } else if (MINUS == in) {
            action = MINUS;
        } else if (in == EQ) {
            cout << accumulator << endl;
        } else {
            // if (action == NOTHING) {
            //     accumulator = stol(in);
            if (action == PLUS) {
                accumulator += stoll(in);
            } else if (action == MINUS) {
                accumulator -= stoll(in);
            }
        }
        cin >> in;
    }
    return 0;
}
