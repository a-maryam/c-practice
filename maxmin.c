#include <stdio.h>
#include <stdlib.h>
void maxmin(double * arr, int n, double ** max, double ** min);

int main() {
  double arr[]= {5, 6 , 7 ,8 , 4, 23, 9, -1};
  double *big, *small;
  maxmin(arr, sizeof(arr)/sizeof(arr[0]), &big, &small);
  printf("Max is: %f \n", *big);
  printf("Min is: %f \n", *small);
}

void maxmin(double * arr, int n, double ** max, double ** min) {
  *max = arr;
  *min = arr;
  double * temp = arr + 1;
  for(; temp < arr + n; temp++) {
    if (** max < *temp) *max = temp;
    if (** min > * temp) *min = temp;
  }
}
