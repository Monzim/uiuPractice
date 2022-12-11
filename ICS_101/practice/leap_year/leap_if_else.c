#include <stdio.h>

int main() {
  int year;
  printf("Enter a year: ");
  scanf("%d", &year);

  if (year % 4 == 0) {
    if (year % 100 == 0) {
      if (year % 400 == 0) {
        printf("The year is a leap year.\n");
      } else {
        printf("The year is a non-leap year.\n");
      }
    } else {
      printf("The year is a leap year.\n");
    }
  } else {
    printf("The year is a non-leap year.\n");
  }

  return 0;
}
