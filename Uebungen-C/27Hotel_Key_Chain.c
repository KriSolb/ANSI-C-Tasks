#include <stdio.h>
#include <stdlib.h>

int main()
{
    int chain[10] = {0,0,0,0,0,0,0,0,0,0};
    int key_num = 0;
    int i = 0;

    printf("Enter keynumber\n");
    fflush(stdin);
    scanf("%d", &key_num);

    key_num = key_num - 1;
    i = key_num;
    chain[i] = 1;

      for (int j = 0; j < 10; j++)
  {
 	printf("%d\t", chain[j]);
  }


    return 0;
}
