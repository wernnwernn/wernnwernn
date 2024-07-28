#include<stdio.h>
int main()
{
  int i=0;
  int n=0;

  while (1)
  {
    /* USER CODE END WHILE */
  if (n%400 <200) {
	  printf(i);
	  i++;
	  n++;
  }
  else {
	  printf(i);
	  i--;
	  n++;
  }
    return 0;
}
}
