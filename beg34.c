#include <stdio.h>
int main(void)
{
char a[100];
int i,j,c=1;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='.')
c++;
}
printf("%d",c);
return 0;
}
