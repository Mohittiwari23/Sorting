#include<stdio.h>
#include<stdlib.h>
#define max 20

void Randomint(int *arr,int count){ 
    for (int i=0;i<count;i++)
        arr[i]=(rand()%100)+1; 
} 
void merge(int *arr,int p,int q,int r) {
    int i,j,k;
    int n1=q-p+1;
    int n2=r-q;
    int L[n1],R[n2];
    for(i=0;i<n1;i++)
        L[i]=arr[p+i];
    for(j=0;j<n2;j++)
        R[j]=arr[q+1+j];
    
    i=j=0;
    k=p;
    while(i<n1 && j<n2) {
        if(L[i]<=R[j]){
            arr[k]=L[i];
            i++;
        }
        else{
            arr[k]=R[j];
            j++;
        }
        k++;
    }
    while(i<n1){
        arr[k]=L[i];
        i++;
        k++;
    }
    while(j<n2){
        arr[k]=R[j];
        j++;
        k++;
    }
}
void merge_sort(int *arr,int p,int r){
    if(p<r){
        int q=(p+r)/2;
        merge_sort(arr,p,q);
        merge_sort(arr,q+1,r);
        merge(arr,p,q,r);
    }
}

int main(){
    int arr[max];
    Randomint(arr,max);
    printf("Original Array: ");
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);    
    merge_sort(arr,0,max-1);
    printf("\nSorted Array: ");
    for(int i=0;i<max;i++)
        printf("%d ",arr[i]);    
}