#include<iostream>
using namespace std;

int BinarySearch(int arr[],int start,int end,int key){ 

    while(start <= end){
        int mid = (start + end)>>1;
        if(arr[mid] == key)return mid;
        else if(arr[mid] > key)end = mid-1;
        else start = mid+1;
    }
    return -1;
}

int JumpSearch(int arr[],int n,int key) {
    if(arr[0] == key){
        return 0;
    }
    int i=1;
    while(i<n && arr[i] <= key){
        i = i*2;
    }
    return BinarySearch(arr,i/2,min(i,n-1),key);
}

int main() {
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cin>>key;
        int pos = JumpSearch(arr,n,key);
        if(pos != -1){
            cout<<"Present : "<<pos+1<<endl;
        }
        else {
            cout<<"Not Present"<<endl;
        }
    }
}