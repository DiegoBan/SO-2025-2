#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    if(fork() > 0){
        printf("Que pasa aqui!!!\n");
    }else{
        printf("No se\n");
    }
    return 0;
}