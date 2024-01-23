#include<stdio.h>
#include<stdlib.h>

int find2ndlargest(int*, int);

int main(void) {
  int len;
  int * arr;

  printf("Enter the length of the array: ");
  scanf("%d", &len);

  arr = (int *) malloc(len * sizeof(int));
  
  for (int i = 0; i < len; i++) {
    printf("Enter the %d value:", i);
    scanf("%d", &arr[i]);
  }

  printf("\nThank you for the inputs\n");

  int sec_largest = find2ndlargest(arr, len);
  
  printf("The 2nd largest num is: %d", sec_largest);
  return 0;
}

int find2ndlargest(int*arr, int len){
  int max1;
  int max2;

  for (int i = 0; i < len; i++) {
    if (arr[i] > max1) {
      max2 = max1;
      max1 = arr[i];
    }
    else {
      if (arr[i] < max1){
        if (arr[i] > max2) {
          max2 = arr[i];
        }
      }
    }
  }

  return max2; 
}