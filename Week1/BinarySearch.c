#include<stdio.h>

int BinarySearch(int arr[],int n,int key){ 
    int start = 0;
    int end = n-1;

    //Binary Search
    while(start <= end){
        int mid = start + (end-start)/2;
        if(arr[mid] == key)return mid;
        else if(arr[mid] > key)end = mid-1;
        else start = mid+1;
    }
    return -101;
}

int main() {
    int t;
    scanf("%d",&t);
    while(t--){
        int n;
        scanf("%d",&n);
        int arr[n];
        for(int i=0;i<n;i++){
            scanf("%d",&arr[i]);
        }
        int key;
        scanf("%d",&key);
        int pos = BinarySearch(arr,n,key);
        if(pos != -101){
            printf("Present : %d\n",pos+1);
        }
        else {
            printf("Not Present : %d\n",n);
        }
    }
}