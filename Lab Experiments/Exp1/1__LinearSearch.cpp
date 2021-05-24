#include<bits/stdc++.h>
using namespace std;

class Array {
    public:
        int search(int size, int arr[], int item) {
            for (int i=0; i<size; i++) {
                if (arr[i]==item) {
                    int pos = i+1;
                    return (pos);
                }
            }
            return (-1);
        }
};

int main() {
    int item, arr[50], size;
    Array obj;

    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array: ";
    for (int i=0; i<size; i++)
        cin >> arr[i];

    cout << "Enter the element to be searched: ";
    cin >> item;

    int pos = obj.search(size, arr, item);
    (pos == -1)
        ? cout << "Element is not present in the array."
        : cout << "Element "<< item <<" is present at position " << pos;

    return 0;
}