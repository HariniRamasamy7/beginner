#include <stdio.h>
int main(void)
{
char a[100];
int i,j,c=0;
scanf("%[^\n]",a);
for(i=0;a[i]!='\0';i++)
{
if(a[i]=='0'||a[i]=='1'||a[i]=='2'||a[i]=='3'||a[i]=='4'||a[i]=='5'||a[i]=='6'||a[i]=='7'||a[i]=='8'||a[i]=='9')
c++;
}
printf("%d",c);
return 0;
}
