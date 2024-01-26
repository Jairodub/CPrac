#include <stdio.h>

// PRINT EACH WORD IN A FILE SEPARATELY

int main(){
    int c;
    int lastCharWasBlank = 0; // to skip printing new line if the last character handled was blank
                             // maybe use symbolic constant

    while ((c = getchar()) != EOF)
    {
        if(c == ' ' || c == '\n' || c == '\t' || c == EOF )
        {   
            if(lastCharWasBlank==0)
            {
                printf("\n");
                lastCharWasBlank = 1; 
            }
        } 
        else 
        {
            lastCharWasBlank=0;
            printf("%c", c);
        }
    }
    if(c==EOF) printf("\n");
} 