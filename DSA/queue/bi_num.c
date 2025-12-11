# include <stdio.h>
int binary_number(int array[]){
    
    int num1=0;
    int num2=10;
    
    for ( int i=1;i<=5;i++){
        if (i%2!=0){
            num1=num1+1;
            printf("%d,%d",num1,array[i]);
        }

        else{
                num2= num2*10;
                print("%d,%d",num2,array[i]);

        }

    }
}

int main(){
    int array[5];
    func_call= binary_number(array[5]);

    return 0;
}