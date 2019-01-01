// C program for insertion sort
#include <stdio.h>
#include <math.h>
void insert(int arr[], int i);
/* Function to sort an array using insertion sort*/
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i <n; i++)
      insert(arr, i);
}
/* Function to print an array */
void printArray(int arr[], int size)
{
    int i;
    for (i=0; i < size; i++)
        printf("%d ", arr[i]);
    printf("
");
}
// Driver program to test above functions
int main()
{
    int arr[1000],n,T,i;
    scanf("%d",&T);
    while(T--){
    scanf("%d",&n);
    for(i=0;i<n;i++)
      scanf("%d",&arr[i]);
    insertionSort(arr, n);
    printArray(arr, n);
    }
    return 0;
}

}

/*Please note that it's Function problem i.e.
you need to write your solution in the form of Function(s) only.
Driver Code to call/invoke your function is mentioned above.*/

/* The task is to complete insert() which is used 
   as shown below to implement insertionSort() */
/* Function to sort an array using insertion sort
void insertionSort(int arr[], int n)
{
   int i;
   for (i = 1; i < n; i++)
      insert(arr, i);
} */
void insert(int a[], int i)
{
    // Your code here 
    int v,j;
    v=a[i];
    j=i-1;
    while(j>=0 && a[j]>v)
    {
        a[j+1]=a[j];
        j--;
    }
    a[j+1]=v;
}
