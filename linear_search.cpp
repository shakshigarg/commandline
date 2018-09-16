//wap for linear search
#include<stdio.h>
#include<conio.h>
int linearsearch(int a[100],int n,int num);
int main()
{
    int a[100],i,n,num,f;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements");
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("enter the element you wanna search");
    scanf("%d",&num);
    f=linearsearch(a,n,num);
    if(f==-1)
        printf("unsuccessful search");
    else
        printf("element is on position %d",f+1);
    getch();

}
int linearsearch(int a[100],int n,int num)
{
    int i;
    while(i<n&&a[i]!=num)
        i++;
    if(i<n)
        return i;
    else
        return -1;
}
