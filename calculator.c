#include <stdio.h>

int main() {

  char op;
  double a, b;
  printf("Enter an operator (+, -, *, /): ");
  scanf("%c", &op);
  printf("Enter two operands: ");
  scanf("%lf %lf", &a, &b);

  switch (op) {
    case '+':
      printf("%.1lf + %.1lf = %.1lf", a, b, a + b);
      break;
    case '-':
      printf("%.1lf - %.1lf = %.1lf", a, b, a - b);
      break;
    
    default:
      printf("Error! operator is not correct");
  }

  return 0;
}