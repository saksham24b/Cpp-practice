#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout << " ";
        }
        cout << "*";
        if (i!=0){
            for(int j=0; j<2*i-1; j++){
            cout << " ";
        }
            cout << "*";
        }
        
        cout << endl;
    }

    for(int i=n-2; i>=0; i--){
        for(int j=0; j<n-i-1; j++){ //spaces
            cout << " ";
        }
        cout << "*";
        if (i!=0){
            for(int j=0; j<2*i-1; j++){ //Spaces between 2 stars
            cout << " ";
        }
            cout << "*";
        }
        
        cout << endl;
    }


    return 0;
}