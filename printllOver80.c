#include <stdio.h>

#define MAXLINE 1000 

int getline ( char line[], int maxline);


main(){
    char line[MAXLINE];
    int len;

  /* getline and store it in variable line with its length */  
    while((len = getline(line, MAXLINE)) < 0){
        /* if length is greater than 80, print the line*/
        if( len > 80 ){
            printf("%s", line);
        }
    }
    return 0;
}

int getline ( char s[], int lim ){
    int c, i, j;

    for ( i = 0; i < lim-1 && ( c = getchar() ) != EOF && c != '\n'; ++i ){
        s[i] = c;
    }
    if ( c == '\n' ){
        s[i] = c;
        ++i;
    }
    s[i] = '\0';
    return i;
}
