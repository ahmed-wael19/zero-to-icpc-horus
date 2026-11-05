#include <stdio.h>

int main()
{
    int x, y, z;
printf("please enter x,y,z\n");
scanf("%d %d %d",&x, &y ,&z);
    if (x>=y && x>=z)
    {
        printf("X is the largest and equals %d",x);
    }
    else if (y>=x && y>=z)
    {
        printf("Y is the largest and equals %d",y);
    }
    else 
    {
        printf("Z is the largest and equals %d",z);
    }
    return 0;
}
