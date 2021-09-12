/*
Partitioning Procedure:
1. i<1 = low   -->i means one step ahead for pivot
2. 1<j = high  -->j means bigger than pivot 
3. pivot < low
4. i++ untill element > pivot is found
5. j-- untill element <= pivot
6. Swap arr[i] & array[j] and repeat 4 and 5 step untill j<=i
7. Swap pivot & array[j]

Quick sort explained:

array:     4, 8, 9, 6, 1, 3, 5, 2, 7, 10
array element: 10

1st pass:
position:  p  i                 j
array:     4, 8, 9, 6, 1, 3, 5, 2, 7, 10

Pivot = 4
i = 8 is greater than pivot
j = 10 is not less than pivot so decress j position
so, j = 2 is less than pivot

Then swap arr[i] & array[j] and repeat 4 and 5 step untill j<=i
position:  p     i        j
array:     4, 2, 9, 6, 1, 3, 5, 8, 7, 10
Pivot = 4
i = 9 is greater than pivot
j = 8 is not less than pivot so decress j position
so, j = 3 is less than pivot

Then swap arr[i] & array[j] and repeat 4 and 5 step untill j<=i
position:  p        i  j
array:     4, 2, 3, 6, 1, 9, 5, 8, 7, 10
Pivot = 4
i = 6 is greater than pivot
j = 9 is not less than pivot so decress j position
so, j = 1 is less than pivot

Then swap arr[i] & array[j] and repeat 4 and 5 step untill j<=i
position:  p       i<=j
array:     4, 2, 3, 1 , 6, 9, 5, 8, 7, 10
Pivot = 4
i = 6
j = 1
i = j <= i

Swap pivot & array[j]

1st pass array:     1, 2, 3, 4 , 6, 9, 5, 8, 7, 10
2nd pass array:     1, 2, 3, 4 , 6, 9, 5, 8, 7, 10
3rd pass array:     1, 2, 3, 4 , 6, 9, 5, 8, 7, 10
4th pass array:     1, 2, 3, 4 , 6, 9, 5, 8, 7, 10

5th pass:
position:               p  i  j
array:     1, 2, 3, 4 , 6, 9, 5, 8, 7, 10

Pivot = 4
i = 9 is greater than pivot
j = 10 is not less than pivot so decress j position
so, j = 5 is less than pivot

Then swap arr[i] & array[j] and repeat 4 and 5 step untill j<=i
position:               p  i<=j
array:     1, 2, 3, 4 , 6,  5  , 9, 8, 7, 10

i = 9
j = 5
i = j <= i

Swap pivot & array[j]

5th pass array:     1, 2, 3, 4 , 5, 6, 9, 8, 7, 10
6th pass array:     1, 2, 3, 4 , 5, 6, 9, 8, 7, 10

7th pass:
position:                     p  i      j
array:     1, 2, 3, 4 , 5, 6, 9, 8, 7, 10

Pivot = 9
i = 8 is not greater than pivot so incress i position
so, i = 10 is greater than pivot but 

j = 10 is not less than pivot so decress j position
so, j = 7 is less than pivot
position:                     p     j   i
array:     1, 2, 3, 4 , 5, 6, 9, 8, 7, 10
Swap pivot & array[j] Because j <= i
7th pass array:     1, 2, 3, 4 , 5, 6, 7, 8, 9, 10
8th pass array:     1, 2, 3, 4 , 5, 6, 7, 8, 9, 10
9th pass array:     1, 2, 3, 4 , 5, 6, 7, 8, 9, 10

*/


#include<bits/stdc++.h>
using namespace std;

void printArray(int arr[],int size){   
    for (int i = 0; i < size; i++)
    {
        /* code */
        cout<<arr[i]<<" ";
    }
    
}

int partition(int arr[],int low,int high){
    int pivot = arr[low];
    int i = low + 1;
    int j = high;
    int temp;
    do{
        while (arr[i]<=pivot){
        i++;
    }
    while (arr[j]>pivot){
        j--;
    }
    if(i<j){
        temp = arr[i];
        arr[i] = arr[j];
        arr[j] = temp;
    }
    } while (i<j);

    // Swap A[low] and A[j]
    temp = arr[low];
    arr[low] = arr[j];
    arr[j] = temp;

    return j; 
}

void quickSort(int arr[], int low, int high){
    int partitionIndex; //Index of pivot after partion
    if(low<high){
    partitionIndex = partition(arr, low, high);
    quickSort(arr, low, partitionIndex-1);// sort left subarray 
    quickSort(arr, partitionIndex+1, high);// sort right subarray
    }
}

int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter element of array: ";
    for (int i = 0; i < size; i++){
        /* code */
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before sorting this array: ";
    printArray(arr, size);
    cout<<endl;

    quickSort(arr,0,size-1);

    cout<<"After sorting this array: ";
    printArray(arr, size);
    cout<<endl;

    return 0;
}