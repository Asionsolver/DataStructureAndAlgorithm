/*
Selection Sort:
Selection sort is an in-place sorting algorithm. Selection sort works well for small files. It is used
for sorting the files with very large values and small keys. This is because selection is made
based on keys and swaps are made only when required.


Advantages:
• Easy to implement
• In-place sort (requires no additional storage space)
• Sorting in min number of swap.


Disadvantages
• Doesn’t scale well: O(n2)
• Selection sort is not stable.
• Selection sort is not adaptive.


Algorithm
1. Find the minimum value in the list
2. Swap it with the value in the current position
3. Repeat this process for all the elements until the entire array is sorted
This algorithm is called selection sort since it repeatedly selects the smallest element.


Performance
Worst case complexity : O(n2)
Best case complexity : O(n2)
Average case complexity : O(n2)
Worst case space complexity: O(1) auxiliary

Selection sort explained:
 // Input Array (There will be total n-1 passes. 5-1 = 4 in this case!)

    //  00  01  02  03  04
    // |03, 05, 02, 13, 12

    // After first pass
    //  00  01  02  03  04
    //  02,|05, 03, 13, 12

    // After second pass
    // 00  01  02  03  04
    // 02, 03,|05, 13, 12

    // After third pass
    // 00  01  02  03  04
    // 02, 03, 05,|13, 12

    // After fourth pass
    // 00  01  02  03  04
    // 02, 03, 05, 12,|13

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

void selectionSort(int arr[], int size){
    int i,j,indexMin,temp;
    for ( i = 0; i < size-1; i++)
    {
        indexMin = i;
        for ( j = i+1; j < size; j++)
        {
            if(arr[j]<arr[indexMin]){
            indexMin = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[indexMin];
        arr[indexMin] = temp;

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
    selectionSort(arr, size);
    printArray(arr, size);
    cout<<endl;
    
    return 0;
}