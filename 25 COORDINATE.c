#include<stdio.h>
int main(){

int x,y;
scanf("%d %d", &x,&y);
if(x>=0 && y>=0)
{
    printf("First quardant\n");
}
else if(x<0 && y>0)
{
    printf("Second quardant\n");
}
else if(x<0 && y<0)
{
    printf("Third quardant\n");
}
else
{
    printf("Four quardant\n");
}


return 0;
}