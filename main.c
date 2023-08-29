#include <stdio.h>
#include <stdlib.h>
unsigned int a,b,c,largest;

int main()
{
    printf("enter a b c \n");
    scanf("%i",&a);
    scanf("%i",&b);
    scanf("%i",&c);

        if(a>b){

       if(a>c){
        printf("a is the largest",a);
       }
       else{
        printf(" c =%i",c);
       }

        }
        if(b>a){

       if(b>c){
        printf("a is the largest",b);
       }
       else{
        printf(" c =%i",c);
       }
        }


    return 0;
}
