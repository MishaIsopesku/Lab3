#include <stdio.h>//Підключення бібліотек
#include <math.h>

int main() {
  int counter = 0, method, n;
  
  //Запуск і вихід
  printf("Запуск програми - 1\n");
  printf("Вийти з програми - 2\n");

  while(1) {
    if (counter == 0) {
      printf("\nВвести: "); //Запуск-1 вихід-2
      scanf("%d", &method);
      counter += 1;
    }
    else {
      printf("\nВи можете спробувати ще раз - 1 або вийти з програми - 2\n");
      printf("Ввести: ");//Спробувати ще раз-1 вийти-2
      scanf("%d", &method);
    }
    if (method == 1) {
      printf("\nВведіть число від 1 до 10\n");
      printf("Ввести: ");//Число від 1-10
      scanf("%d", &n);

      switch(n) {
        case 1:printf("------------\nБеліч Олександр\n------------\n"); break;
        case 2:printf("------------\nГлинський Петро\n------------\n"); break;
        case 3:printf("------------\nГригоращук Олександр\n------------\n"); break;
        case 4:printf("------------\nІсопеску Михайло\n------------\n"); break;
        case 5:printf("------------\nКожокар Діана\n------------\n"); break;
        case 6:printf("------------\nНяйко Андрій\n------------\n"); break;
        case 7:printf("------------\nПепін Євген\n------------\n"); break;
        case 8:printf("------------\nСофроній Михайло\n------------\n"); break;
        case 9:printf("------------\nТопало Василь\n------------\n"); break;
        case 10:printf("------------\nУртадо Ортега Олексій\n------------\n"); break;
     


        default:printf("\nВи ввели неправильне значення!\n");
      }
      
    }
    else {
      break;
    }
  }
  return 0;
}