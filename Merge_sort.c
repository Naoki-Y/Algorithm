#include<stdio.h>
#include <math.h>
#define size 8
void sorting(int array[],int array_size,int left, int  right);

int main(void)
{
  int array[size] = {2,7,29,12,1,11,9,13};   //ソートする値
  int i;
  int left = 0;
  int right  = 7;

  printf("Sort前: ");
  for (i = 0; i < size; i++) {
    printf("%d ", array[i]);  //sort前
  }
  printf("\n");

  sorting(array, size, left, right);

  printf("Sort後: ");
  for (i = 0; i < size; i++)
  {
    printf("%d ", array[i]); //sort後
  }
  printf("\n");

  return 0;
}

void sorting(int array[],int array_size,int left, int  right)  //ソート(再帰)
{
  int i,j,k;
  int mid;
  int new[size];  //スタック?
  if (left < right) {
   mid = (left + right)/2; // 真ん中
   sorting(array, size, left, mid);  // 左半分整列
   sorting(array, size, mid+1, right);  // 右半分整列
   for (i = mid; i >= left; i--)
   {
     new[i] = array[i];
   } // 左半分

   for (j = mid+1; j <= right; j++)
   {
     new[right-(j-(mid+1))] = array[j]; // 右半分を逆順
   }

   i = left; j = right;
   for (k = left; k <= right; k++) {    //比較
     if (new[i] < new[j]) {
       array[k] = new[i++];
     }
     else
     {
       array[k] = new[j--];
     }
   }
 }    //if文終了
}
