#include <stdio.h>

int main()
{    
    int i,j;
    char s1[20]="welcometoc";
     for (i = 0; s1[i] != '\0';i++)
     {
         
     }
 char s2[20];
    scanf("%[^\n]s",s2);
    for(j=0;s2[j] != '\0';j++)
    {
        
    }
    
    char c[20];
    
    
    
    if(i == j)
    {
       for(int k=0;k<=j;k++)
       {
           if(s1[k] == s2[k])
           {
           char c[20]="access granted";
           }
           
           else
       {
           char c[20]="access denied";
       }
       }
    }
    else
    {
    char c[20]="access denied";
    }
    
    printf("%s",c);

    return 0;
}

