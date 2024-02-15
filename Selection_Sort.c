#include<stdio.h>
#define max 5

void swap(int *m,int *n){
	*m=(*m)^(*n);
	*n=(*m)^(*n);
	*m=(*m)^(*n);
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
    int arr[max]={22,6,12,13,2};
    selection_sort(arr);
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);
}