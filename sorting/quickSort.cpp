/*

STEPS:

    1. Pick a pivot and place it in its correct place in the sorted array.    2. Smaller on the left and larger on right .
    2. Shift smaller elements(i.e. Smaller than the pivot) on the left of the pivot and larger ones to the right.

*/

#include <bits/stdc++.h>
using namespace std;

//arr = [5,4,3,2,1,4,73,2,0]


//it will partition the array 
//for first step we will take the first element as pivot
int partition(vector<int> &arr ,int low , int high){
    int pivot = arr[low];
    int i = low;
    int j = high;

    //if i and j cross each other then we will swap the pivot with the element at j
    while (i<j)
    {   
        //if the element is smaller than the pivot then we will increment i
        while((arr[i] <= pivot) && (i <= high - 1))
        {
            i++;
        }
        //if the element is greater than the pivot then we will decrement j
        while ((arr[j] > pivot) && (j >= low + 1))
        {
            j--;
        }
        //after two while loops we will swap the elements at i and j
        if(i<j) swap(arr[i],arr[j]);
    }  
    //after the while loop we will swap the pivot with the element at j which is the correct position of the pivot
    swap(arr[low],arr[j]);
    return j;
    
}

void qs(vector<int> &arr,int low, int high){
    //if low is greater than high then we will return other condition like single element array is already sorted
    if(low < high){
        int partitionIndex = partition(arr , low , high);
        //left side of the pivot
        qs(arr , low ,partitionIndex-1);

        //right side of the pivot
        qs(arr , partitionIndex+1 , high);
    }
}

vector<int> quickSort(vector<int> &arr){
    qs(arr,0,arr.size()-1);
    return arr;
}

int main(){
    vector<int> arr ;
    int n = 10;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        arr.push_back(t);
    }

    cout << "Array before sorting : ";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";

    cout << "Array after sorting : ";
    arr = quickSort(arr);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}