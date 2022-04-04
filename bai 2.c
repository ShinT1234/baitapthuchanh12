#include<stdio.h>

int songuyenc(int arr[], int size);

int main()
{
    int arr[10];
    int i;

    printf("Nhap day so nguyen: \n");
    for(i=1;i<=10;i++){
        printf("So %d : ", i);
        scanf("%d", &arr[i]);
    }
    printf("Day so sau dao nguoc la:\n");
    sothuc(arr,10);
}
int sothuc(int arr[], int size){
    int i;
    for(i=size;i>0;i--){
        printf("%d\n",arr[i]);
    }
}
