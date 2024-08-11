#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#define max 1000

void Randomint(int *arr,int count){ 
    for (int i=0;i<count;i++)
        arr[i]=(rand()%100000)+1; 
} 
 
void insertion_sort(int *arr){
    for (int j=1;j<=max;j++){
        int key = arr[j];
        int i = j-1;
        while(i>=0 && arr[i]>key){
            arr[i+1]=arr[i];
            i--;
        }
        arr[i+1]=key;
    }
}

int main(){
    int arr[max];
    Randomint(arr,max);
    clock_t begin = clock();
    insertion_sort(arr);
    clock_t end = clock();
    double time_spent = end-begin;
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);
    printf("\nTime spent: %f seconds", time_spent / (double)CLOCKS_PER_SEC);
}