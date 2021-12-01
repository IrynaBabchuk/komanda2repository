#include <stdio.h>
#include <stdlib.h>
#define N 14 //розмір масиву
int main() {
    int i, A[14]={23, 46, -11, -43, 99, -34, -67, -22, -89, 4, 12, 55, 68, -31}; 
    //i-індекс елементу масиву
    //A[14]-заданий масив
    int sum=0, k=0, ind, saNeg;
    //sum-сума від'ємних елементів
    //k-кількість від'ємних елементів
    //saNeg-середнє арифметичне від'ємних елементів
    for(i=0;i<N;i++){
        if(A[i]<0){
            sum+=A[i];
            k++;
        }
    }
    saNeg=sum/k;
    for(i=0;i<N;i++){
        ind=0;
        if((i%2==0)&&(A[i]<0)){
            ind=i;
            A[ind]=saNeg;
        }
    }
    int suma=0, n=0, index, saPos;
    //suma-сума додатніх елементів
    //n-кі-сть додатніх елементів
    //saPos-середнє арифметичне додатніх елементів
    for(i=0;i<N;i++){
        if(A[i]>0){
            suma+=A[i];
            n++;
        }
    }
    saPos=suma/n;
    for(i=0;i<N;i++){
        index=0;
        if(i%2==1){
            index=i;
            A[index]=saPos;
        }
    }
    printf("Result:\n");//Виведення нового масиву
    i=0;
    while(i<N){
        printf("%i ", A[i]);
        i++;
    }
return 0;
}