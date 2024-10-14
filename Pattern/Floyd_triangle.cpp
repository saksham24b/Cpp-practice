#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;
    int k=1;
    for(int i=0; i<n; i++){ // loop for the number of rows
        
        for(int j=0; j<=i; j++){ // loop for the number of columns
            cout << k << " ";
            k++;
        }
        cout << endl;
        
    }

    return 0;
}