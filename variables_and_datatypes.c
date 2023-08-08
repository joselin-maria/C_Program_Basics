
1.Addition of two numbers
#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
printf("enter the value a:");
scanf("%d",&a);
printf("enter the value b:");
scanf("%d",&b);
printf("enter the value c:");
scanf("%d",&c);
d=a+b+c;
printf("the sum is :%d",d);
getch();
}


2.Average of 10 elements
#include<stdio.h>
#include<conio.h>

void main()
{
int num1,num2,num3,num4,num5,num6,num7,num8,num9,num10,sum;
float avg;

clrscr();

printf("Enter number 1 :");
scanf("%d\n",num1);
printf("Enter number 2 :");
scanf("%d\n",num2);
printf("Enter number 3 :");
scanf("%d\n",num3);
printf("Enter number 4 :");
scanf("%d\n",num4);
printf("Enter number 5 :");
scanf("%d\n",num5);
printf("Enter number 6 :");
scanf("%d\n",num6);
printf("Enter number 7 :");
scanf("%d\n",num7);
printf("Enter number 8 :");
scanf("%d\n",num8);
printf("Enter number 9 :");
scanf("%d\n",num9);
printf("Enter number 10:");
scanf("%d\n",num10);


sum=num1+num2+num3+num4+num5+num6+num7+num8+num9+num9+num10;
avg=sum/10.0;
printf("The Average is : %f\n",&avg);
getch();

}


3.Square of two integers

#include <stdio.h>
int find_square_number(int num)
{
return num*num;
}
int main()
{
int num1,num2;
printf("Enter the Number 1:");
scanf("%d", &num1);
printf("Enter the Number 2:");
scanf("%d", &num2);
int square_of_number1=find_square_number(num1);
int square_of_number2=find_square_number(num2);
printf("Square of Given Number 1 is: %d",square_of_number1);
printf("Square of Given Number 2 is: %d",square_of_number2);

}


4.Computing distance between two points taking input from the user(Pythagorean Theorem)

#include<stdio.h>
int main()
float x1, y1, x2, y2, distance;
{
printf("Enter point x1 : “);
scanf("%f", &x1);
printf("Enter point y1 : “);
scanf("%f", &y1);
printf("Enter point x2 : “);
scanf("%f", &x2);
printf("Enter point y2 : “);
scanf("%f", &y2);
distance = sqrt( (x2 - x1)*(x2 - x1) + (y2 - y1)*(y2 - y1) );
printf("Distance between the points : %4.f”,distance);
return 0;
}

5.Simple calculator

#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul;
float div;
clrscr();
printf("enter two numbers\n");
scanf("%d %d",&a,&b);
sum=a+b;
sub=a-b;
mul=a*b;
div=a/b;
printf("sum is%d",sum);
printf("difference is %d",sub);
printf("multiplication is %d\n",mul);
printf("division is %f\n",div);
getch();
}

6.Computing area of a rectangle

#include <stdio.h>
int areaRectangle(int, int);
int main()
{
    int l, b, area;
    printf("Enter the length : ");
    scanf("%d", &l);

    printf("Enter the width : ");
    scanf("%d", &b);

    area = areaRectangle(l, b);

    printf("The area of the rectangle : %d", area);

    return 0;
}

int areaRectangle(int length, int width)
{
    return length * width;
}


7.Displaying the largest integer between three

#include <stdio.h>
 
void main()
{
    int num1, num2, num3;
 
    printf("Enter the values of num1, num2 and num3\n");
    scanf("%d %d %d", &num1, &num2, &num3);
    printf("num1 = %d\tnum2 = %d\tnum3 = %d\n", num1, num2, num3);
    if (num1 > num2)
    {
        if (num1 > num3)
        {
            printf("num1 is the greatest among three \n");
        }
        else
        {
            printf("num3 is the greatest among three \n");
        }
    }
    else if (num2 > num3)
        printf("num2 is the greatest among three \n");
    else
        printf("num3 is the greatest among three \n");
}


