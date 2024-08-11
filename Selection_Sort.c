#include<stdio.h>
#include<stdlib.h>
#define max 10000

void swap(int *m,int *n){
	*m=(*m)^(*n);
	*n=(*m)^(*n);
	*m=(*m)^(*n);
}

void Randomint(int *arr,int count){ 
    for (int i=0;i<count;i++)
        arr[i]=(rand()%1000)+1; 
} 

void selection_sort(int *arr){
    for(int i=0;i<max;i++){
        for(int j=i+1;j<max;j++){
            if(arr[j]<arr[i])
                swap(&arr[j],&arr[i]);
        }
    }
}

int main(){
    int arr[max];
    Randomint(arr,max);
    selection_sort(arr);
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);
}