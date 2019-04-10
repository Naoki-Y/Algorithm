#include<stdio.h>
#define size 6
void swap(int *x, int *y);
void sorting (int array[], int array_size);
int main(void)
{

  int array[size] = {8,2,4,9,3,6};   //ソートする値
  int i;

  printf("Sort前: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);  //sort前
  }
  printf("\n");

  sorting(array, size);

  printf("Sort後: ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", array[i]); //sort後
  }
  printf("\n");

  return 0;

}

void swap (int *x, int *y) {
  int temp;    // 値を一時保存する変数

  temp = *x;
  *x = *y;
  *y = temp;
}


void sorting (int array[], int array_size) {    //ソート関数
  int i, j;

  for (i = 1; i < array_size; i++) {
    j = i;
    while ((j > 0) && (array[j-1] > array[j])) {
      swap(&array[j-1], &array[j]);
      j--;
    }
  }
}
