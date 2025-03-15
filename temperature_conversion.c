/*ctype.h = it is a header file which contains inbuilt functions to handle character in c/c++

    stirng.h = header file which contains inbuilt functions to handle string in c/c++

    toupper()= it is a function used to convert lowercase alphabet to uppercase 
            it is defined in ctype header file
*/



# include <stdio.h>
#include <ctype.h>

int main(){
    char temperature;
    float reading;
    float celcius;


    printf("is the temperature in 'C' or'F'?:\n");
    scanf("%c", &temperature);



    temperature = toupper(temperature);

    printf("what is the reading of the temperature?\n");
    scanf("%f", &reading);

    celcius = (reading*9/5)+32;

    if (temperature =='C'){
        printf("the temperature is already in celcius and it is %f:\n",reading);
        }

    else if (temperature=='F'){
        printf("the temperature is %f in celcius\n:", celcius);
    }

    else {
        printf("the input is invalid");
    }
    
    return 0;

}
