#include<stdio.h>
#define max 5

void insertion_sort(int *arr){
    for (int j=1;j<6;j++){
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
    int arr[max]={22,6,12,13,2};
    insertion_sort(arr);
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);
}