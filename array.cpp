#include <iostream>
using namespace std;

int smallest(int n[], int size){
    int min = INT_MAX;
    for(int i=0; i<size; i++){
        if(n[i] < min){
            min = n[i];
        }
    }
    return min;
}

int largest(int n[], int size){
    int max = INT_MIN;
    for(int i=0; i<size; i++){
        if(n[i] > max){
            max = n[i];
        }
    }
    return max;
}

int main(){
    int n;
    cout<<"Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }
    cout << "Smallese element: " << smallest(arr, n) << endl;
    cout << "Largest element: " << largest(arr, n) << endl;
    return 0;
}