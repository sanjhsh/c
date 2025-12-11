# include <stdio.h>

int binary_search(int array[], int size,int element){
    int low, high,mid;
    low = 0;
    high = size-1;
    mid = (low+high)/2;

    while(low<=high){
        
        if (element == array[mid]){
            return mid;
        }
        else if (element < array[mid]){
            high=mid-1;
                if (element == array[mid]){
                    return mid;
        }   
        }

        else{
            low = mid+1;
            if (element == array[mid]){
                return mid;
        }
    }
    return -1;
}
}
int main(){

    int array[9]={1,3,4,15,16,40,55};
    int element;
    int size=sizeof(array)/sizeof(array[0]);

    
    printf("enter the element: ");
    scanf("%d",&element);

    int search= binary_search(array,size,element);
    printf("Value %d is at index %d\n",array[search], search);

return 0;
}
