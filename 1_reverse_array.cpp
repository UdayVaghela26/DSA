// Question 1: Reverse an Array
// Problem: Write a function to reverse an array of integers.
// Input Example:
// Input: [1, 2, 3, 4, 5]
// Output Example:
// Output: [5, 4, 3, 2, 1]

#include<iostream>
using namespace std;

void reverse_array(int array[],int size)
{
      
    //   array [1,2,3,4,5.......]

      int j=size-1; 
      int i=0;

      while (i<j)
      {
        int temp=array[i];  
        array[i]=array[j]; 
        array[j]=temp;   
        j--;  
        i++; 
      }
}

int main(){

    int array_size;

    cout<<"Enter Array Size..."<<endl;
    cin>>array_size;

    int array[array_size];

    for(int i=0; i<array_size; i++)
    {
        cout<<"Enter Array Element...."<<endl;
        cin>>array[i];
    }

    cout<<"Original Array..."<<endl;

    for(int i=0; i<10; i++)
    {
            cout<<array[i]<<" ";
    }
    cout<<endl;

    cout<<"Reverse Array..."<<endl;

    reverse_array(array,array_size);

    for(int i=0; i<array_size; i++)
    {
            cout<<array[i]<<" ";
    }
}