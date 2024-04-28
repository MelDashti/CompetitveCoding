#include <iostream>

using namespace std;

int main() {
    int n;
    // the number of test cases
    cin >> n;
    for (int i = 0; i < n; i++) {
        // num of keshi's friends
        int invited = 0;
        int nf;
        cin >> nf;
        int a[nf][2];
        for (int j = 0; j < nf; j++) {
            // a(i) richer than and b(i) poor than
            cin >> a[j][0] >> a[j][1];
        }
        for (int j = 0; j < nf; ++j) {
            cout << a[j][1] << j << a[j][0] << nf - 1 - j << endl;
            // a[j][1] = b (poor than) a[j][0] =a (richer than)
            if (a[j][1] >= j && a[j][0] >= nf - 1 - j) {
                invited += 1;
            }
        }
        cout << invited << endl;
    }


}