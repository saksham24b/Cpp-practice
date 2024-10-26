#include <iostream>
using namespace std;

int decimal(int n){
    int binary = 0, place = 1;
    while(n>0){
        binary += (n%2)*place;
        n /= 2;
        place *= 10;
    }
    return binary;
}

int binary(int n){
    int decimal=0, place=1;
    while(n>0){
        decimal+=(n%10)*place;
        n/=10;
        place*=2;
    }
    return decimal;
}

int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "Choose: \n1. Decimal to Binary\n2. Binary to Decimal\n";
    int choice;
    cin >> choice;
    if (choice == 1){
        cout << "The binary equivalent of " << n << " is " << decimal(n) << endl;
    }
    else if (choice == 2){
        cout << "The decimal equivalent of " << n << " is " << binary(n) << endl;
    }
    else{
        cout << "Invalid choice" << endl;
    }
    return 0;
}