#include <stdio.h>
void bubbleSort(int a[]){

int i,j,temp;

for(i=0;i<4;i++){
    for(j=0;j<4-i;j++){
        
        if(a[j]>a[j+1]){

        int temp=a[j];
        a[j]=a[j+1];
        a[j+1]=temp;

        }
    }
}
   
}

int main(){
    int a[5];
    

    printf("Enter the numbers of array: ");
    
    for(int i=0;i<5;i++){
        scanf("%d",&a[i]);
        printf(" %d\n %d\n %d\n %d\n %d\n",a[0],a[1],a[2],a[3],a[4]);
    }

    bubbleSort(a);

    printf("The new arr is:\n %d\n %d\n %d\n %d\n %d\n",a[0],a[1],a[2],a[3],a[4]);
   
    
}