#include<iostream>
#include<vector>
using namespace std;

void SelectionSort(vector<int> &arr,int n){
    int comp = 0;
    int swaps = 0;
    for(int i=0;i<n;i++){
        int pos = i;
        for(int j=i+1;j<n;j++){
            comp++;
            if(arr[pos] > arr[j]){
                pos = j;
            }
        }
        if(pos != i){
            swap(arr[pos],arr[i]);
            swaps++;
        }
    }
    cout<<"Comparisions : "<<comp<<endl;
    cout<<"Swaps : "<<swaps<<endl;
}

int main() {
    // int n;
    // cin>>n;
    // vector<int> arr(n);
    // for(int i=0;i<n;i++){
    //     cin>>arr[i];
    // }
    int n = 7;
    vector<int> arr = {4,3,5,1,2,3,4};
    cout<<"Before Sort"<<endl;
    for(int i:arr){
        cout<<i<<" ";
    }
    cout<<endl;
    SelectionSort(arr,n);
    for(int i:arr){
        cout<<i<<" ";
    }
}