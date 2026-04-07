#include<iostream>
using namespace std;
int find_largest(int arr[],int n){
    int largest=arr[0];
    for(int i=1;i<n;i++){
        if(arr[i]>largest){
            largest=arr[i];
        }

    }
    return largest;
}
int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int largest = find_largest(arr, n);
    cout << "The largest element is: " << largest << endl;

    return 0;
}