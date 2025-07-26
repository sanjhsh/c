# include <stdio.h>
int main (){
    int age;
    printf("what is your age:\n");
    scanf( "%d",&age);

    if(age <=0){
        printf("newborn\n");
    }

    else if (0<age==12){
        printf("toddler\n");
    }
    else if (18>age>12){
        printf("teenage\n");
    }
    
    else if (18<age<50){
        printf("young\n");
    }

    else {
        printf("old\n");
    }
    return 0;
}