#include <stdio.h>
int main()
{
    int age[4] = {23, 21, 25, 45};
    int *ptr = age;
   printf("%p\n",age);
   printf("%p\n",ptr);
    return 0;
}
