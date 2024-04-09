//#include <bits/stdc++.h>// this is a header file that includes every standard library
// this is not a good practice because it increases the compilation time.
#include <iostream>

// this is a greedy algorithm based problem. We need to find the minimum number of moves to make two cups have the same mass of water with the third cup with a mass limit of c grams.
int calc_minimum_num_of_moves(int a, int b, int c);

using namespace std;

int main() {
    // First we read the number of tests from input
    int n;
    cin >> n;
    // Then we read the n tests
    // Each test consists of three integers on a single line
    for (int i = 0; i < n; i++) {
        // this is the mass of the water in each cup. The mass is in grams
        int a, b, c;
        cin >> a >> b >> c;
        cout << calc_minimum_num_of_moves(a, b, c) << endl;
    }


}

int calc_minimum_num_of_moves(int a, int b, int c) {
    int numOfMoves = 0;
    while (a != b) {
        if (a > b) {
            if (a - c > b + c) {
                a -= c;
                b += c;
                numOfMoves++;
            } else {
                numOfMoves++;
                a = b;
            }
        } else {
            if (b - c > a + c) {
                b -= c;
                a += c;
                numOfMoves++;
            } else {
                numOfMoves++;
                a = b;
            }
        }
    }
    return numOfMoves;

}
