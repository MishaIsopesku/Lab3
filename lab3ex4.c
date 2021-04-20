#include <stdio.h> //Підключення бібліотек
#include <math.h>
int main (){
float a,b,y;
printf ("Введіть 3 числа\n"); //Введеня чисел
printf ("Введіть число a: ");
scanf ("%f", &a);
printf ("Введіть число b: ");
scanf ("%f", &b);
printf ("Введіть число y: ");
scanf ("%f", &y);
if ((a-pow(b,2))<0){ //Обчислення
printf ("Ви ввели не правильне значення");
}
else {
float x = (sqrt(a-pow(b,2))+(sqrt(a*b)+y/2));
printf ("Відповідь: %.2f",x);
return 0;
}
}