#include <stdio.h>

int main(){
    int N = 8;
    int vectorUno[N/2];
    int vectorDos[N/2];
    int orientacionV1 = 0;
    int orientacionV2 = 0;
    int puntoMay1, puntoMay2, menor1, menor2;
    for(int i = 0 ; i < N/2; i++){
        if(i < 4){
            scanf("%d", &vectorUno);
        } else{
            scanf("%d", &vectorDos);
        }
    }
    if(vectorUno[0] == vectorUno[2]){
        if(vectorUno[0] > vectorUno[2]){
            puntoMay1 = vectorUno[0]
            menor1 = vectorUno[2]
        }
        puntoMay1 = vectorUno[2]
        menor1 = vectorUno[0]
    } 
    if(vectorUno[1] == vectorUno[3]){
        orientacionV1 = 1;
    }
    if(vectorDos[0] == vectorDos[2]){
        if(vectorDos[0] > vectorDos[2]){
            puntoMay1 = vectorDos[0]
            menor1 = vectorDos[2]
        }
        puntoMay1 = vectorDos[2]
        menor1 = vectorDos[0]
    } 
    if(vectorDos[1] == vectorDos[3]){
        orientacionV2 = 1;
    }
    if(orientacionV1 =! orientacionV2){
        
    }
    

}
int Pendiente(){
    int x1, x2, y1, y2, pendiente;
    pendiente = ((y2-y1)/(x2-x1));
    int y;
    y = (pendiente*x1) + (pendiente*x1) + 
}