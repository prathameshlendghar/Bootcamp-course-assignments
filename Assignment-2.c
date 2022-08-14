//===================================== ASSIGNMENT-1===============================================//
// writ progrm to print hello student of different line
// #include<stdio.h>
// int main(){
//     printf("Hello\nstudents\n");
//     return 0;
// }


// write prgm to print "Mysirg" in the output

// #include<stdio.h>
// int main(){
//     printf("\"Mysirg\"\n");
//     return 0;
// }


// write prgm to calc area of circle by taking input from user

// #include<stdio.h>
// int main(){
//     int r,c;
//     printf("Enter the radius of the circle: ");
//     scanf("%d",&r);
//     c = 3.14*r*r;
//     printf("Area of the circle is %d sqr unit having radius %d\n",c,r);
// }


// #include<stdio.h>
// int main(){
//     double a = 'b';
//     printf("%lf\n",a);
//     return 0;
// }

// #include<stdio.h>
// int main(){
//     int y = printf("prathamesh");
//     int x = printf("ineuron");
//     printf("%d\n%d\n",y,x);

//   //  printf(printf("abcd"));
//     return 0;
// }

// #include<stdio.h>
// void main(){
//     printf("ender time in format od HH:MM  :- ");
//     scanf("%s",
// }

//------------------------------Assignment 2 -------------------------------------------//


//1.Write a program to print unit digit of a given number

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the digit:- ");
//     scanf("%d",&a);
//     int unitDigit = a%10;
//     printf("The unit digit of %d is %d\n",a,unitDigit);
//     return 0;
// }

//2.Write a program to print a given number without its last digit.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter the digit:- ");
//     scanf("%d",&a);
//     int unitDigit = a/10;
//     printf("The number without its unit digit of %d is %d\n",a,unitDigit);
//     return 0;
// }


//3.Write a program to swap values of two int variables

// #include<stdio.h>
// int main(){
// int a,b,c;
// printf("Enter two number to seap using third variable:- ");
// scanf("%d %d",&a,&b);
// printf("value of a is %d\n",a);
// printf("value of b is %d\n",b);
// c=b;
// b=a;
// a=c;
// printf("now the swaped values are\nvalue of a is %d\nvalue of v is %d\n",a,b);
// return 0;
// }


//4.Write a program to swap values of two int variables without using a third variable.


// #include<stdio.h>
// int main(){
// int a,b;
// printf("Enter two number to swap without using third variable:- ");
// scanf("%d %d",&a,&b);
// printf("value of a is %d\n",a);
// printf("value of b is %d\n",b);
// // a=a*10+b;
// // b=a/10;
// // a=a%10;
// a=a+b;
// b=a-b;
// a=a-b;

// printf("now the swaped values are\nvalue of a is %d\nvalue of b is %d\n",a,b);
// return 0;
// }


//5.Write a program to input a three-digit number and display the sum of the digits.

// #include<stdio.h>
// int main(){
//     int a,b=0;
//     printf("enter the three digit number:- ");
//     scanf("%d",&a);
//     while(a!=0){
//         b+=a%10;
//         a=a/10;
//     }
//     printf("Addition of two numbers is %d \n",b);
//     return 0;
// }

//6.Write a program which takes a character as an input and displays its ASCII code.

// #include<stdio.h>
// int main(){
//     char a;
//     printf("Enter the character to print ASCII code:- ");
//     scanf("%c",&a);
//     printf("ASCII value of %c is %d\n",a,a);
//     return 0;
// }

//7.Write a program to find the position of first 1 in LSB.




//8.Write a program to check whether the given number is even or odd using a bitwise
//operator.

// #include<stdio.h>
// int main()
// {
//     int a,b=0;
//     printf("Enter the number to print binary of it:- ");
//     scanf("%d",&a);
//     printf("Binery code of %d is ",a);
//     while (a!=0)
//     {
//         b=(b+a%2)*10;       ///b=b+a%2*10 is wrong approachfirstly bcz firstly b me value assign karo and then whole value ko multiply by 10
//         a/=2;                // cleared doubt
//         //b*=10;
//         /* code */
//     }
//     //printf("bin %d\n",b);
//     while (b!=0)
//     {
//         a+=b%10;                     //     a+=b%10*10;
//         b/=10;
//         a*=10;
//         /* code */
//     }
//     printf("%d",a/10);
//     return 0;
    
// }


//9. Write a program to print size of an int, a float, a char and a double type variable

// #include<stdio.h>
// int main(){
//     int a;
//     float f;
//     char c;
//     double d;
//     printf("int= %d byte\n",sizeof(a));
//     printf("float= %d byte\n",sizeof(f));
//     printf("char= %d byte\n",sizeof(c));
//     printf("double= %d byte\n",sizeof(d));
//     return 0;
// }

//10. Write a program to make the last digit of a number stored in a variable as zero.
//(Example - if x=2345 then make it x=2340)
// #include<stdio.h>
// int main(){
//     int a;
//     printf("Enter the number :- ");
//     scanf("%d",&a);
//     a=(a/10)*10;
//     printf("%d",a);
// }

//11. Write a program to input a number from the user and also input a digit. Append a
//digit in the number and print the resulting number. (Example - number=234 and
//digit=9 then the resulting number is 2349)

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("Enter the number :- ");
//     scanf("%d",&a);
//     //a=(a/10)*10;
//     printf("Enter the number wanted at last place :- ");
//     scanf("%d",&b);
//     a=(a/10)*10+b;
//     printf("%d",a);
//     return 0;
// }


//12. Assume price of 1 USD is INR 76.23. Write a program to take the amount in INR and
//convert it into USD.
// #include<stdio.h>
// int main(){
//     float a,b;
//     printf("enter the value in INR :- ");
//     scanf("%f",&a);
//     b = a/76.23;
//     printf("value of %f ruppee in USD is %f dollers\n",a,b);
//     return 0;
// }


//13. Write a program to take a three-digit number from the user and rotate its digits by
//one position towards the right.

#include<stdio.h>
int main(){
    int a,b=0;
    printf("enter the three digit number:- ");
    scanf("%d",&a);
    while(a!=0){
        b=(b+a%10)*10;
        a=a/10;
    }
    printf("reverse of numbers is %d \n",b/10);
    return 0;
}