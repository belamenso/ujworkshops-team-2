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
const string WTF = "&";
const string NOTHING = "";

int main(void) {
    // ofstream out;
    // out.open("out3.txt");
    string in;
    cin >> in;
    string action = NOTHING;
    long long accumulator = stoll(in);
    while (in != "==") {
        if (in == PLUS || in == MINUS || in == TIMES || in == EXP || in == DIV || in == WTF) {
            action = in;
        } else if (in == EQ) {
            cout << accumulator << endl;
            action = NOTHING;
        } else {
            if (in == "5") in = "0";
            long long num = stoll(in);
            if (action == NOTHING) {
                 accumulator = num;
            } else if (action == PLUS) {
                // cout << num;
                accumulator += num;
            } else if (action == MINUS) {
                accumulator -= num;
            } else if (action == TIMES) {
                accumulator *= num;
            } else if (action == DIV) {
                accumulator /= num;
            } else if (action == EXP) {
                accumulator = pow(accumulator, num);
            } else if (action == WTF) {
                if (accumulator % 4 == 0)
                    accumulator *= num;
                else
                    accumulator -= num;
            }
        }
        cin >> in;
    }
    cout << accumulator << endl;
    // out.close();
    return 0;
}
