#include <stdio.h>
 
int main(){
 
    int tam, i, j;
 
    while(scanf("%d", &tam) != EOF){
        int mat[tam][tam];
 
        for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++) {
                if((i + j) == (tam - 1)) {
                    mat[i][j] = 2;
                } else if (i == j){
                    mat[i][j] = 1;
                } else {
                    mat[i][j] = 3;
                }
            }
        }
 
        for(i = 0; i < tam; i++){
            for(j = 0; j < tam; j++) {
                printf("%d", mat[i][j]);
            }
            printf("\n");
        }
    }
 
    return 0;
}
