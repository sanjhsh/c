# include<stdio.h>
int main(){
    int array[50];
    int size;
    printf("enter size of the array: ");
    scanf("%d",&size);

    for(int i=0;i<size;i++) {
       
        printf("enter the element of array: \n");
        
        scanf("%d" ,&array[i]);

    }

    printf("elements in array:\n ");
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
        
    }

    return 0;
}