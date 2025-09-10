# include<stdio.h>
int linear_search(int array[],int size, int element){
    for(int i=0; i<size; i++){
        if (array[i]==element){
            return 1;
        }
   
    }
       return -1;
       

}
int main(){
    int array[5]={1,2,3,4,5};
    int element;
    int size=sizeof(array)/sizeof(array[0]);

    
    printf("enter the element: ");
    scanf("%d",&element);

    int search= linear_search(array,size,element);
    printf("%d",search);

return 0;
}