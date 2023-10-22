#include <stdio.h>
int main(){
    int n, element, numarrlen=0;
    printf("How many element would you like in yor array? Enter the integer: ");
    scanf("%i",&n);
    int numarr[n];
    printf("\n");
    printf("Please enter %i elements\n", n);
    for (int i=0; i<n; i++){
        scanf("%i",&numarr[i]);
    }
    int removeduparr[n];

    for(int a=0; a<n; a++){
        int isUniqe=1;
        for(int j=0; j<numarrlen; j++){
            if(numarr[a]==removeduparr[j]){
                isUniqe=0;
                break;
            }
        }
        if(isUniqe){
            removeduparr[numarrlen]=numarr[a];
            numarrlen++;
        }
    }
    printf("The new integer array that removed duplicate elements is : ");
        for(int i=0; i<numarrlen; i++){
            printf(" %i ",removeduparr[i]);
        }
    return 0;
}










