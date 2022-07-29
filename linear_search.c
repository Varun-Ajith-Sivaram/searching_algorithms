#include<stdio.h>

void Linear_Search(int[],int,int);

void main()
{
    int size,element;

    printf("\tLinear Search Implementation\n");
    
    printf("\n Enter the no. of elements: ");
    scanf("%d",&size);
    
    int a[size];
    
    printf("\n Enter the elements: \n");

        for(int i=0;i<size;i++)
        {
            scanf("%d",&a[i]);
        }

    printf("\n Enter the element to be searched: ");
    scanf("%d",&element);

    Linear_Search(a,element,size);
    
}

void Linear_Search(int a[],int element,int n)
{
    int flag=0;
    
    for(int i=0;i<n;i++)
    {
        if(a[i]==element)
        {
            flag=1;
            printf("    --> Searched element %d found at position %d",element,i+1);
            break;
        }
    }
    
    if(flag==0)
        printf("    --> Searched element not found");

}
