#include <stdio.h>//Підключення бібліотек
#include <math.h>

typedef struct {
double x;
double y;

} point2D;
double distance(const point2D* a, const point2D* b) {
//Обчислення
return sqrt(pow(a->x - b->x, 2) + pow(a->y - b->y, 2));
}

int main() {
int x, y, r;

//Координати x,y та радіус кола
printf("\n|-----------------Координати кола------------------|\n");
    printf(" Введіть число x: ");
    scanf("%d", &x);
    printf(" Введіть число y: ");
    scanf("%d", &y);
    printf(" Введіть число r: ");
    scanf("%d", &r);
printf("\n|--------------------------------------------------|\n");

point2D circle = { x, y};

//Координати x,y точки А
printf("\n|----------------Координати точки------------------|\n");
    printf(" Введіть число x: ");
    scanf("%d", &x);
    printf(" Введіть число y: ");
    scanf("%d", &y);
printf("\n|--------------------------------------------------|\n");
point2D A = { x, y };
double dst = distance(&circle, &A);

//Відстань між центром кола та точкою А
printf("\n|--------------------Відповідь---------------------|\n");
printf(" Відстань між центром кола та точкою А: %.2f\n", dst);
{
if(dst<r)printf(" Точка A в середині кола");
else if(dst>r)printf (" Точка A зовні кола");
else printf(" Точка A на окружості кола");
}
printf("\n|--------------------------------------------------|\n");
return 0;
}