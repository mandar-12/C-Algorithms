#include <stdio.h>

int main()
{
    char add = '+';
    char sub = '-';
    char mul = '*';
    char divide = '/';
    char operation;
    
    printf("Enter operation");
    scanf("%c",&operation);
    printf("Enter operands");
    int operand1, operand2;
    float result;
    scanf("%d %d",&operand1, &operand2);
    if(operation == '+'){
        result = operand1 + operand2;
    }else if(operation == '-'){
        result = operand1 - operand2;
    }else if(operation == '*'){
        result = operand1 * operand2;
    }else{
        result = operand1 / operand2;
    }
    printf("%f",result);
    
    return 0;
}