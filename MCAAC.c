#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef struct {
    char nome[22];
} Nome;

void sortStrings(Nome arr[], int n){
    char temp[22];
    for(int i=0; i<n-1; i++){
        for(int j=i+1; j<n; j++){
            if(strcmp(arr[i].nome,arr[j].nome) > 0){
                strcpy(temp, arr[i].nome);
                strcpy(arr[i].nome, arr[j].nome);
                strcpy(arr[j].nome, temp);
            }
        }
    }
    


}
 



int main(){
    int n,i, positivo=0,negativo=0;
    char chara;
    
    
    scanf("%d\n",&n);
    Nome array[n];
    for(i=0;i<n;i++){

    scanf(" %c %[^\n]", &chara,array[i].nome);
    if(chara == '+'){
        positivo = positivo+1;
    }
    else{
        negativo = negativo+1;
    }
    

        
    }
    sortStrings(array, n);
    for(int k=0;k<n;k++){
        printf("%s\n",array[k].nome);
        
    }


    printf("Se comportaram: %d | Nao se comportaram: %d\n",positivo,negativo);

}
