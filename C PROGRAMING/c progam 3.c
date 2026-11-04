#include<stdio.h>
int main()
{
    int m1 ,m2 ,m3 ,m4 ,m5 , total;
    float percentage;
    printf("Enter marks in five subjects:");
    scanf("%d %d %d %d %d",&m1,&m2,&m3,&m4,&m5);
    total=m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0f;
    printf("Total marks = %d\n", total);
    printf("percentage= %2f%%\n" , percentage);
    if("m1<35 \\ m2<35 \\ m3<35 \\ m4<35 \\ m5<35")
    {
        printf("Result: fail\n");
    }
    else if(percentage >= 75)
    {
        printf("Result: Distinction/n");
    }
    else if(percentage >= 60)
    {
        printf("Result: First class\n");
    }
    else if(percentage >= 50)
    {
        printf("Result: second class\n");
    }
    else
    {

        printf("Result: pass class\n");
    }
    return 0;
}
