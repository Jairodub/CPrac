#include <stdio.h>
#include <string.h>

#define LIM 1000
#define IN 1
#define OUT 0

void reverseString(char l [LIM], int len);

/*reverse string using while loop swapping towards the middle*/

int main (){
    /*get string from while loop*/
    int c, len=0;
    char l[LIM]={""};
    int state = OUT;

    while ((c = getchar()) != EOF ){
        if(c != '\n' && c != EOF){
            state = IN;
            l[len] = c;
            ++len;
        } else if(state == IN){
            state = OUT;
            reverseString(l, len-1);
            l[len+1] = '\0';
            printf("%s \n", l);
            len = 0;
            memset(l,'\0',LIM);
        }
    }
    reverseString(l, len-1);
        l[len+1] = '\0';
        printf("%s \n", l);
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
