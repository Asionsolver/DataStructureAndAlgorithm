/*

CountSort:
Time Complexity: O(n+k) where n is the number of elements in input array and k is the range of input. 
Auxiliary Space: O(n+k)

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

int maxElements(int arr[], int size){
    int max = INT_MIN;

    for (int i = 0; i < size; i++)
    {
        if (max < arr[i]){
            max = arr[i];
        }
    }
    return max;
}

void countSort(int arr[], int size){
    int i, j;
    //find maximum elemenrts in array
    int max = maxElements(arr, size);

    //create count array
    int* count = (int *) malloc((max+1)*sizeof(int));

    //initialize array elements to 0
    for(i = 0; i< max+1; i++){
        count[i] = 0;
    }

    // Increment the corresponding index in the count array
   for(i = 0; i < size; i++){
       count[arr[i]] = count[arr[i]] + 1;
   }
   i =0; // counter for count array
   j =0; // counter for given array arr
    while(i<= max){
        if(count[i]>0){
            arr[j] = i;
            count[i] = count[i] - 1;
            j++;
        }
        else{
            i++;
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
    countSort(arr, size);
    printArray(arr, size);
    cout<<endl;
    return 0;
}