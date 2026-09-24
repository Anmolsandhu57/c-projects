#include<stdio.h>
int main(){
    char op;
    float a, b, res;
    printf("Enter the operator(+,-,*,/) : ");
    scanf("%c", &op);
    printf("Enter two operands : ");
    scanf("%f %f", &a, &b);
    switch(op){
    case '+' :
    res = a + b;
    break;
    case '-' :
    res = a - b;
    break;
    case '*' :
    res = a * b;
    break;
    case '/' :
    res = a / b;
    break;
    default:
    printf("Invalid Operator");
    return 0;
    }
    printf("%f", res);
    return 0;

}