#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char str[n];
    scanf("%s",&str);
    for(int i=0;i<n/2;i++)
    {
        char temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("%s",str);
}
