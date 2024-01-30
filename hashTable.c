#define NHASH 29989
#define MULT 31

typedef struct node *nodeptr;
typedef struct node {
    char *word;
    int count;
    nodeptr next;
} node;

nodeptr bin[NHASH];

unsigned int hash( char *p) {
    unsigned int h = 0;
    for ( ; *p; ++p ){
        h = MULT * h + *p;
    }
    return h % NHASH;
}