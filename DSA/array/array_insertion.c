#include <stdio.h>
int insert_array(int size,int n,int array[n],int key,int index){
    if(size>=n){
        printf("this is an overflow situation");
    }
    
    
    for(int i=(size-1);i>=index;i++){
        array[i+1]=array[i];
        
    }
        
    array[index]=key;
   return 1;
    
}
void display(int array[],int size){
   
    printf("elements in array:\n ");
    for(int i=0;i<size;i++){
        printf("%d\n",array[i]);
    }
         
}


    

int main() {
   int array[100]={1,2,3,4,5};
   int n=100;
   int size=sizeof(array)/sizeof(array[0]);
   int key;
   int index;
   
   printf("enter the number you want to insert: ");
   scanf("%d",&key);
   
   printf("enter at which you want to insert: ");
   scanf("%d",&index);
   
   insert_array(size,n,array,key,index);
   
   size++;
   display(array,size);
   
   return 0;
}