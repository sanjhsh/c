# include<stdio.h>
int binary_search(int array[], int size,int element){
    
    int low, high,mid;
    low =0;
    high=size-1;
    mid = (low+high)/2;

    while(low<=high){
        
        if (array[mid]== element){
            return mid;
        }

        if (element<array[mid]){
            mid-1==high;
            
        }

        else{
            low ==mid+1;
            
        }
    }
    return -1;
}
   
    
     
       


int main(){
    int array[9]={1,2,3,4,5,15,16,40,55};
    int element;
    int size=sizeof(array)/sizeof(array[0]);

    
    printf("enter the element: ");
    scanf("%d",&element);

    int search= binary_search(array,size,element);
    printf("%d",search);

return 0;
}
            
   
    
     
       


