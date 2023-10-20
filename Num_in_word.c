#include<stdio.h>
void main()
{
int n,l=0,r=0,m,p;
printf("Enter any number :");
scanf("%d",&n);
p=n;
 while(n!=0)
 {
  m=n%10;
  l=l*10+m;
  n/=10;
 }
  while(l!=0)
 {
  m=l%10;
  l=l/10;
  
 switch(m)
 {
 case 1:
 printf("One "); break;
 case 2:
 printf("Two  "); break;
 case 3:
 printf("Three "); break;
 case 4:
 printf("Four "); break;
 case 5:
 printf("Five "); break;
  case 6:
 printf("Six "); break;
 case 7:
 printf("Seven "); break;
 case 8:
 printf("Eight "); break;
 case 9:
 printf("Nine "); break;
 case 0:
 printf("Zero "); break;
  
 printf(" The reverse no is =%d\n",m);
}
 }
}
  
