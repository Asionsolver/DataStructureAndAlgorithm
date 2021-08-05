/*
Linear Search(Sequential Search):


*/
#include<bits/stdc++.h>
using namespace std;
int searchNumber(int arr[],int number, int n){
    int position = -1;
    for(int i = 0; i < n; i++){
        if(number == arr[i]){ 
            position = i+1;
            //break;
        }
    }
    if(position == -1){
        return -1;
    }
    return position;

}

int main(){
    int number;
    cout<<"Enter the number you want to search: ";
    cin>>number;

    int arr[] = {77,1,65,5,85,74,2,94,8,3,45,84,41,65,64,58,21,20,32,23,22,24,25,20,58,26,7,27,10,11,12,20,20,13,14,15,16,17,18,98,19};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout<<"The size of array: "<<n<<endl;
    if(searchNumber(arr, number, n) == -1){
        cout<<"Your number is not found."<<endl;
    }else{
        cout<<"The number you are query for in being indexes is "<<searchNumber(arr,number,n); 
    }
     
    cout<<endl;
    return 0;
}