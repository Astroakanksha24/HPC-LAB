#include<stdio.h>
#include<time.h>
 
void main()
{
    long long sum=0;
    clock_t t;
    t=clock();
 
    for(int i=1;i<=100;i++)
    {
            sum+= i*i;
            long long j=i*i;
            printf("Square of %d=%lld\n",i,j);
    }
    t=clock()-t;
    double time_taken=((double)t)/ CLOCKS_PER_SEC;
   
    printf("\nTime taken is %f\n",time_taken);
    printf("Sum of first 100 numbers is %lld\n",sum);
 
}
