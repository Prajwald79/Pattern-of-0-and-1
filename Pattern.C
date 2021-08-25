#include<stdio.h>
#include<conio.h>
main()
{
int n;
printf("Enter the value of n\n");
scanf("%d",&n);
for (int i=0; i<n; i++)
{
for(int j=0; j<i+1; j++)
{
    printf("01");
}
printf("\n");
}
return 0;
}
