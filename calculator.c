#include <stdio.h>
//Implementation of basic calculator
int main(){
    int a,b;
    char op;
    printf("Enter the operator:");
    scanf("%c",&op);
    printf("Enter the first number:");
    scanf("%d",&a);
    printf("Enter the second number:");
    scanf("%d",&b);    
    switch(op){
        case '+':
            printf("%d + %d = %d",a,b,a+b);
            break;
        case '-':
            printf("%d - %d = %d",a,b,a-b);
            break;
        case '*':
            printf("%d * %d = %d",a,b,a*b);
            break;
        case '/':
            printf("%d / %d = %d",a,b,a/b);
            break;
        default:
            printf("Invalid operator");            
    }
}

// #include <stdio.h>

// int main() {

//   char op;
//   double first, second;
//   printf("Enter an operator (+, -, *, /): ");
//   scanf("%c", &op);
//   printf("Enter two operands: ");
//   scanf("%lf %lf", &first, &second);

//   switch (op) {
//     case '+':
//       printf("%.1lf + %.1lf = %.1lf", first, second, first + second);
//       break;
//     case '-':
//       printf("%.1lf - %.1lf = %.1lf", first, second, first - second);
//       break;
//     case '*':
//       printf("%.1lf * %.1lf = %.1lf", first, second, first * second);
//       break;
//     case '/':
//       printf("%.1lf / %.1lf = %.1lf", first, second, first / second);
//       break;
//     // operator doesn't match any case constant
//     default:
//       printf("Error! operator is not correct");
//   }

//   return 0;
// }
