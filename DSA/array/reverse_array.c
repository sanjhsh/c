# include<stdio.h>
int reverse_array(int n, int array[n]){
    int i;
    for(i=0;i=n;i++){
        array[i]=array[n-1];
        n--;
        printf("%d",array[i]);

    }

}

int main(){
    int array[]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(array[0]);

    reverse_array(size,array);

    return 0;
}