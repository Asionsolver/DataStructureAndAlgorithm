/*
-->Deletion refers to operation adding an elements to linear array.
These  are three case:
1. Delete an element at beginning array.
-->Worst case: O(n)
2. Delete an elements at end of array.
-->Best case: O(1)
3. insert an elements at given index.
-->Average case: O(n)

Algorithms:
1.Delete(LA, n, k, item)    LA=Linear Array, n = number of element, k = location
2. set j = LA[k]
3.Repete from (j=k to n-1)
4.set LA[j] = LA[j+1]
5.set size = size-1
6.exit
*/
#include<bits/stdc++.h>
using namespace std;

int main(){
     int LA[100]={0};
    int item, j,k,n;
    
    cout<<"Enter size of array: ";
    cin>>n;

    cout<<endl;

    //Enter element of array:
    cout<<"Enter element of array: ";
    for (int i = 0; i < n; i++){
        cin>>LA[i];
    }
    cout<<endl;

 
    // print the original array
    cout<<"Before deleting elements of array: ";
    for (int i = 0; i < n; i++){
        cout<<LA[i]<<" ";
    }
    cout<<endl;

    cout<<"Enter postion you enter element: ";
    cin>>k;

    item = LA[k];
    for (j = k; j < n-1; j++)
    {
        /* code */
        LA[j] = LA[j+1];
    }
    n = n-1;

    cout<<endl;

    cout<<"After deleting elements of array: ";
    for(int i = 0; i < n; i++){
        /* code */
         cout<<LA[i]<<" ";
    }
    cout<<endl;
    
    return 0;
} 