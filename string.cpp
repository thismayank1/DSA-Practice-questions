#include <iostream>
#include <string>
#include <cctype>
using namespace std;
bool IsNumeric(const string& str) {
    for (char ch : str) {
        if (!isdigit(ch)) {
            return false;
        }
    }
    return true;
}

int main() {
    string str1 = "12345";
    string str2 = "12.34";
    string str3 = "hello";

    cout << str1 << " is numeric: " << (IsNumeric(str1)?"yes":"no")<< endl;
    cout << str2 << " is numeric: " << (IsNumeric(str2)?"yes":"no")<< endl;
    cout << str3 << " is numeric: " << (IsNumeric(str3)?"yes":"no")<< endl;

    return 0;
}