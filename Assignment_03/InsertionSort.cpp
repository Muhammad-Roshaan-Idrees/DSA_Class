#include<iostream>
using namespace std;
// program for insertion sort

void insertionSort(int arr[], int n)
{
    for(int i=0; i<n; i++){
        int key=arr[i];
        int j=i-1;
        int no_of_iterations=0;

        while(j>=0 && arr[j]<key){
        arr[j+1]=arr[j];
        j=j-1;
        }
        arr[j+1]=key;
    }
}

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

    insertionSort(arr, n);

    cout<<"Sorted Array: ";
    printArray(arr, n);

    return 0;

}

// Time Complexities:

// 1. Best Case:   O(n)
// 2. Average Case:   O(n^2)
// 3. Worst Case:   O(n^2)

