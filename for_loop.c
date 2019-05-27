#include <stdio.h>

int main()
{
  int i, num1, num2;
  printf("Eneter 2 values n1,n2 where n1 is less than n2: ");
  scanf("%d,%d", &num1, &num2);

  for(i = num1; i <= num2; i++)
  {
      printf("%d", i);
  }

  printf("\n");
  return 0;
}
