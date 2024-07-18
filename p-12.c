#include<stdio.h>
void main()
{
    int add(int x,int y);
    int z;
    printf("This progrem is example of function\n");
    z=add(2,3);
    printf("The addition=%d",z);

}
int add(int x,int y)
{
    return(x+y);
}
