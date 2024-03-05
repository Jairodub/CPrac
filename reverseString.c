#include <stdio.h>
#include <string.h>

#define LIM 1000
#define IN 1
#define OUT 0

void reverseString(char s [LIM], int len);

/*reverse string using while loop swapping towards the middle*/

int main (){
    /*get string from while loop*/
    int c, len=0;
    char s[LIM]={""};
    int state = OUT;

    while ((c = getchar()) != EOF ){
        if(c != '\n' && c != ' ' && c != '\t' && c != EOF){
            state = IN;
            s[len] = c;
            ++len;
        } else if(state == IN){
            state = OUT;
            reverseString(s, len-1);
            s[len+1] = '\0';
            printf("%s \n", s);
            len = 0;
            memset(s,'\0',LIM);
        }
    }
    reverseString(s, len-1);
        s[len+1] = '\0';
        printf("%s \n", s);
    printf( "\n");
}

void reverseString(char s[LIM], int end){
    char temp;
    int start = 0;

    while( start <
     end){
        temp=s[start];
        s[start] = s[end];
        s[end] = temp;
        ++start;
        --end;
    }
}
