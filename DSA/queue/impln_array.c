# include<stdio.h>

int imp_array(int array[],int size,int *front,int *rear,int element){
    

    if (*rear==size-1){
        printf("overflow");
    }

    else{
        if (*rear==-1){
            *front=*rear=0;

        }

        else{
            (*rear)++;
        }
    array[*rear]=element;
    }
}

int main(){
    int n,i;
    int element, array[n],size,front,rear;
    
    front=-1;
    rear=-1;
    
    printf("Enter the number of elements for the array: ");
    scanf("%d", &n);


    int arr[n];

    printf("Enter %d integer elements:\n", n);
    for (i = 0; i < n; i++) {
        printf("Element %d: ", i++);
        scanf("%d", &arr[i]);
    }

    printf("\nThe elements in the array are: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("enter a element you want to insert in the queue: ");
    scanf("%d",&element);

    imp_array(array,size,&front,&rear,element);

    return 0;
}