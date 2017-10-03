#include <stdio.h>

int main() {
  int a[5];
  int n, flag=0;

  scanf("%d %d %d %d %d %d", &(a[0]), &(a[1]), &(a[2]), &(a[3]), &(a[4]), &n);

  for (int i=1; i<=n; i++) {
    /* Imprime resultado da n-esima iteracao do scheduler */
    flag=0;

    if (a[0]==i || i%a[0]==0 ){
      printf("0");
    } else flag++;

    if (a[1]==i || i%a[1]==0 ){
      printf("1");
    } else flag++;

    if (a[2]==i || i%a[2]==0 ){
      printf("2");
    } else flag++;

    if (a[3]==i || i%a[3]==0 ){
      printf("3");
    } else flag++;

    if (a[4]==i || i%a[4]==0 ){
      printf("4");
    } else flag++;

    if(flag==5){
      printf("-");
    }

    printf("\n");

  }

  return 0;
}
