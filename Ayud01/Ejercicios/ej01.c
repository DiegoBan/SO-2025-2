#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t t = fork();
    if(t > 0){
        printf("Hola soy tu padre...\n");
    }else if(t == 0){
        printf("Hola padre\n");
    }else{
        printf("Oh no... Hubo un error");
    }
    return 0;
}