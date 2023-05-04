#include<stdio.h>
int main()
{
char i;

for(i=0;i<199;i++)
printf("%d\n",i);//output is infinite because i value rotating fron 127 to -128

}
