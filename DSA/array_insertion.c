#include <stdio.h>
int main(){
    int array[10]={1,2,3,4,5};
    int size= sizeof(array)/sizeof(array[0]);
    
    int user_input1;
    printf("enter the place where you want to insert the element:");
    scanf("%d",&user_input1);

    int user_input2;
    printf("enter the number you want to insert the element:");
    scanf("%d",&user_input2);

    for(int i=size-1; i>=0;i--){
        array[i]=array[i+1];
        printf("%d\n", array[i]);
    }

return 0;
}