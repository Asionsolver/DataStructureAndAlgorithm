/*
Shell Sort:

Shell sort (also called diminishing increment sort) was invented by Donald Shell. This sortingalgorithm is a generalization
of insertion sort. Insertion sort works efficiently on input that is already almost sorted. Shell sort is also known as 
n-gap insertion sort. Instead of comparing only the adjacent pair, shell sort makes several passes and uses various gaps 
between adjacent elements (ending with the gap of 1 or classical insertion sort).

In insertion sort, comparisons are made between the adjacent elements. At most 1 inversion iseliminated for each comparison 
done with insertion sort. The variation used in shell sort is to avoid comparing adjacent elements until the last step of 
the algorithm. So, the last step of shell sort is effectively the insertion sort algorithm. It improves insertion sort by 
allowing the comparison and exchange of elements that are far away. This is the first algorithm which got less than 
quadratic complexity among comparison sort algorithms.

Shellsort is actually a simple extension for insertion sort. The primary difference is its capability
of exchanging elements that are far apart, making it considerably faster for elements to get to
where they should be. For example, if the smallest element happens to be at the end of an array,
with insertion sort it will require the full array of steps to put this element at the beginning of the
array. However, with shell sort, this element can jump more than one step a time and reach the
proper destination in fewer exchanges.

The basic idea in shellsort is to exchange every hth element in the array. Now this can beconfusing so we’ll talk more about 
this, h determines how far apart element exchange can happen, say for example take h as 13, the first element (index-0) is 
exchanged with the 14th element (index-13) if necessary (of course). The second element with the 15th element, and so on.
Now if we take has 1, it is exactly the same as a regular insertion sort.

Shellsort works by starting with big enough (but not larger than the array size) h so as to allow eligible element exchanges 
that are far apart. Once a sort is complete with a particular h, the array can be said as h-sorted. The next step is to
reduce h by a certain sequence, and again perform another complete h-sort. Once h is 1 and h-sorted, the array is completely
sorted. Notice that the last sequence for ft is 1 so the last sort is always an insertion sort, except by this time the array
is already well-formed and easier to sort.

Shell sort uses a sequence h1,h2, ...,ht called the increment sequence. Any increment sequence is fine as long as h1 = 1,
and some choices are better than others. Shell sort makes multiple passes through the input list and sorts a number of 
equally sized sets using the insertion sort. Shell sort improves the efficiency of insertion sort by quickly shifting values 
to their destination.

Analysis:

Shell sort is efficient for medium size lists. For bigger lists, the algorithm is not the best choice. It is the fastest of
all O(n2) sorting algorithms.


The disadvantage of Shell sort is that it is a complex algorithm and not nearly as efficient as the merge, heap, and quick 
sorts. Shell sort is significantly slower than the merge, heap, and quick sorts, but is a relatively simple algorithm, 
which makes it a good choice for sorting lists of less than 5000 items unless speed is important. It is also a good choice 
for repetitive sorting of smaller lists.


The best case in Shell sort is when the array is already sorted in the right order. The number of comparisons is less. 
The running time of Shell sort depends on the choice of increment sequence.


Performance
Worst case complexity depends on gap sequence. Best known: O(nlog2n)
Best case complexity: O(n)
Average case complexity depends on gap sequence.
Worst case space complexity: O(n)

Shell sort explained:
Index:  0  1  2  3  4
Array: 12 34 54  2  3
Array size--> n = 5

1st pass:

gap = n/2
    = 5/2
    = 2

i = gap
  = 2
j = i
  = 2

a[j - gap]
a[2 - 2]
a[0]
=12
for(gap = 2; 2 > 0; gap = gap / 2){
    for(i = 2; 2 < 5; i++){
        temp = a[i];
             = a[2]
             = 54

                               a[j - gap]>temp
        for( j = 2; 2 >= 2 &&         12 >54;   j = j -gap ){
            
            condition false;

        }

        a[j] = temp;
        a[2] = 54;
    }
}
              Index:  0  1  2  3  4
so arranging array = 12 34 54  2  3

j = i
  = 3

a[j - gap]
a[3 - 2]
a[1]
=34
for(gap = 2; 2 > 0; gap = gap / 2){
    for(i = 3; 3 < 5; i++){
        temp = a[i];
             = a[3]
             = 2
                               a[j - gap]>temp
        for( j = 3; 3 >= 2 &&         34 > 2;   j = j -gap ){
            
            condition true;
            a[j] =  a[j - gap]
            a[3] =  a[1]  //a[3 - 2]
                 =  34
                 Index:  0  1  2  3  4
                 array: 12  B 54  34  3


        }

        for( j = 1; 1 >= 2 && ; j = j -gap ){
            
            condition false;
        } 
        a[1] = temp;
        a[1] = 2;

    }
}
             Index:  0  1  2  3   4
so arranging array: 12  2 54  34  3

j = i
  = 4

a[j - gap]
a[4 - 2]
a[2]
=54
for(gap = 2; 2 > 0; gap = gap / 2){
    for(i = 4; 4 < 5; i++){
        temp = a[i];
             = a[4]
             = 3
                              a[j - gap]>temp
        for( j = 4; 4 >= 2 &&        54 > 3;   j = j -gap ){
            
            condition true;
            a[j] =  a[j - gap]
            a[4] =  a[2]  //a[4 - 2]
                 =  54
                 Index:  0  1  2  3  4
                 array: 12  2  B  34  54


        }

                              a[j - gap]>temp
        for( j = 2; 2 >= 2 &&         12> 3     ; j = j -gap ){
            
            condition true;
             a[2] =  a[j - gap]
            a[2] =  a[0]  //a[2 - 2]
                 =  12
                 Index:  0  1  2  3  4
                 array:  B  2 12  34  54
        }
        for( j = 0; 0 >= 2 &&; j = j -gap ){
            
            condition false;
             
        } 
        a[j] = temp;
        a[0] = 3;

    }
}
             Index:  0  1  2   3   4
so arranging array:  3  2 12  34  54

2ns pass:

gap = 2/2
    = 2/2
    = 1

i = gap
  = 1
j = i
  = 1

a[j - gap]
a[1 - 1]
a[0]
=3
for(gap = 1; 1 > 0; gap = gap / 2){
    for(i = 1; 1 < 5; i++){
        temp = a[i];
             = a[1]
             = 2

                               a[j - gap]>temp
        for( j = 1; 1 >= 1 &&          3 > 2;   j = j -gap ){
            
            condition true;
            a[j] =  a[j - gap]
            a[1] =  a[0]  //a[2 - 2]
                 =  3
            Index:  0  1  2  3  4
            array:  B  3 12  34  54
        } 
        for( j = 0; 0 >= 1 &&;   j = j -gap ){
            
            condition false;
          
        }
        a[j] = temp;
        a[0] = 2;
    
    }
}
              Index:  0  1  2  3   4
so arranging array =  2  3 12 34  54


so final sorthing arrar: 2  3 12 34  54
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

void shellSort(int arr[], int size){

    int i, j, temp, gap;
    for ( gap = size/2; gap > 0; gap = gap/2)
    {
        for ( i = gap; i < size; i++)
        {
            temp = arr[i];
            for ( j = i; j>= gap && arr[j - gap]>temp; j = j - gap)
            {
                arr[j] = arr[j - gap];
            }
            arr[j] = temp;
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
    shellSort(arr, size);
    printArray(arr, size);
    cout<<endl;

    return 0;
} 