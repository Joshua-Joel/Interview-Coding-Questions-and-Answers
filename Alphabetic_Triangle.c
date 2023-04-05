#include<stdio.h>
void printTriangle(int n)
{
    int i,j;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i;j++)
            printf(" ");
        for(j=65;j-65<=i;j++)
            printf("%c",j);
        for(j-=2;j>=65;j--)
            printf("%c",j);
        printf("\n");
    }
}
int main()
{
    int n;
    printf("Enter height of the triangle:");
    scanf("%d",&n);
    printTriangle(n);
}
