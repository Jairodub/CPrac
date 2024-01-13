#include <stdio.h>
#define IN 1 /* inside a word */
#define OUT 0 /* outside a word */

/* count lines, words, and characters in input */

int main(int argc, char const *argv[])
{
    int c, nl, nw, nc, state; 

    state = OUT;
    nl = nw = nc = 0;
    while ((c = getchar()) != EOF) {
        ++nc;
        if(nc==1)
            ++nl;
        if (c == '\n')
        ++nl;
        if(c == ' ' || c == '\n' || c == '\t')
            state = OUT;
        else if (state == OUT){
            state = IN;
            ++nw;
        }
            
    }
    printf( "The file has: %d-lines, %d-words, and %d-characters\n", nl, nw, nc);
}
