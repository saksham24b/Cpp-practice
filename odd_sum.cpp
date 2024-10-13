#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the last value n: ";
    cin >> n;

    int a;
    cout << "Enter the starting value: ";
    cin >> a;

    int sum = 0;
    for(int i=a; i<=n; i++){
        if (i%2 != 0){
            sum += i;
        }
    }
    cout << "The sum of odd numbers from " << a << " to " << n << " is: " << sum << endl;
    return 0;
}