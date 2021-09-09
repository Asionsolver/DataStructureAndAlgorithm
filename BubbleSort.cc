/*
Bubble sort explained:

Array: 7,11,9,2,17,4

Array size = 6
Number of pass: 5

1st pass comparison = 5
2nd pass comparison = 4
3rd pass comparison = 3
4th pass comparison = 2
5th pass comparison = 1


So array size = n
Number of pass: n - 1 

1st pass comparison = n - 1
2nd pass comparison = n - 2
3rd pass comparison = n - 3
4th pass comparison = n - 4
5th pass comparison = n - 5

1st pass:
index(0,1) comparison--> 7, 11, 9, 2, 17, 4
index(1,2) comparison--> 7, 9, 11, 2, 17, 4
index(2,3) comparison--> 7, 9, 2, 11, 17, 4
index(3,4) comparison--> 7, 9, 2, 11, 17, 4
index(4,5) comparison--> 7, 9, 2, 11, 4, (17)-->1st biggest value in array

2nd pass:
index(0,1) comparison--> 7, 9, 2, 11, 4, 17
index(1,2) comparison--> 7, 2, 9, 11, 4, 17
index(2,3) comparison--> 7, 2, 9, 11, 4, 17
index(3,4) comparison--> 7, 2, 9, 4, (11), 17-->2nd biggest value in array

3rd pass:
index(0,1) comparison--> 2, 7, 9, 4, 11, 17
index(1,2) comparison--> 2, 7, 9, 4, 11, 17
index(2,3) comparison--> 2, 7, 4, (9), 11, 17-->3rd biggest value in array

4th pass:
index(0,1) comparison--> 2, 7, 4, 9, 11, 17
index(1,2) comparison--> 2, 4, (7), 9, 11, 17-->4th biggest value in array

4th pass:
index(0,1) comparison--> 2, 4, 7, 9, 11, 17
index(1,2) comparison--> 2, (4), 7, 9, 11, 17-->5th biggest value in array

5th pass:
index(0,1) comparison--> (2), 4, 7, 9, 11, 17-->6th biggest value in array


Main sorted array--> 2, 4, 7, 9, 11, 17

Algorithms Analysis:
-->(n-1)+(n-2)+(n-3)+(n-4)+(n-5)+........= n(n-1)/2
                                         = n2/2 - n/2

                    So time complexity = O(n2)
          This algorithms is stable algorithms.                  
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

void bubbleSortAdaptive(int arr[], int size){
    int i, j, sorted, temp;
    for ( i = 0; i < size-1; i++){ //for number of pass
    cout<<"Working on pass number: "<<i+1<<endl;
        sorted = 1;
        for( j = 0; j < size - 1 - i; j++){ //for comparison in each pass
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
                sorted = 0;
            }
        }
        if(sorted == 1){ //This condition is adaptive condition
            return;
        }
    }
}
void normalBubbleSort(int arr[], int size){
    int i, j, temp;
    for ( i = 0; i < size-1; i++){ //for number of pass
    cout<<"Working on pass number: "<<i+1<<endl;
        for( j = 0; j < size - 1 - i; j++){ //for comparison in each pass
            if(arr[j]>arr[j+1]){
                temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
       
    }
}
int main(){
    int size;
    cout<<"Enter size of array: ";
    cin>>size;

    int arr[size];

    cout<<"Enter element of array: ";
      for (int i = 0; i < size; i++)
    {
        /* code */
        cin>>arr[i];
    }
    cout<<endl;
    cout<<"Before sorting this array: ";
    printArray(arr, size);
    cout<<endl;
    cout<<"After sorting this array: ";
    cout<<endl;
    // normalBubbleSort(arr, size);
    bubbleSortAdaptive(arr, size);
    printArray(arr, size);
    cout<<endl;
    return 0;
}