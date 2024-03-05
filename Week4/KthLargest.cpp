#include <iostream>
using namespace std;

void BuildHeap(int arr[], int n, int i)
{
    // Zero Based Indexing
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;
    if (left < n && arr[largest] < arr[left])
    {
        largest = left;
    }
    if (right < n && arr[largest] < arr[right])
    {
        largest = right;
    }
    if (largest != i)
    {
        swap(arr[largest], arr[i]);
        BuildHeap(arr, n, largest);
    }
}

void heapify(int arr[], int n)
{
    for (int i = n / 2 - 1; i >= 0; i--)
    {
        BuildHeap(arr, n, i);
    }
}

void print(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
void DeleteHeapRoot(int arr[], int &size)
{
    arr[0] = arr[size - 1];
    size--;
    BuildHeap(arr, size, 0);
}

int main()
{
    int arr[] = {43, 64, 13,78,864,346,786,456,21,19,8,434,76,270,601};
    int n = 15;
    int k;
    cin >> k;
    print(arr, n);
    heapify(arr, n);
    print(arr, n);

    while (k != 1)
    {
        DeleteHeapRoot(arr, n);
        k--;
    }
    cout << "kth largest Element : " << arr[0] << endl;
    print(arr, n);
}