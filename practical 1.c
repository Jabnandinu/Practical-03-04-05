Practical 03.
01.
int main()
{
 int num1,num2;
 printf("Enter the first number:");
 scanf("%d",&num1);
 printf("Enter the second number:");
 scanf("%d",&num2);
 if(num1>num2)
 printf("First number is the highest");
 else
 printf("Second number is the highest");
}
___________________________________________________________________
02.
int main()
{
 int num1,num2,num3,ln,sn;
 printf("Enter the first number:");
 scanf("%d",&num1);
 printf("Enter the second number:");
 scanf("%d",&num2);
 printf("Enter the third number:");
 scanf("%d",&num3);
 ln=num1>num2?(num1>num3?num1:num3):(num2>num3?num2:num3);
 sn=num1<num2?(num1<num3?num1:num3):(num2<num3?num2:num3);
 printf("largest number is: %d\n",ln);
 printf("smallest number is: %d\n",sn);
}
___________________________________________________________________
03.
int main()
{
 char en[50];
 float bs,ns,inc;
 printf("Enter Your Name:");
 scanf("%s",&en);
 printf("Enter basic salary:");
 scanf("%f",&bs);
 if(bs>=10000)
 inc=bs*0.15;
 else if(bs>=5000)
 inc=bs*0.10;
 else
 inc=bs*0.05;
 ns=bs+inc;
 printf("Employee name is %s \n New salary is Rs.%.2f",en,ns);
}
___________________________________________________________________
04.
int main()
{
 float rad,dia,cir,area;
 printf("Enter the radius of the circle :");
 scanf("%f",&rad);
 dia= 2*rad;
 cir= 2*3.14159*rad;
 area= 3.14159*(rad*rad);
 printf("Diameter is : %f \n",dia);
 printf("Circumference is : %f \n",cir);
 printf("Area is : %f \n",area);
}
05.
int main()
{
 int num1,num2;
 printf("Enter two integers:");
 scanf("%d %d",&num1,&num2);
 if (num1%num2==0)
 printf("%d is a multiple of number %d\n",num1,num2);
 else
 printf("%d is a not a multiple of %d \n",num1,num2);
}
Practical 04.
01.
int main()
{
 int x;
 printf("Enter a number:");
 scanf("%d",&x);
 if(x%2==0)
 printf("%d Is an Even Number",x);
 else
 printf("%d Is an Odd Number",x);
}
Switch;
int main()
{
 int x;
 printf("Enter a number:");
 scanf("%d",&x);
 switch(x%2==0)
 {
 case 0:printf("%d Is an Even Number",x);break;
 default:printf("%d Is an Odd Number",x);
 }
}
__________________________________________________________________
02.
 int x,y;
 char op;
 printf("Enter number 1:");
 scanf("%d",&x);
 printf("Enter an operator [+ - * /] :");
 scanf("%s",&op);
 printf("Enter number 2:");
 scanf("%d",&y);
 if (op=='+')
 printf("Answer is:%d",x+y);
 else if(op=='-')
 printf("Answer is:%d",x-y);
 else if(op=='*')
 printf("Answer is:%d",x*y);
 else
 printf("Answer is :%d",x/y);
}
___________________________________________________________________
03.
 int ch;
 float rad,pi=3.14159;
 printf("Menu:\n");
 printf("1.Circumference of the circle\n");
 printf("2.Area of a circle\n");
 printf("3.Volume of a sphere\n");
 printf("Enter your choice [1-3]");
 scanf("%d",&ch);
 printf("Enter the radius :");
 scanf("%f",rad);
 switch(ch)
 {
 case 1:
 {
 float cumference=2*pi*rad;
 printf("Circumference= %.2f\n",cumference);break;
 }
 case 2:
 {
 float area=pi*(rad*rad);
 printf("Area= %.2f\n",area);break;
 }
 case 3:
 {
 float volume=(4.0/3.0)*pi*(rad,3);
 printf("Volume= %.2f\n",volume);break;
 }
 default:
 printf("invalid Choice\n");break;
 }
}
___________________________________________________________________
04.
int main()
{
 char ch;
 printf("Enter a Character:");
 scanf("%c",&ch);
 switch(ch)
 {
 case 'a':
 case 'A':
 case 'e':
 case 'E':
 case 'i':
 case 'I':
 case 'o':
 case 'O':
 case 'u':
 case 'U':
 printf("%c is a Vowel\n",ch);break;
 default:printf("%c is not a vowel\n",ch);break;
 }
}
___________________________________________________________________
05.
int main()
{
 int mon;
 printf("Enter the month number(1-12):");
 scanf("%d",&mon);
 int days;
 switch (mon)
 {
 case 1:
 case 3:
 case 5:
 case 7:
 case 8:
 case 10:
 case 12:
 days=31;break;
 case 4:
 case 6:
 case 9:
 case 11:
 days=30;break;
 case 2:
 days=28;break;
 default:
 printf("Invalid month number.\n");
 }
 printf("Total number of days in the month:%d\n",days);
}
Practical 05.
01.
While do
int main()
{
 int x;
 while (x<=100)
 {
 printf(" %d",x);
 x++;
 }
}
Do while 
int main()
{
 int x;
 do
 {
 printf(" %d",x);
 x++;
 } while (x<=100);
}
For loop
int main()
{
 for (int x=0;x<=100;x++)
 {
 printf("%d",x);
 }
}
02.
int main()
{
 int m,c,tot,ave;
 for(c=1;c<=10;c++)
 {
 printf("Enter %d marks: ",c);
 scanf("%d",&m);
 tot=tot+m;
 }
 printf("Total is :%d \n",tot);
 ave=tot/10;
 if (ave>=50)
 printf("pass");
 else
 printf("fail");
}
03.
04.
int main()
{
 int num,re=0;
 printf("enter a number:");
 scanf("%d",&num);
 if ( num<0)
 printf("Error: factorial of a negative number is undefined");
 else if (num==0)
 printf("Error:factorial of a negative number is undefined");
 else
 for(int x=1;x<=num;x++)
 {
 re+=x;
 }
 printf("%d",re);
}
___________________________________________________________________
05.
int main()
{
 int num,rem,rev=0;
 printf("enter a number :");
 scanf("%d",&num);
 do
 {
 rem=num%10;
 rev=rem+(rev*10);
 num/=10;
 }while (num!=0);
 printf("%d",rev);
}
06.
07.
int main()
{
 char x[]="Fibonacci sequence";
 for (int y=0;y<=10;y++);
 {
 printf("%s",x[y]);
 }
}
___________________________________________________________________
08.
09.
int main()
{
 char l;
 printf("ASCII value for letter A to Z:\n");
 for(l='A';l<='Z';++l);
 {
 printf("%s:%d\n",l,l);
 }
}
10.
int main()
{
 int x=5;
 for(int y=1;y<=x;y++)
 {
 for(int a=1;a<=y;a++)
 {
 printf("*");
 }
 printf("\n");
 }
}
