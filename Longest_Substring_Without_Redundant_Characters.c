#include<stdio.h>
#include<string.h>
int hasRedundantChar(char str[],int start,int end)
{
    for(int i=start;i<end;i++)
    {
        for(int j=i+1;j<=end;j++)
        {
            if(str[j]==str[i])
                return 0;
        }
    }
    return 1;
}
int main()
{
    char str[20],i=0,flag=0;
    printf("Enter a string:");
    scanf("%[^\n]s",str);
    unsigned int start,count=strlen(str),end;
    while(count>0  && flag!=1)
    {
        start=i;
        end=count+i-1;
        do
        {
            if(hasRedundantChar(str,start,end))
            {
                if(flag==0)
                    printf("Length of the substring is %d",end-start+1);
                printf("\nLongest substring is:");
                for(int j=start;j<=end;j++)
                {
                    printf("%c",str[j]);
                }
                flag=1;
            }
            i++;
            start=i;
            end=count+i-1;
        } while (end!=strlen(str));
        i=0;
        count--;
    }
}