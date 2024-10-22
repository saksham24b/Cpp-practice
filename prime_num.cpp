#include <iostream>
using namespace std;

void prime_num(int n){
    for(int i=2; i<n; i++){
        if (i%2 == 0){
            continue;
        }
        cout << i << endl;
    }
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Prime numbers from 1 to " << n << " are: " << endl;
    prime_num(n);
    return 0;
}