#include <stdio.h>
#include <assert.h>
#include <math.h>

 int max(int x[], int n)
 {
  int max,i;
 	max=x[0];
    for(i=1; i<n; i++)
    {
      
		   if(max<x[i])
		    max=x[i];       
    } return max;
 }
int min(int x[], int n)
{
  int min,i;
 	min=x[0];
    for(i=1; i<n; i++)
    {
      
		   if(min>x[i])
		    min=x[i];       
    } return min;
 }
float average(int x[], int n)
{
 int i;
 float sum=0.0;
 for(i=0;i< n;i++)
 {
  sum = sum + x[i];
 }
 return(sum/n);
}
int mode(int x[], int n)
{
int maxValue = 0, maxCount = 0, i, j;

   for (i = 0; i < n; ++i) {
      int count = 0;
      
      for (j = 0; j < n; ++j) {
         if (x[j] == x[i])
         ++count;
      }
      
      if (count > maxCount) {
         maxCount = count;
         maxValue = x[i];
      }
   }

   return maxValue;
}
int factors(int n, int ret[])
{
int count=0;
for(int i=0;i<100;i++)
	{
	if(n>0)
	{
	for(int j=2;j<100;j++)
	{
	if(n%j==0)
		{
		ret[i]=j;
		count++;
		n=n/j;
		break;
		}
	}
	}
	}
return count;
}
