#include <stdio.h>

int main(){
    int N = 8;
    int vectorUno[N/2];
    int vectorDos[N/2];
    int esHor = 0;
    for(int i = 0 ; i < N/2; i++){
        if(i < 4){
            scanf("%d", &vectorUno);
        } else{
            scanf("%d", &vectorDos);
        }
    }
    if(vectorUno[0] == vectorUno[2]){
        return esHor;
    } 
    if(vectorUno[1] == vectorUno[3]){
        return esHor = 1;
    }
    if(vectorDos[0] == vectorDos[2]){
        return esHor;
    } 
    if(vectorDos[1] == vectorDos[3]){
        return esHor = 1;
    }

}