#include <iostream>


using namespace std;

class FooString {
    char* buf;
public:
    FooString(const char* tbuf) {
        buf = new char[strlen(tbuf) + 1];
        for (int i = 0; i < strlen(buf); i++) {
            buf[i] = tbuf[i];
        }
    }
    ~FooString() {

    }
    FooString() {
        buf = nullptr;
    }
    void show() {
        for (int i = 0; i < strlen(buf); i++) {
            cout << buf[i];
        }
        cout << "\n";
    }
    bool compare(FooString str) {
        bool check = true;
        for (int i = 0; i < strlen(buf); i++) {
            if (buf[i] != str.buf[i]) {
                check = false;
            }
        }
        return check;
    }
};


int main() {
    FooString str1 = "Hello World!";
    FooString str2(str1);
    FooString str3 = "String";
    str1.show();
    if (str1.compare(str2)) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    if (str1.compare(str3)) {
        cout << "YES" << "\n";
    }
    else {
        cout << "NO" << "\n";
    }
    return 0;

}