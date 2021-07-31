/*

1.Repeat for k =LowerBound to UpperBound
2.Apply process to LB[k]
3.exit.


Time complexity: O(n)
*/


#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k = 0; 

    cout<<"Enter size of array: ";
    cin>>n;
    int LB[n],count = 0;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>>LB[i];
    }

    cout<<"Array elements:";
    for(k = 0; k < n; k++){
        cout<<LB[k]<<" ";
    }
    cout<<endl;
    cout<<"Number of array elements: "<<k<<endl;
        
    return 0;
}