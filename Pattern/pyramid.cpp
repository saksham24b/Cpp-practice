#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    for(int i=0; i<n; i++){ //rows
        
        for(int j=0; j<n-i-1; j++){ //spaces
            cout << " ";
        }

        for(int j=1; j<=i+1; j++){ //numbers
            cout << j;
        }

        for(int j=i; j>0; j--){ //numbers
            cout << j;
        }
        cout << endl;
    }
    return 0;
}