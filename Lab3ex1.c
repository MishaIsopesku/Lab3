#include <stdio.h>//Підключення бібліотек
#include <math.h>

int u;
double y(int x, int z)
{
double xz = x * z;
if (u)
{
    //Метод 1 (if)
if (x == 5) return 3 + xz;
if (x == -5) return xz / (7 - z);
if (x == 0) return x;
printf("Ви ввели неправельне значення x\n");
}
else
{
    //Метод 2 (if else if)
if (x == 5) return 3 + xz;
else if (x == -5) return xz /(7 - z);
else if (x == 0) return x; 
printf("Ви ввели неправельне значення x\n");
}
}
int main()
{
int x, z;
printf("Введіть x: ");
scanf("%d",&x);
printf("Введіть z:");
scanf("%d",&z);
printf("\nВиберіть спосіб за яким буде виконуватися программа 0-(if) 1-(if else if)\n");
scanf("%d",&u);
printf("Відповідь: %.2f\n", y(x, z));
return 0;
}