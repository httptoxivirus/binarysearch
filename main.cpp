// binary search
#include<bits/stdc++.h>
#include<array>
using namespace std;
void selectionSort(int arr[],int size) {
    for(int i=0; i<size-1; i++) {
        int minIndex = i;
        for(int j=i+1; j<=size; j++) {
            if(arr[j] < arr[minIndex])
                minIndex = j;
        }
        swap(arr[i],arr[minIndex]);
    }
}

int binsear(int arr[],int key,int size) {
    int s = 0,e = size-1;
    int mid;
    while(s <= e) {
    mid = (s + e)/2;
        if(key < arr[mid])
        e = mid-1;
        else if(key > arr[mid]) 
        s = mid+1;
        else
        return mid;
        s++;
        e--;
    }
 }

 int main() {
     int key,arr[10] = {5,47,50,20,7,64,82,64,26,82};
     cout<<"Enter the key "<<endl;
     cin>>key;
    selectionSort(arr,(end(arr)-begin(arr)));
     cout<<binsear(arr,key,(end(arr)-begin(arr)))<<endl;
     return 0;
 }