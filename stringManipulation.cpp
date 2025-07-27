#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string reverseString(string s) {
    reverse(s.begin(), s.end());
    return s;
}

int countVowels(string s) {
    int count = 0;
    for (int i = 0; i < s.size(); i++) {
        char ch = tolower(s[i]);
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            count++;
        }
    }
    return count;
}

bool isPalindrome(string s) {
    int st = 0, end = s.size() - 1;
    while (st < end) {
        if (tolower(s[st]) != tolower(s[end])) {
            return false;
        }
        st++;
        end--;
    }
    return true;
}

int main() {
    string str;
    cout<<"Enter your string :";
    getline(cin, str);

    string reversed = reverseString(str);
    cout << "Reversed string: " << reversed << endl;

    int vowelCount = countVowels(str);
    cout << "Vowel count: " << vowelCount << endl;

    if (isPalindrome(str))
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

    return 0;
}
