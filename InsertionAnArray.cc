/*
-->Insertion refers to operation adding an elements to linear array.
These  are three case:
1. Insert an element at beginning array.
-->Worst case: O(n)
2. Insert an elements at end of array.
-->Best case: O(1)
3. insert an elements at given index.
-->Average case: O(n)

Algorithms:
1.Insert(LA, n, k, item)    LA=Linear Array, k = location
2. set j = size
3.Repete step 3 and four while (j>=k)
4.set j = j-1
5.set LA[k] = item
6.set size = size+1
7.exit

*/
#include<bits/stdc++.h>
using namespace std;

int main(){
    int LA[100]={0};
    int n;
    int j,k, item;

    cout<<"Enter size of array: ";
    cin>>n;
    cout<<endl;
   // initial array of size 10
    for (int i = 0; i < n; i++){
        LA[i] = i + 1;
    }

    //Enter element of array:
    cout<<"Enter element of array: ";
    for (int i = 0; i < n; i++){
        cin>>LA[i];
    }
    cout<<endl;

 
    // print the original array
    cout<<"Before inserting elements of array: ";
    for (int i = 0; i < n; i++){
        cout<<LA[i]<<" ";
    }
    cout<<endl;

    // increase the size by 1
    n++;

    //size = sizeof LA / sizeof LA[0];
    cout<<"Enter your special element: ";
    cin>>item;

    cout<<endl;

    cout<<"Enter postion you enter element: ";
    cin>>k;

    j = n;

    while (j >= k){
        LA[j+1] = LA[j];
        j = j-1;
    }

    LA[k] = item;
    //n = n+1;
    cout<<endl;
    cout<<"After inserting elements of array: ";
    for(int i = 0; i < n; i++){
        /* code */
         cout<<LA[i]<<" ";
    }
    cout<<endl;
    
    
    return 0;
}