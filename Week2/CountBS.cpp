#include<iostream>
using namespace std;

int FirstOccurrence(int arr[], int start, int end, int key) { 
    int Count = -1;
    while (start <= end) {
        int mid = (start + end) >> 1;
        if (arr[mid] == key) {
            Count = mid;
            end = mid - 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return Count;
}

int LastOccurrence(int arr[], int start, int end, int key) { 
    int Count = -1;
    while (start <= end) {
        int mid = (start + end) >> 1;
        if (arr[mid] == key) {
            Count = mid;
            start = mid + 1;
        } else if (arr[mid] > key) {
            end = mid - 1;
        } else {
            start = mid + 1;
        }
    }
    return Count;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        int key;
        cin >> key;
        int first = FirstOccurrence(arr, 0, n - 1, key);
        int last = LastOccurrence(arr, 0, n - 1, key);
        if (first != -1 && last != -1) {
            cout << key << " : " << last - first + 1;
        } else {
            cout << "Not present" << endl;
        }
    }
    return 0;
}