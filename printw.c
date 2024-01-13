#include <stdio.h>

int main(){
    int c;
    int skipLast = 0;

    while ((c = getchar()) != EOF)
    {
        
        if(c == ' ' || c == '\n' || c == '\t' || c == EOF )
        {   
            if(skipLast==0)
            {
                printf("\n");
                skipLast=1;
            }
        } 
        else 
        {
            skipLast=0;
            printf("%c", c);
        }
    }
    if(c==EOF) printf("\n");
} 