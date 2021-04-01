#include <iostream>
#include<conio.h>
#include <math.h>

using namespace std;

class bubbleSort {
    public:
        void swap(int *num1, int *num2) {
            *num1 = *num1 + *num2;
            *num2 = *num1 - *num2;
            *num1 = *num1 - *num2;
        }

        void sort(int size, int arr[]) {
            for(int i=0; i < size; i++)
                for(int j=0; j < size-i; j++)
                    if (arr[j] > arr[j+1])
                        swap(&arr[j], &arr[j+1]);
        }

};

int main() {
    int arr[50], size;
    bubbleSort obj;
 
    cout << "Enter the size of array: ";
    cin >> size;

    cout << "Enter the elements of array: ";
    for (int i=0; i<size; i++)
        cin >> arr[i];

    obj.sort(size, arr);

    for (int i=0; i<size; i++)
        cout<< arr[i+1] <<" ";

    return 0;
}
