#include <bits/stdc++.h>

using namespace std;


void printArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n" ;
}


void inputArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr[i] = t;
    }
}



//what actually happens it go through main loop 
//for every value of i swap it with min value of array after i.  
//time complexity : n square    
void selectionSort(int arr[], int n){
    int temp =0 ;
    for(int i = 0 ; i < n-1 ; i++){
        int mini = i;
        for (int j = i ; j < n ; j++){
            if(arr[i] > arr[j]){
                mini = j;
            }
        }
        temp = arr[mini];
        arr[mini] = arr[i];
        arr[i] = temp;
    }

}

//what actually happens is take one iter and swap every element to end 
//time complexity n square 

void bubbleSort(int arr[] ,int n){
    int temp = 0;
    for(int i = 0 ; i < n-2 ; i++){
        int swap = 0;
        for (int j = 0; j < n-1; j++)
        {
            if(arr[j] > arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                swap = 1;
        }
    }
    if(swap==0){
        break;
    }

}
}

//take the smallest element and swap till it can be swapped 
//time complexity = n square and best time complexity is n
void insertionSort(int arr[] ,int n){
    for(int i=0;i<=n-1;i++){
        int j= i;
        while (j>0 && arr[j-1] > arr[j])
        {
            int temp = arr[j-1];
            arr[j-1] = arr[j];
            arr[j] = temp;
            j--;
            
        }
        
    }
}


int main(){

    int n = 10;
    int arr[n];
    
    inputArray(arr, n);

    cout << "Original Array: ";
    printArray(arr, n);

    
    cout << "\nInsertion Sort Array: ";
    
    insertionSort(arr , n);
    printArray(arr,n);

    cout << "\nBubble Sort Array: ";
    
    bubbleSort(arr , n);
    printArray(arr,n);

    cout << "\nSelection Sort Array: ";
    
    selectionSort(arr , n);
    printArray(arr,n);




    return 0;

}