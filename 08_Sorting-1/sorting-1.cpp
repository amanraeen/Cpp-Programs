#include<bits/stdc++.h>
using namespace std;

//selection Sort
void selection_sort(int arr[], int n) {
    for(int i=0; i<=n-2; i++) {
        int mini=i;
        for(int j=i; j<=n-1; j++) {
            if(arr[j]<arr[mini]) {
                mini=j;
            }
        }
        int temp=arr[mini];
        arr[mini]=arr[i];
        arr[i]=temp;
    }
}

//Bubble Sort
// void Bubble_sort(int arr[], int n) {
//     for(int i=n-1; i>=0; i--) {
//         for(int j=0; j<-i; j++) {
//             if(arr[j]>arr[j+1]) {
//                 int temp= arr[j+1];
//                 arr[j+1]=arr[j];
//                 arr[j]=temp;            }
//         }
//     }
// }

// optimised bubble sort
void Bubble_sort(int arr[], int n) {
    for(int i=n-1; i>=0; i--) {
        int didSwap=0;
        for(int j=0; j<=i-1; j++) {
            if(arr[j]>arr[j+1]) {
                int temp= arr[j+1];
                arr[j+1]=arr[j];
                arr[j]=temp;
                didSwap=1;
            }
        }
        if(didSwap==0) {
            break;
        }
    }
}

//insertion sort
void insertion_sort(int arr[], int n) {
    for(int i=0; i<=0; i++) {
        int j=i;
        while(j>0 && arr[j-1] > arr[j]) {
            int temp = arr[j-1];
            arr[j-1]= arr[j];
            arr[j]=temp;
            j--;
        }
    }
}

int main() {
    int n;
    cin>> n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    selection_sort(arr,n);
    cout<<"Selection Sort\n";
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";


    Bubble_sort(arr,n);
    cout<<"\nBubble Sort\n";
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";


    insertion_sort(arr,n);
    cout<<"\nBubble Sort\n";
    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";


    
    return 0;  
}