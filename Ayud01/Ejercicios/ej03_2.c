#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    for(int i = 0 ; i < 3 ; i++){
        pid_t t = fork();
        if(t == 0){
            break;
        }
    }
    return 0;
}