#include <stdio.h>
#include <assert.h>
#include <math.h>

int max(int [], int);
int min(int [], int);
float average(int [], int);
int factors(int, int []);
int mode(int [], int);

int main(void) {
  int x[] = {9,5,6,10,2,-3,4};
  int y[] = {5};
  
  assert (max(x, 7) == 10);
  assert (max(y, 1) == 5);
  printf("Max: passed\n");
  

  assert (min(x, 7) == -3);
  assert (min(y, 1) == 5);
  printf("Min: passed\n");
  

  assert ((average(x, 7) - 4.7142) < 0.001);
  assert (average(y, 1) == 5.0);
  printf("Average: passed\n");
  

  int z[] = {4, 9,5,6,5,10,0,2,-3, -3,4, 4};
  assert ((mode(z, 12) == 4));
  assert (mode(y, 1) == 5);
  printf("Mode: passed\n");
  

  int ret[100] = {0};
  int count = factors(180, ret);
  assert (count == 5);
  assert (ret[0] == 2);
  assert (ret[1] == 2);
  assert (ret[2] == 3);
  assert (ret[3] == 3);
  assert (ret[4] == 5);


  count = factors(143, ret);
  assert (count == 2);
  assert (ret[0] == 11);
  assert (ret[1] == 13);
  printf("Factors: passed\n");
}
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
