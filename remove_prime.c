#include<stdio.h>
int isPrime(int n)
{
    if(n<=1)
    return 0;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
}
int remove_prime(int *a,int n)
{
    for(int i=0;i<n;i++)
    {
        if(isPrime(a[i]))
        {
            for(int j=i;j<n-1;j++)
            a[j]=a[j+1];
            n--;
            i--;
        }
    }
    return n;
}
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int new_size=remove_prime(arr,n);
    printf("new size of array after removing prime: %d\n",new_size);
    printf("After removing prime elements in the array\n");
    for(int i=0;i<new_size;i++)
    {
       printf("%d ",arr[i]); 
    }
    printf("\n");
    return 0;
}
