#include<iostream>
#include<vector>
using namespace std;

class heap{
public:
    int size;

    heap() {
        size = 0;
    }

    void print(vector<int> &nums) {
        cout << endl;
        for(int i = 0; i < size; i++){
            cout << nums[i] << " ";
        }
        cout << endl;
    }

    void Build_Max_Heap(vector<int> &nums, int n, int i) {
        int largest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && nums[largest] < nums[left]) {
            largest = left;
        }
        if(right < n && nums[largest] < nums[right]){
            largest = right;
        }
        if(largest != i){
            swap(nums[largest],nums[i]);
            Build_Max_Heap(nums, n, largest);
        }
    }
    
    void Build_Min_Heap(vector<int> &nums, int n, int i) {
        int smallest = i;
        int left = 2*i + 1;
        int right = 2*i + 2;

        if(left < n && nums[smallest] > nums[left]) {
            smallest = left;
        }
        if(right < n && nums[smallest] > nums[right]){
            smallest = right;
        }
        if(smallest != i){
            swap(nums[smallest],nums[i]);
            Build_Min_Heap(nums, n, smallest);
        }
    }
    
    void heapifyMax(vector<int> &nums){
        for(int i = size / 2 - 1; i >= 0; i--){
            Build_Max_Heap(nums, size, i);
        }
    }

    void heapifyMin(vector<int> &nums){
        for(int i = size / 2 - 1; i >= 0; i--){
            Build_Min_Heap(nums, size, i);
        }
    }
};

int main() {
    heap h;
    int n = 7;
    vector<int> nums{3,1,5,6,7,4,2};
    h.size = n;

    cout << "Original array: ";
    h.print(nums);

    // Convert the array into a max heap
    h.heapifyMax(nums);
    cout << "Max heap: ";
    h.print(nums);

    // Convert the array into a min heap
    h.heapifyMin(nums);
    cout << "Min heap: ";
    h.print(nums);

    return 0;
}
