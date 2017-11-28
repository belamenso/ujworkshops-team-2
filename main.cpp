#include <iostream>
#include <string>
#include <fstream>
#include <math.h>

using namespace std;

const string PLUS = "+";
const string MINUS = "-";
const string EQ = "=";
const string TIMES = "*";
const string DIV = "/";
const string EXP = "^";
const string NOTHING = "";

int main(void) {
    ofstream out;
    out.open("out3.txt");
    string in;
    cin >> in;
    string action = NOTHING;
    long long accumulator = stoll(in);
    while (in != "==") {
        if (in == PLUS) {
            action = PLUS;
        } else if (MINUS == in) {
            action = MINUS;
        } else if (in == EQ) {
            out << accumulator << endl;
            action = NOTHING;
        } else if (in == TIMES) {
            action = TIMES;
        } else if (in == EXP) {
            action = EXP;
        } else if (in == DIV) {
            action = DIV;
        } else {
            if (in == "5") in = "0";
            if (action == NOTHING) {
                 accumulator = stoll(in);
            } else if (action == PLUS) {
                // cout << stoll(in);
                accumulator += stoll(in);
            } else if (action == MINUS) {
                accumulator -= stoll(in);
            } else if (action == TIMES) {
                accumulator *= stoll(in);
            } else if (action == DIV) {
                accumulator /= stoll(in);
            } else if (action == EXP) {
                accumulator = pow(accumulator, stoll(in));
            }
        }
        cin >> in;
    }
    out << accumulator << endl;
    out.close();
    return 0;
}
