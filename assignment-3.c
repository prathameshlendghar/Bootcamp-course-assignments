// 1. Write a program to check whether a given number is positive or non-positive.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter no to check positive or neg:- ");
//     scanf("%d",&a);
//     if(a>0){
//         printf("%d is an positive number\n",a);
//     }
//     if(a<=0){
//         printf("%d is an non-positive number\n",a);
//     }
//     return 0;
// }


// 2. Write a program to check whether a given number is divisible by 5 or not

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter number:- ");
//     scanf("%d",&a);
//     if(a%5==0){
//         printf("%d is divisible by 5",a);
//     }
//     if(a%5!=0){
//         printf("%d is not divisible by 5",a);
//     }
// }


// 3. Write a program to check whether a given number is an even number or an odd
// number.


// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter number:- ");
//     scanf("%d",&a);
//     if(a%2==0){
//         printf("%d is Even",a);
//     }
//     if(a%2!=0){
//         printf("%d is Odd",a);
//     }
// }

// 4. Write a program to check whether a given number is an even number or an odd
// number without using % operator.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter number:- ");
//     scanf("%d",&a);
//     if(a&1){
//         printf("%d is odd",a);
//     }
//     else{
//         printf("%d is even",a);
//     }
// }


// 5. Write a program to check whether a given number is a three-digit number or not.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter number:- ");
//     scanf("%d",&a);
//     if(a/100!=0 && a/1000==0){
//         printf("%d is three digit number",a);
//     }
//     else{
//         printf("%d is not a three digit number",a);
//     }
// }

// 6. Write a program to print greater between two numbers. Print one number of both are
// the same.

// #include<stdio.h>
// int main(){
//     int a,b;
//     printf("enter two number to check which is greater:- ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     if(a>=b){
//         if(a==b){
//             printf("%d is equal value of a and b",a);
//         }
//         else{
//          printf("%d is greater than %d",a,b);   
//         }
//     }
//     else{
//         printf("%d is greater than %d",b,a);
//     }
// }


// 7. Write a program to check whether roots of a given quadratic equation are real &
// distinct, real & equal or imaginary roots

// #include<stdio.h>
// int main(){
//     int a,b,c,D;
//     printf("enter coefficient of quadratic equation a,b,c:- ");
//     scanf("%d %d %d",&a,&b,&c);
//     D = b*b-4*a*c;
//     if(D >= 0){
//         if(D>0){
//             printf("roots are real and distinct");
//         }
//         else{
//             printf("roots are real and equal");
//         }
//     }
//     else{
//         printf("roots are imaginary");
//     }
//     return 0;
// }


// 8. Write a program to check whether a given year is a leap year or not.

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the year to check leap of normal :- ");
//     scanf("%d",&year);
//     if(year%100==0 && year%400==0){
//         printf("%d year is century leap year",year);
//     }
//     else if(year%100!=0 && year%4==0){
//         printf("%d year is an leap year",year);
//     }
//     else{
//         printf("year is not an leap year");
//     }
//     return 0;
// }

