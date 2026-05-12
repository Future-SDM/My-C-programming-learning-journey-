#include <stdio.h>

int main() {
    int a, b;
    char x;
    int sum, subtract, multiply, divide;

    while(1) { // in the while () there one u can wirte 2 or any no. except zero as if you write while(0) then it mean false and also if i write while(2) or while(1) or any other no. in brackets means it true and we can start while loop without condition//
        printf("Enter two values: ");
        scanf("%d %d", &a, &b);

        printf("Enter operator +, -, *, / or q to quit: ");
        // i Added a gap before %c in note in paper to ignore whitespace or you can say if we type any operator and then click enter then the computer will run the code as it have a gap but when if i dont put gap then computer will ignore my operator//
        scanf(" %c", &x);

        if (x == 'q') {
            break;
        }

        switch(x) {
            case '+':
                sum = a + b;
                printf("Addition = %d\n", sum);
                break;

            case '-':
                subtract = a - b;
                printf("Subtraction = %d\n", subtract);
                break;

            case '*':
                multiply = a * b;
                printf("Multiply = %d\n", multiply);
                break;

            case '/':
                if (b != 0) {
                    divide = a / b;
                    printf("Divide = %d\n", divide);
                } else {
                    printf("Error\n");
                }
                break;

            default:
                printf("Invalid operator\n");
        }
    }

    return 0;
}
