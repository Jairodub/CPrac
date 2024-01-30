#include <stdio.h>

// COUNT FREQUENCY OF EACH CHARACTER AND MAKE HISTOGRAM

int main () {
    char foundCh[60]={};
    int freq[60]={0};
    int count, postn, c, found;
    count = postn = 0;
    // int searchChar(chars, c);

// count characters and make array of frequency
    while((c = getchar()) != EOF){
        found=0;
        if(c == ' ' || c == '\n' || c == '\t' || c == EOF ){
            
        }else{
            for(int i=0; i<60; ++i){ 
                // make an entry for the character with a frequency of one if unique in array of found characters
                if(foundCh[i] ==  c && found == 0){ 
                    found=1;
                    ++freq[i];
                }
            }
                /* make character at current position the present character and
                  increase the current position in found array by one if character not previously found
                */ 
            if(found == 0){ 
                foundCh[postn]=c;
                ++freq[postn];
                ++postn;
            }

        }
    }

    // for(int i=0; i<60; ++i){
    //     // printf("hi");
    //     printf("%c%d  ", foundCh[i], freq[i]);
    // }

    // printf("\n");


// print histogram for frequency of each word

        for(int i = 0; i <= 60; i++){
        for(int j = 0; j < 60; j++){
            // print 1 horizontally going down on the outer loop whenever the frequency is higher than the inner loop index its at
            if(60-i<freq[j]){
                printf("1");
            }
            // print space if index lower and line break at the end of every outer loop
            else(printf(" "));
            if(j==59) printf("\n");
        }
    }

    // print found characters array with position corresponding to frequency as represented on histogram
    for(int i=0; i<(60); ++i){
        printf("%c", foundCh[i]);
    }
    printf("\n");
  
}