#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;

    for(int i=2; i<n; i++){
        if(n%i == 0){
            cout << "Not a prime number";
            break; // break the loop if the number is not prime
        }
        else{
            cout << "Prime number";
           break; 
        }
    }
    return 0;
}