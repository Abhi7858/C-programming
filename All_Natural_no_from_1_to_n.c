/*
QUE: write all natural values from 1 to n using while loop
*/
#include<stdio.h>
#include<conio.h>
int main()
{
   int i,n;
    printf("enter value of n(only integer):");
    scanf("%d",&n);
    i=1;
    
    while(i<=n)
    {
    printf("%d\n",i);
        i++;
          
    }
    
    getch();
    
    
}
