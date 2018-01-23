/*
  Author: <Kimberly John>
  Course: {135,136}
  Instructor: <Gilbert Pajela>
  Assignment: <Numbers, "Lab 4">
TASK 1
  
*/

#include<stdio.h>
int main()
{
float n,k,i,a=1,b=1,ans;
printf("Enter values of n and k (n>k)\n");
scanf("%f%f",&n,&k);
for(i=0;i<=(k-1);i++)
{
a=a*(n-i);

}
for(i=1;i<=k;++i)
b=b*i;
ans=a/b;
printf("C(%3.2f,%3.2f) is %3.2f\n",n,k,ans);
return 0;
}

