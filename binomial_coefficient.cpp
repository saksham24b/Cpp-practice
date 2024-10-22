#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) {
        return 1;
    }
    return n*factorial(n-1);
}

int main(){
    int n;
    cout << "n: ";
    cin >> n;
    int r;
    cout << "r: ";
    cin >> r;
    int result = factorial(n)/(factorial(r)*factorial(n-r));
    cout << "The binomial coefficient of " << n << " and " << r << " is " << result << endl;
    return 0;
}