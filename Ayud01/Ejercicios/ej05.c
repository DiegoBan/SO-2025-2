#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int num = 0;
    if(fork() > 0){
        for(int i = 0 ; i < 5 ; i++){
            pid_t t = fork();
            num++;
            if(t > 0){
                num = num/2;
                break;
            }else if(t == 0){
                num = num*2;
            }else{
                break;
            }
        }
    }else{
        num = 666;
    }
    printf("%d\n", num);
    return 0;
}

