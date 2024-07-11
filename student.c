#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
  char name[50];
  int score;
};

int main() {
  struct Student students[MAX_STUDENTS];
  int n, i;

  printf("Enter the number of students: ");
  scanf("%d", &n);

  if (n > MAX_STUDENTS) {
    printf("Error: Number of students exceeds the maxium limit of %d\n", MAX_STUDENTS);
    return 1;
  } else if (n <= 0) {
    printf("Error: Number of students must be greater than 0.\n");
    return 1;
  }

  for (i = 0; i < n; i++)
  {
    printf("Enter the name of student %d:\n", (i + 1));
    scanf("%s", students[i].name);
    printf("Enter the score of student %d:\n", (i + 1));
    scanf("%d", &students[i].score);
  }

  printf("\nStudent Information:\n");
  for (i = 0; i < n; i++)
  {
    printf("Name: %s, Score: %d\n", students[i].name, students[i].score);
  }

  return 0;
}
