#include<stdio.h>
main()
{
    int n;
    printf("Enter no. of elements = ");
    scanf("%d",&n);
    int a[n],i;
    for(i=0;i<n;i++)
    {
        printf("Enter %d element=",i+1);
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    int f=0,l,m,item;
    l=n-1;
    m=(f+l)/2;
    printf("\nEnter item to search= ");
    scanf("%d",&item);
    while(f<=l)
    {
        if(a[m]<item)
        {
            f=m+1;
        }
        else if(a[m]==item)
        {
            printf("%d found at %dth position",item,(m+1));
            break;
        }
        else
            l=m-1;
        m=(f+l)/2;
    }
    if(f>l)
        printf("Not found");
}
