#include<stdio.h>
#include<omp.h>
 
void main()
{
    long long sum=0;
    double iTime,fTime,exe_Time;
    iTime=omp_get_wtime();
    #pragma omp parallel for reduction(+:sum)
         for(int i=1;i<=100;i++)
         {
            sum+= i*i;
            long long j=i*i;
            printf("Square of %d=%lld\n",i,j);
         }
   
    fTime=omp_get_wtime();
    exe_Time=fTime-iTime;
    printf("\nTime taken is %d",exe_Time);
    printf("\nSum is %lld",sum);
 
}
