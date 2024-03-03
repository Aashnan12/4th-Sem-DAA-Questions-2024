#include<iostream>
using namespace std;

class heap{
    public:
    int arr[100];
    int size;
    heap() {
        arr[0] = -1;
        size = 0;
    }

    void print() {
        cout<<endl;
        for(int i=1;i<=size;i++){
            cout<<arr[i]<<" ";
        }
    }

    void insert(int key){
        size = size+1;
        int index = size;
        arr[index] = key;
        
        while(index>1){
            int parent = index/2;
            if(arr[index] > arr[parent]){
                swap(arr[index],arr[parent]);
                index = parent;
            }
            else{
                return;
            }
        }
    }

    void deleteheap(){
        if(size == 0){
            cout<<"Heap Empty"<<endl;
            return;
        }
        arr[1] = arr[size];
        size--;
        int index = 1;
        while(index <= size){
            int leftchild = 2*index;
            int rightchild = 2*index+1;
            if(leftchild <= size && rightchild <= size && arr[leftchild] > arr[index] && arr[leftchild] > arr[rightchild]){
                swap(arr[index],arr[leftchild]);
                index = leftchild;
            }
            else if(rightchild <= size && arr[rightchild] > arr[index]){
                swap(arr[index],arr[rightchild]);
                index = rightchild;
            }
            else {
                return ;
            }
        }

    }

};

int main() {
    heap h;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        int key;
        cin>>key;
        h.insert(key);
    }
    h.print();
    h.deleteheap();
    h.print();
    h.deleteheap();
    h.print();
    h.deleteheap();
    h.print();
    h.deleteheap();
    h.print();
    h.deleteheap();
    h.print();
    h.deleteheap();
}