// 9. Write a program to find the greatest among three given numbers. Print number once
// if the greatest number appears two or three times.

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 3 numbers a,b,c to find greatest:- ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>=b && a>=c){
//         printf("%d is the greatest",a);
//     }
//     else if(b>=a && b>=c){
//         printf("%d is greatest",b);
//     }
//     else{
//         printf("%d is greates",c);
//     }

// }

//Now here is the better version of it

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter 3 numbers a,b,c to find greatest:- ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a>b){
//         if(a>c){
//             printf("%d is the greatest",a);
//         }
//         else
//             printf("%d is greater",c);
//     }
//     else 
//     {
//         if(b>c)
//             printf("%d is greatest",b);
//         else
//             printf("%d is greates",c);
//     }

// }



// 10. Write a program which takes the cost price and selling price of a product from the
// user. Now calculate and print profit or loss percentage.


// #include<stdio.h>
// int main(){
//     float cost,sell;
//     printf("enter cost price nad selling price:- ");
//     scanf("%f %f",&cost,&sell);
//     if(cost<sell){
//         float profit = (sell-cost)/cost*100;
//         printf("%f%% is the profit\n ",profit);     //Doubt was that how to display % in c
//     }
//     else{
//         float loss = (cost-sell)/cost*100;
//         printf("%f%% is the loss\n",loss);
//     }

// }


// 11. Write a program to take marks of 5 subjects from the user. Assume marks are given
// out of 100 and passing marks is 33. Now display whether the candidate passed the
// examination or failed.


// #include<stdio.h>
// int main(){
//     int math,comp,stat,bio,phys;
//     printf("Math:- ");
//     scanf("%d",&math);
//     printf("comp:- ");
//     scanf("%d",&comp);
//     printf("stat:- ");
//     scanf("%d",&stat);
//     printf("bio:- ");
//     scanf("%d",&bio);
//     printf("phys:- ");
//     scanf("%d",&phys);
//     if (math>=33&&math<=100)
//     {
//         printf("math Passed\n");
//     }
//     else{
//         printf("math Failed\n");
//     }

//     if (comp>=33&&comp<=100)
//     {
//         printf("comp Passed\n");
//     }
//     else{
//         printf("comp Failed\n");
//     }
//     if (phys>=33&&phys<=100)
//     {
//         printf("phys Passed\n");
//     }
//     else{
//         printf("phys Failed\n");
//     }
//     if (bio>=33&&bio<=100)
//     {
//         printf("bio Passed\n");
//     }
//     else{
//         printf("bio Failed\n");
//     }
//     if (phys>=33&&phys<=100)
//     {
//         printf("phys Passed\n");
//     }
//     else{
//         printf("phys Failed\n");
//     }
//     return 0;
// }


// 12. Write a program to check whether a given alphabet is in uppercase or lowercase.

// #include<stdio.h>
// int main(){
//     char a = '7';
//     if(a>=65&&a<=90){
//         printf("the alphabet is in uppercase");
//     }
//     else if(a>=97&&a<=122){
//         printf("the alphabet is in lowercase");
//     }
//     else{
//         printf("the given symbol is other than alphabet\n");
//     }
// }

// 13. Write a program to check whether a given number is divisible by 3 and divisible by 2.


// #include<stdio.h>
// int main(){
//     int a = 6;
//     if(a%3==0&&a%2==0){
//         printf("%d is divisible by 3 and 2",a);
//     }
//     else{
//         printf("%d is not divisible by 3 and 2",a);
//     }
// }


// 14. Write a program to check whether a given number is divisible by 7 or divisible by 3.

// #include<stdio.h>
// int main(){
//     int a = 21;
//     if(a%7==0||a%3==0){
//         if (a%7==0)
//         {
//             printf("%d is divisible by 7\n",a);
//         }
//         if(a%3==0){
//             printf("%d is divisible by 3\n",a);
//         }
    
//     }
//     else{
//         printf("%d is not divisible either by 7 or 3\n",a);
//     }
    
// }


// 15. Write a program to check whether a given number is positive, negative or zero.

// #include<stdio.h>
// int main(){
//     int a;
//     printf("enter no to check positive or neg or zero:- ");
//     scanf("%d",&a);
//     if(a>0){
//         printf("%d is an positive number\n",a);
//     }
//     else if(a<0){
//         printf("%d is an negative number\n",a);
//     }
//     else{
//         printf("%d is an zero \n",a);
//     }
//     return 0;
// }



// 16. Write a program to check whether a given character is an alphabet (uppercase), an
// alphabet (lower case), a digit or a special character.

// #include<stdio.h>
// int main(){
//     char ch;
//     printf("enter any character here:- ");
//     scanf("%c",&ch);
//     if (ch>='a'&&ch<='z')
//     {
//         printf("%c is a lower case character",ch);
//     }
//     else if (ch>='A'&&ch<='A')
//     {
//         printf("%c is a upper case character",ch);
//     }
//     else if (ch>='0'&&ch<='9')
//     {
//         printf("%c is a digit",ch);
//     }
//     else{
//         printf("%c is a special symbol",ch);
//     }
    
// }



// 17. Write a program which takes the length of the sides of a triangle as an input. Display
// whether the triangle is valid or not.

// #include<stdio.h>
// int main(){
//     int a,b,c;
//     printf("enter the length of 3 sides of a triangle one by one:- ");
//     scanf("%d %d %d",&a,&b,&c);
//     if(a+b>c && b+c>a && c+a>b){
//         printf("it is a triangle");
//     }
//     else{
//         printf("it is not a triangle");
//     }
// }

// 18. Write a program which takes the month number as an input and display number of
// days in that month

// #include<stdio.h>
// int main(){
//     int month;
//     printf("enter any month here:- ");
//     scanf("%d",&month);
//     if (month==1)
//     {
//         printf("%d is 31",month);
//     }
//     else if (month==2)
//     {
//         printf("%d is 27/28",month);
//     }
//     else if (month==3)
//     {
//         printf("%d is 31",month);
//     }
//     else if (month==4)
//     {
//         printf("%d is 30",month);
//     }
//     else if (month==5)
//     {
//         printf("%d is 31",month);
//     }
//     else if (month==6)
//     {
//         printf("%d is 30",month);
//     }
//     else if (month==7)
//     {
//         printf("%d is 31",month);
//     }
//     else if (month==8)
//     {
//         printf("%d is 31",month);
//     }
//     else if (month==9)
//     {
//         printf("%d is 30",month);
//     }
//     else if (month==10)
//     {
//         printf("%d is 31",month);
//     }
//     else if (month==11)
//     {
//         printf("%d is 30",month);
//     }
//     else if (month==12)
//     {
//         printf("%d is 31",month);
//     }
    
// }