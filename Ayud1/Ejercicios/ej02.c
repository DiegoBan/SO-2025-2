#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t a = fork();
    pid_t b = fork();
    if(a > 0 && b > 0){
        printf("Victor\n");
    }else if(a == 0 && b > 0){
        printf("Yerko\n");
    }else if(a > 0 && b == 0){
        printf("Diego\n");
    }else if(a == 0 && b == 0){
        printf("Dante\n");
    }else{
        printf("Vicente\n");
    }
    return 0;
}