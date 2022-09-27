#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <omp.h>
 
 
int fib(int n) {
    int i, j;
    if (n<2)
         return n;
    else {
        #pragma omp task shared(i)
        i=fib(n-1);
        #pragma omp task shared(j)
        j=fib(n-2);
        #pragma omp taskwait
        return i+j;  
   }
}
 
 
int main(){
    int n, result;
    n = 9;
    double itime,ftime,exe_time;
    itime=omp_get_wtime();
    #pragma omp parallel
    {
        #pragma omp single
        result = fib(n);
    }
    ftime=omp_get_wtime();
    exe_time=ftime-itime;
    printf("Execution time is %f",exe_time);
    printf("\nResult is %d\n", result);
}
