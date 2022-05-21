// { Driver Code Starts
#include <stdio.h>
#include <bits/stdc++.h>
using namespace std;



/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("\n");
}


 // } Driver Code Ends
class Solution
{
    public:
    void merge(int arr[], int low, int mid, int high)
    {
         // Your code here
         int n1=mid-low+1;
         int n2=high-mid;
         int left[n1],right[n2];
         for(int i=0;i<n1;i++)
         {
             left[i]=arr[low+i];
         }
         for(int j=0;j<n2;j++)
         {
             right[j]=arr[mid+1+j];
         }
         int k=low;
         int i=0,j=0;
         while(i<n1 && j<n2)
         {
             if(left[i] <= right[j])
             {
                 arr[k++]=left[i++];
             }
             else
             {
                 arr[k++]=right[j++];
             }
             //k++;
         }
         while(i<n1)
         {
             arr[k++]=left[i++];
         }
         while(j<n2)
         {
             arr[k++]=right[j++];
         }
    }
    public:
    void mergeSort(int arr[], int low, int high)
    {
        //code here
        if(low<high)
        {
            int mid=low+(high-low)/2;
            mergeSort(arr,low,mid);
            mergeSort(arr,mid+1,high);
            merge(arr,low,mid,high);
        }
    }
};

// { Driver Code Starts.


int main()
{
    int n,T,i;

    scanf("%d",&T);

    while(T--){
    
    scanf("%d",&n);
    int arr[n+1];
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);

    Solution ob;
    ob.mergeSort(arr, 0, n-1);
    printArray(arr, n);
    }
    return 0;
}  // } Driver Code Ends