#include <iostream>
using namespace std;

int sum(int n){
    int ans =0;
    while(n>0){
        ans += n%10;
        n = n/10;
    }
    return ans;
}
int main(){
    int n;
    cout << "Enter the number: ";
    cin >> n;
    cout << "The sum of digits of " << n << " is " << sum(n) << endl;
    return 0;
}