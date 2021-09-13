
/* Examples control the flow in C
*  K. Herman
*/
#include <stdio.h>


int main()
{
    int a, b;
    char c;


    if(a == 3 )
        printf(" The value of a is equal to 3 \n");



    for(int i=0; i<10; i+=2)
       printf("for loop %d\n",i);



    while(c != 'q'){
        printf("Loop starts \n");
        printf("The press q to exit \n\r");
        scanf("%c",&c);
        getchar();

        switch(c){
            case 'a': printf("Option a was choosen \n"); break;
            case 'b': printf("Option b was choosen \n"); break;
            case 'c': printf("Option c was choosen \n"); break;
            case 'd': printf("Option d was choosen \n"); break;
            default:  printf("invalid key \n"); break;
        }
   
        printf("Loop ends \n\n");
    } 

    return 0;
}