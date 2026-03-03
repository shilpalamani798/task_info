#include <stdio.h>
void  rotateRightByOne(int a[],int n)
{
    int i;
    int last=a[n-1];
    for(i=n-1;i>0;i--)
    {
     a[i]=a[i-1];   
    }
    a[0]=last;
    printf("After one right rotation\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
    printf("\n");
}
void  rotateLeftByOne(int a[],int n)
{
    int i;
    int first=a[0];
    for(i=0;i<n-1;i++)
    {
     a[i]=a[i+1];   
    }
    a[n-1]=first;
    printf("After one left rotation\n");
     for(int i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
     printf("\n");
}
 
int main()
{
    int n;
    printf("enter number of elements: ");
    scanf("%d",&n);
    int arr[n];
    int arr2[n];
    printf("enter array elements\n");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i] = arr[i];   
    }
    rotateRightByOne(arr,n);
    rotateLeftByOne(arr2,n);

}
 
