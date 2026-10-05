#include <stdio.h>
#include <string.h>

int main(void) {
    char name[50];

    printf("What is your name?");
    scanf("%s", name);

    size_t length = strlen(name);

    printf("Your name is %s.\n", name);
    printf("Your name has %d letters.\n", length);
    
    return 0;
}
