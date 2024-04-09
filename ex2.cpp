#include <iostream>
#include <stack>

using namespace std;

int min_cost_good(string s) {
    stack zeroes = stack<int>();
    stack ones = stack<int>();
    int cost = 0;
    for (int i = 0; i < s.size(); i++) {
        int a = s[i] - '0';
        if (a == 0) zeroes.push(a);
        else
            ones.push(1);
    }
    for (char c: s) {
        if (c == '0') {
            if (!ones.empty()) {
                ones.pop();
            } else { // we delete -> +1 score
                zeroes.pop();
                cost++;
            }
        }
        if (c == '1') {
            if (!zeroes.empty()) {
                zeroes.pop();
            } else { // we delete -> +1 cost
                ones.pop();
                cost++;
            }
        }

    }
    return cost;
}

int main() {
    int t;
    cin >> t;
    cin.ignore();
    for (int i = 0; i < t; i++) {
        string s;
        getline(cin, s);
        cout << min_cost_good(s) << endl;
    }
    return 0;
}