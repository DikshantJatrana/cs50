#include <stdio.h>

float avg(int arr[],int n)
{
  float avg;
  int sum =0;
  for(int i=0;i<n;++i)
  {
    sum = sum + arr[i];
  }
  return avg=(float)sum/(float)n;
}

int main() {

  int n;

  printf("Enter number of elements: ");
  scanf("%d", &n);
  
  int marks[n];

  for(int i=0; i < n; ++i) {
    printf("Enter number :- ");
    scanf("%d", &marks[i]);
  }

  float average = avg(marks,n);
  printf("the average of marks is %f",average);
}
