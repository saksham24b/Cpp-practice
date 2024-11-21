#include <iostream>
using namespace std;

int reverse(int n[], int size) {
    int i = 0, j = size - 1;
    while (i < j) {
        int temp = n[i];
        n[i] = n[j];
        n[j] = temp;
        i++;
        j--;
    }
    return 0;
}

int main(){
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: " << endl;
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    reverse(arr, n);
    cout << "Reversed array: " << endl;
    for(int i=0; i<n; i++){
        cout << arr[i] << endl;
    }
    return 0;
    
}