/* C basics - pointers
*  K. Herman
*/
#include <stdio.h>

int main()
{
    /* variables */
    int   y[10];
    short x[10];

    for(int i=0; i<10;i++){
        x[i] = (short) i;
        y[i] = 2*i-5;
    }

    for(int i=0; i<10; i++)
        printf("X-value = %d  | Y-value = %d \n",x[i], y[i]);

    printf("Address of the first element of X (X[0]) = 0x%x and its value %d \n", x, x[0] );    
    printf("Address of the third element of X (X[2]) = 0x%x and its value %d \n", x+2, *(x+2) );    
    printf("Address of the first element of Y (X[0]) = 0x%x and its value %d \n", y, y[0] );    
    printf("Address of the third element of Y (X[2]) = 0x%x and its value %d \n", y+2, *(y+2) );    
    

    
    return 2;
}