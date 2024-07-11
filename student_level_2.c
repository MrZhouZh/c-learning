#include <stdio.h>
#include <string.h>

#define MAX_STUDENTS 100

struct Student {
  char name[50];
  int score;
};

// 定义菜单函数
void displayMenu() {
  printf("\nStudent Management System\n");
  printf("1. Add Student\n");
  printf("2. Display All Students\n");
  printf("3. Calculate Average Score\n");
  printf("4. Find Highest Score\n");
  printf("5. Find Lowest Score\n");
  printf("6. Exit\n");
  printf("Enter your choice: ");
}

// 定义学生函数
void addStudent(struct Student students[], int *count) {
  if (*count >= MAX_STUDENTS) {
    printf("Cannot add more students. Maximum limit reached.\n");
    return;
  }

  printf("Enter name of student: ");
  scanf("%s", students[*count].name);
  printf("Enter score of student: ");
  scanf("%d", &students[*count].score);

  (*count)++;
  printf("Student added successfully.\n");
}

// 定义显示所有学生信息函数
void displayStudents(struct Student students[], int count) {
  if (count == 0)
  {
    printf("No students to display.\n");
    return;
  }

  printf("\nStudents Information:\n");
  for (int i = 0; i < count; i++)
  {
    printf("Name: %s\tScore: %d\n", students[i].name, students[i].score);
  }
}

// 定义计算平均成绩函数
void calculateAverage(struct Student students[], int count) {
  if (count == 0) {
    printf("No scores to calculate average score.\n");
    return;
  }

  int sum = 0;
  for (int i = 0; i < count; i++)
  {
    sum += students[i].score;
  }

  double average = (double)sum / count;
  printf("Average score is %.2f\n", average);
}

// 定义找到最高成绩函数
void findHighestScore(struct Student students[], int count) {
  if (count == 0) {
    printf("No students to find highest score.\n");
    return;
  }

  int highest = students[0].score;
  for (int i = 0; i < count; i++)
  {
    if (students[i].score > highest) {
      highest = students[i].score;
    }
  }

  printf("Highest score: %d\n", highest);
}

// 定义找到最低成绩函数
void findLowestScore(struct Student students[], int count) {
  if (count == 0) {
    printf("No students to find lowest score.\n");
    return;
  }

  int lowest = students[0].score;
  for (int i = 0; i < count; i++)
  {
    if (students[i].score < lowest) {
      lowest = students[i].score;
    }
  }

  printf("Lowest score: %d\n", lowest);
}

int main() {
  struct Student students[MAX_STUDENTS];
  int count = 0;
  int choice;

  while (1)
  {
    displayMenu();
    scanf("%d", &choice);

    switch (choice)
    {
    case 1:
      addStudent(students, &count);
      break;
    case 2:
      displayStudents(students, count);
      break;
    case 3:
      calculateAverage(students, count);
      break;
    case 4:
      findHighestScore(students, count);
      break;
    case 5:
      findLowestScore(students, count);
      break;
    case 6:
      printf("Exiting...\n");
      return 0;
    default:
      printf("Invalid choice. Please try again.\n");
    }
  }

  return 0;
}
