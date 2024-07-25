#include <bits/stdc++.h>
using namespace std;

void printArray(int arr[] , int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
}

void reverseArrayByForLoop(int arr[] , int n){
    int tempArray[n] ;
    for(int i=0; i<n; i++){
        
        tempArray[n-i-1] = arr[i];
    }
    printArray(tempArray, n);
}


void reverseArrayByWhileLoop(int arr[] , int n){
    p1
    while (p1<p2)
    {
        /* code */
    }
    
}

int main(){

    int n = 10;
    int arr[n];
    //input array
    for(int i=0 ; i<n ; i++){
        int t;
        //taking input
        cin >> t;
        arr[i] = t;
    }

    cout << "Original Array: ";
    printArray(arr , n);

    cout << "Reversed Array By for loop : ";
    reverseArrayByForLoop(arr, n);

    return 0;
}