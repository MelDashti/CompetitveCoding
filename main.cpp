#include <bits/stdc++.h>

using namespace std;

int main() {
    int a, b;
    string x;
    cin >> a >> b >> x;
    cout << "value of a: " << a << endl;
    cout << "value of b: " << b << endl;
    cout << "value of x: " << x << endl;

    // this is another way to read and print the values
    int a1, a2;
    scanf("%d %d", &a1, &a2);
    printf("value of a1: %d\n", a1);
    printf("value of a2: %d\n", a2);

    // getline() function can be used to read a line of text
    string s;
    getline(cin, s);
    cout << "value of s: " << s << endl;

    // If the amount of data is unknown the following code can be used
    while(cin>>x){
        // code here
    }
    // In few competitive programming problems, the input is given in the file format
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
    // the program reads from input.txt and writes to output.txt
    // Integers
    long long x2 = 1234567890123456789LL; // long long integer
    // long long is used to store large integers. The suffix LL is used to specify that the number is long long
    // when using long long, we can't use int during the calculation. int a = 2; x2 = a * a; // error

    // Modular arithmetic
     typedef long long ll;
     ll a3 = 123456789;
     ll b3 = 1000000007;
     ll c3 = 1000000009;
     ll x3 = (a3 + b3) % c3;
     cout<<x3<<endl;


    return 0;
}
