#include <omp.h>
#include <stdio.h>
#include <pthread.h>


void main()
{

    #pragma omp parallel
    {
        int iD=omp_get_thread_num();
        printf("Hello from thread %d\n",&iD);
        printf("World from thread %d\n",&iD);
    }
    return ;
}
