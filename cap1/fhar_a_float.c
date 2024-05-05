/*convertir grados fahr a celsius con float y no int
*/

#include <stdio.h>

main(){
    int fahr;
    for(fahr=0;fahr<=300;fahr=fahr+20)
    {
        printf("%3d %6.1f\n",fahr,(5.0/9.0)*(fahr-32));
    }
    /*
    while(fahr<=upper){
        celsius=(5.0/9.0)*(fahr-32.0);
        printf("%3.0f\t%6.1f\n",fahr,celsius);
        fahr=fahr+step;

    }*/

}