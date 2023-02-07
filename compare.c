#include<stdio.h>
#include<string.h>
int main()
{
    char a[20]="welcometoc";
    char b[20];
    scanf("%s",b);
    int res=strcmp(a,b);
    if(res==0)
    printf("access granted");
    else
    printf("access denied");
     
    
}
