
#include<iostream>
using namespace std;
// Function to implement Bubble Sort
void bubbleSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        // Last i elements are already sorted
        for(int j=0; j<n-i-1; j++){
            // Swap if current element is greater than the next element
            if(arr[j]<arr[j+1]){
                int temp=arr[j];
                arr[j]=arr[j+1];
                arr[j+1]=temp;
            }
        }
    }
}
// Function to print the  array

void printArray(int arr[], int n){
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main(){
    int arr[]={24904,27773,35622,37532,44172,45804,45923,46202,46292,46334,46411,46451,46465,46488,46980,47231,47419,47527,47729,56177};

    int n= sizeof(arr)/sizeof(arr[0]);
    
    cout<<"Original Array: ";
    printArray(arr, n);

    bubbleSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr, n);

    return 0;
}

// Time Complexities:

// 1. Best Case:      O(n)
// 2. Average Case:   O(n^2)
// 3. Worst Case:     O(n^2)

