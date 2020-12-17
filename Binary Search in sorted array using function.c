#include<stdio.h>
#include<conio.h>
binary_search(int item,int n,int a[])
{
    int f=0,l,m;
    l=n-1;
    m=(f+l)/2;
    while(f<=l)
    {
        if(a[m]<item)
        {
            f=m+1;
        }
        else if(a[m]==item)
        {
            printf("Found at= %d",(m+1));
            break;
        }
        else
            l=m-1;
        m=(f+l)/2;
    }
    if(f>l)
        printf("Not found");

}
main()
{
    int n;
    printf("Enter no. of elements = ");
    scanf("%d ",&n);
    int a[n],i,item;
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter item to search= ");
    scanf("%d",&item);
    binary_search(item,n,a);
}
