#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
 
int main(int argc, char* argv[])
{
    
    double niter = 100;//00000;
    double x,y;
    int i;
    int count=0;
    double z;
    double pi;
    
    printf("Hello1");
    //__asm__ ( "movl $10, %eax;");
    
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
        __asm__  __volatile__ __inline__ ( "xchg %eax, %eax");
    // while(1)

    // {}
    printf("Hello2");

    srand(time(NULL));
    //main loop
    for (i=0; i<niter; ++i)
    {
        //get random points
        x = (double)random()/RAND_MAX;
        y = (double)random()/RAND_MAX;
        z = sqrt((x*x)+(y*y));
        //check to see if point is in unit circle
        if (z<=1)
        {
            ++count;
        }
    }
    pi = ((double)count/(double)niter)*4.0;          //p = 4(m/n)
    printf("Pi: %f\n", pi);

    return 0;
}
