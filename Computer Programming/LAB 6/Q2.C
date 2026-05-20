#include <stdio.h>  
#include <string.h>   
int main()  
{  
    char string[] = "Once in a blue moon";  
    char ch = '-';    
    for(int i = 0; i < strlen(string); i++){  
        if(string[i] == ' ')  
            string[i] = ch;  
    }   
    printf("String after replacing spaces with given character: \n");  
    printf("%s", string);    
    return 0;  
}  