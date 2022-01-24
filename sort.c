#include<stdio.h>
void SortArr(int size,int*ptr)
{
    int i,j,temp;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if(*(ptr+j)<*(ptr+i))
            {
                temp=*(ptr+i);
                *(ptr+i)=*(ptr+j);
                *(ptr+j)=temp;
            }
        }
    }
    printf("\n sorted array elements = ");
    for(i=0;i<size;i++)
    {
        printf("%d  ",*(ptr+i));
    }
}
int main()
{
    int size;
    printf("enter the array size:\n");
    scanf("%d",&size);
    int arr[size];
    printf("enter %d elements of an array:\n",size);
    for(int i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    SortArr(size,arr);
    printf("\n");
}
