/*

Insertion Sort:

Insertion sort is a simple and efficient comparison sort. In this algorithm, each iteration removes
an element from the input data and inserts it into the correct position in the list being sorted. The
choice of the element being removed from the input is random and this process is repeated until
all input elements have gone through.

Advantages
• Simple implementation
• Efficient for small data
• Adaptive: If the input list is presorted [may not be completely] then insertions sort takes O(n + d), where d is the
  number of inversions
• Practically more efficient than selection and bubble sorts, even though all of them have O(n2) worst case complexity
• Stable: Maintains relative order of input data if the keys are same
• In-place: It requires only a constant amount O(1) of additional memory space
• Online: Insertion sort can sort the list as it receives it

Insertion sort explained:

Array: 7,11,9,2,1,0

Array size = 6
Number of pass: 5

1st pass comparison = 5
2nd pass comparison = 4
3rd pass comparison = 3
4th pass comparison = 2
5th pass comparison = 1


So array size = n
Number of pass: n - 1 

1st pass comparison = n - 5
2nd pass comparison = n - 4
3rd pass comparison = n - 3
4th pass comparison = n - 2
5th pass comparison = n - 1

1st pass:
Array: 7, |11,9,2,17,4 -->here 11 will only compare with 7

1st comparison--> 7, 11, |9, 2, 1, 0


2nd pass:
Array: 7, 11, |9, 2, 17, 4 -->here 9 will compare with 7 and 11

1st comparison--> 7, 9, 11, | 2, 1, 0
2nd comparison--> 7, 9, 11, | 2, 1, 0


3rd pass:
Array: 7, 9, 11, | 2, 17, 4 -->here 2 will compare with 7, 9 and 11 

1st comparison--> 7, 9, 2, 11, |1, 0
2nd comparison--> 7, 2, 9, 11, |1, 0 
3rd comparison--> 2, 7, 9, 11, |1, 0 


3rd pass:
Array: 2, 7, 9, 11, |1, 0 -->here 1 will compare with 2, 7, 9 and 11 

1st comparison--> 2, 7, 9, 1, 11, |0
2nd  comparison--> 2, 7, 1, 9, 11, |0
3rd comparison--> 2, 1, 7, 9, 11, |0
4th comparison--> 1, 2, 7, 9, 11, | 0


4th pass:
Array: 1, 2, 7, 9, 11, | 0 -->here 0 will compare with 1, 2, 7, 9 and 11 

1st comparison--> 1, 2, 7, 9, 0, 11
2nd comparison--> 1, 2, 7, 0, 9, 11
3rd comparison--> 1, 2, 0, 7, 9, 11
4th comparison--> 1, 0, 2, 7, 9, 11
5th comparison--> 0, 1, 2, 7, 9, 11

Main sorted array--> 0, 1, 2, 7, 9, 11

Algorithms Analysis:
-->(n-5)+(n-4)+(n-3)+(n-2)+(n-1)+........= n(n-1)/2
                                         = n2/2 - n/2

                    So worst case time complexity = O(n2)
                    So best case time complexity = O(n)

                    This algorithms is stable algorithms. 
                    This algorithms is adaptive algorithms. 
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

void insertionSort(int arr[], int size){
     int key, j;
     for (int i = 1; i <= size-1; i++){ // Loop for passes
       key = arr[i];
       j = i - 1;
       while (j>=0 && arr[j]>key){ // Loop for each pass
         arr[j+1] = arr[j];
         j--;
       }
       arr[j+1] = key;      
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
    insertionSort(arr, size);   
    printArray(arr, size);
    cout<<endl;
    return 0;
}