#include <bits/stdc++.h>
using namespace std;

bool matchFind(string str1, string str2) {
    int str1Len = str1.size();
    int str2Len = str2.size();

    for (int i = 0; i <str1Len; i++) {
        bool match = true;
        for (int j = 0; j < str2Len; j++) {
            if (str1[i + j] != str2[j]) {
                match = false;
                break;
            }
        }
        if (match) {
            return true;
        }
    }
    return false;
}

int main() {
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    if (matchFind(str1, str2)) {
        cout << "true" << "\n";
    } else {
        cout << "false" << "\n";
    }

    return 0;
}
