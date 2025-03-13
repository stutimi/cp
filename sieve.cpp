#include <bits/stdc++.h>
using namespace std;

vector<bool> sieve(int n) {
    vector<bool> primes(n + 1, true);
    primes[0] = primes[1] = false;
    
    for (int i = 2; i * i <= n; i++) {
        if (primes[i]) {
            for (int j = i * i; j <= n; j += i) {
                primes[j] = false;
            }
        }
    }
    return primes;
}

int main() {
    int n;
    cin >> n;
    vector<bool> primes = sieve(n);

    for (int i = 2; i <= n; i++) {  
        if (primes[i]) {
            cout << i << " ";
            //cout<< "num is prime"<<endl;
        }
       // else cout<<"num is not a prime num"<<endl;
    }

    return 0;
}
