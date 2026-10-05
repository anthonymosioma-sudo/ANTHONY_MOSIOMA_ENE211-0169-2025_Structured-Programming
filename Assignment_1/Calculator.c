#include <stdio.h>

int main(void) {
    int Value1;
    int Value2;
    char Operation;

    //Collection of first and second variables

    printf("Enter the first value");
    scanf("%d",&Value1 );
    printf("Enter the second value");
    scanf("%d",&Value2);

    //Specification of operation

  printf("What operation would you like to perform?"
  "Multiplication.....M\n"
  "Addition...........A\n"
  "Subtraction........S\n"
  "Division...........D\n"
  "Choose M,A,S or D");

    scanf(" %c", &Operation);

    //Execution of operation

    if (Operation == 'M'|| Operation == 'm') {
        printf("Answer: %d\n",Value1 * Value2);
    }
    else if (Operation == 'A'|| Operation == 'a') {
    printf("Answer: %d\n",Value1 + Value2);
}
    else if (Operation == 'S'|| Operation == 's') {
        printf("Answer: %d\n",Value1 - Value2);
    }
    else if (Operation == 'D'|| Operation == 'd') {
        if (Value2 != 0) {
            printf("Answer: %.2f\n", (double)Value1 / Value2);
        } else {
            printf("Division by zero leads to infinity.\n");
        }
        printf("Answer: %d\n",Value1 / Value2);
    }
    else {
        printf("Invalid operation.\n");
    }
    return 0;
}
