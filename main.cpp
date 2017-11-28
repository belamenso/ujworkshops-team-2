#include <iostream>
#include <string>
#include <fstream>

using namespace std;

const string PLUS = "+";
const string MINUS = "-";
const string EQ = "=";
const string NOTHING = "";

int main(void) {
    ofstream out;
    out.open("out1.txt");
    string in;
    cin >> in;
    string action = NOTHING;
    long long accumulator = stol(in);
    while (in != "==") {
        if (in == PLUS) {
            action = PLUS;
        } else if (MINUS == in) {
            action = MINUS;
        } else if (in == EQ) {
            out << accumulator << endl;
            action = NOTHING;
        } else {
            if (action == NOTHING) {
                 accumulator = stol(in);
            } else if (action == PLUS) {
                // cout << stol(in);
                accumulator += stol(in);
            } else if (action == MINUS) {
                accumulator -= stol(in);
            }
        }
        cin >> in;
    }
    out << accumulator << endl;
    out.close();
    return 0;
}
