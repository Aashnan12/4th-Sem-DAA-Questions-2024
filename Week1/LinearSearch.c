#include<stdio.h>

int LinearSearch(int arr[],int n,int key){
    int pos = 0;
    for(int i=0;i<n;i++){
        if(arr[i] == key){
            pos++;
        }
    }
    return pos;
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
        int pos = LinearSearch(arr,n,key);
        if(pos != n){
            printf("%d - %d\n",key,pos);
        }
        else {
            printf("Not Present : %d\n",n);
        }
    }
}