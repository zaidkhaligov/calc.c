#include<stdio.h>
int main(void){
  char operator;
  double num1, num2, result;
  printf("Enter operator (+,-,*,/):\n ");
  scanf(" %c",&operator);
  if (operator=='+' || operator=='-' || operator=='*' || operator=='/'){
    printf("Enter 2 numbers:\n ");
    scanf("%lf %lf",&num1, &num2);
  }
  else{
    printf("Operator is not valid!\n");
    }
    switch(operator){
      case '+':
        result =num1+num2;
        printf("%lf + %lf=%lf\n",num1,num2,result);
        break;
      case '-':
        result=num1-num2;
        printf("%lf - %lf=%lf\n",num1,num2,result);
      break;
      case '*':
        result=num1*num2;
        printf("%lf * %lf=%lf\n",num1,num2,result);
      break;
      case '/': {
        if(num2!=0){
          result=num1/num2;
          printf("%lf / %lf=%lf\n",num1,num2,result);
          break;
        }
        else{
          printf("Division by zero is not valid!");
          break;
        }
      }
      default:
        printf("Invalid operator!");
      }
  return 0;
}
