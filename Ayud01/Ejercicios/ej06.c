#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    if(fork() && fork()){
        printf("Que esta pasando aqui!!\n");
    }else{
        printf("Hola, soy %d\n", getpid());
    }
}

