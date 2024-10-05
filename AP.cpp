#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int a;
    cout << "Enter the starting of the series: ";
    cin >> a;

    int d;
    cout << "Enter the difference of the series: ";
    cin >> d;

    int sum =0;
    for(int i=0; i<n; i++){
        sum += a;
        a += d;
    }
    cout << "\nThe "<< n << "th term of the series is: " << a-d << endl;
    cout << "The sum of the series is: " << sum << endl;
    return 0;
}