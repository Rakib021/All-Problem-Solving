#include <stdio.h>
int main()
{
  long long int n;
  int count = 0, mod, sum = 0;

  scanf("%lld", &n);
  while (n != 0)
  {
    mod = n % 10;
    sum = sum + mod;
    n /= 10;
    count++;
   
  }


  printf("%d\n", sum);
}