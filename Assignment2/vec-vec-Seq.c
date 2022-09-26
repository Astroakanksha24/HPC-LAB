#include<stdio.h>
#include<omp.h>
#include <pthread.h>
 
void main()
{
    int N=100000;
    int A[100000];
 
    for(int i=1;i<=N;i++) A[i] = i+1;
 
    int B[100000];
 
    for(int i=1;i<=N;i++) B[i] = i;
 
    int C[100000]={0};
 
    double itime,ftime,exe_time;
 
    itime=omp_get_wtime();
 
    for(int i=1;i<=N;i++)
    {
        C[i]=A[i]+B[i];
        printf("%d ",C[i]);
    }    
 
    ftime=omp_get_wtime();
    exe_time=ftime-itime;
    printf("\n Time taken is %d ",exe_time);
 
}
