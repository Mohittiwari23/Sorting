#include<stdio.h>
#include<stdlib.h>
#define max 20

void Randomint(int *arr,int count){ 
    for (int i=0;i<count;i++)
        arr[i]=(rand()%100)+1; 
} 

void swap(int *m,int *n){
    int temp;
    temp=*m;
    *m=*n;
    *n=temp;
}

int partition(int *arr, int p, int r){
    int x=arr[r];
    int i,j;
    i=p-1;
    for(j=p;j<r;j++){
        if(arr[j]<=x){
            i++;
            swap(&arr[i],&arr[j]);
        } 
    }
    swap(&arr[i+1],&arr[r]);
    return i+1;   
}
void quick_sort(int *arr,int p,int r){
    if(p<r){
        int q=partition(arr,p,r);
        quick_sort(arr,p,q-1);
        quick_sort(arr,q+1,r);
    }
}

int main(){
    int arr[max];
    Randomint(arr,max);
    printf("Original Array: ");
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);    
    quick_sort(arr,0,max-1);
    printf("\nSorted Array: ");
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);    
}
