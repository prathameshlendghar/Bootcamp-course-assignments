// 1. Write a program which takes the month number as an input and display
// number of days in that month.

// #include<stdio.h>
// int main(){
//     int month_num;
//     printf("Enter the num of month from 1-12:- ");
//     scanf("%d",&month_num);
//     switch (month_num)
//     {
//     case 1:
//         printf("janauary has 31 days");
//         break;
//     case 2:
//         printf("february has 28/29 days");
//         break;
//     case 3:
//         printf("march has 31 days");
//         break;
//     case 4:
//         printf("april has 30 days");
//         break;
//     case 5:
//         printf("may has 31 days");
//         break;
//     case 6:
//         printf("june has 30 days");
//         break;
//     case 7:
//         printf("july has 31 days");
//         break;
//     case 8:
//         printf("auguest has 31 days");
//         break;
//     case 9:
//         printf("september has 30 days");
//         break;
//     case 10:
//         printf("october has 31 days");
//         break;
//     case 11:
//         printf("november has 30 days");
//         break;
//     case 12:
//         printf("december has 31 days");
//         break;
//     default:
//         printf("you have entered a wrong number of month");
//     }
// }


// 2. Write a menu driven program with the following options:
// a. Addition
// b. Subtraction
// c. Multiplication
// d. Division
// e. Exit

// #include<stdio.h>
// int main(){
//     char option;
//     int a=10,b=5,exit=1;
//     while(option!='e'){
//         printf("Enter the operation to perform\na. Addition\nb.Subtraction\nc.Multiplication\nd.Division\ne.Exit\n:- ");
//         scanf("%c",&option);
//         switch (option)
//         {
//         case 'a':
//             printf("Addition of the %d and %d is %d \n\n",a,b,a+b);
//             break;
//         case 'b':
//             printf("Subtraction of the %d and %d is %d\n\n",a,b,a-b);
//             break;
//         case 'c':
//             printf("Multiplication of the %d and %d is %d\n\n",a,b,a*b);
//             break;
//         case 'd':
//             printf("division of the %d and %d is %d\n\n",a,b,a/b);
//             break;
//         case 'e':
//             exit=0;
//            // printf("division of the %d and %d is %d\n\n",a,b,a/b);
//             break;
//         default:
//             printf("you have entered a wrong input try again.");
//         }
//     }
// }



// 3. Write a program which takes the day number of a week and displays a
// unique greeting message for the day.


// #include<stdio.h>
// int main(){
//     int week_day;
//     printf("Enter the day num of a week 1-7:- ");
//     scanf("%d",&week_day);
//     switch (week_day)
//     {
//     case 1:
//         printf("enjoy ur weekend sunday");
//         break;
//     case 2:
//         printf("it first refreshing day productive monday");
//         break;
//     case 3:
//         printf("work towards your goal tuesday today");
//         break;
//     case 4:
//         printf("hey its mid of week lucky wednesday");
//         break;
//     case 5:
//         printf("its thursday respect your teachers");
//         break;
//     case 6:
//         printf("goood friday");
//         break;
//     case 7:
//         printf("weekend is on the way saturday today");
//         break;
//     default:
//         printf("you have entered a wrong number of week");
//     }
// }


// 4. Write a menu driven program with the following options:
// a. Check whether a given set of three numbers are lengths of an
// isosceles triangle or not
// b. Check whether a given set of three numbers are lengths of sides of
// a right angled triangle or not
// c. Check whether a given set of three numbers are equilateral triangle
// or not
// d. Exit

// #include<stdio.h>
// int main(){
//     char operation;
//     int a=4,b=3,c=5;
//     printf("enter what kind of triangle you want to check \n a. Check whether a given set of three numbers are lengths of an isosceles triangle or not\n b. Check whether a given set of three numbers are lengths of sides of a right angled triangle or not\n c. Check whether a given set of three numbers are equilateral triangle or not\n d. Exit:- ");
//     scanf("%c",&operation);
//     switch (operation)
//     {
//         case 'a':
//             switch(a==b||b==c||c==a){
//                 case 1:
//                     printf("triangle is iscoceles");
//                 default:
//                     printf("not a iscoceles triangle");
//             }
//             break;
//         case 'b':
//             switch(a*a+c*c==b*b||b*b+a*a==c*c||c*c+b*b==a*a){
//                 case 1:
//                     printf("Right angled triangle");
//                     break;
//                 default:
//                     printf("not a right angled triangle");
//             }
//             break;
//         case 'c':
//             switch(a==b==c){
//                 case 1:
//                     printf("triangle is equlateral");
//                     break;
//                 default:
//                     printf("trianglr is not equilteral");
//             }
//             break;
//         case 'd':
//             break;
    
//     default:
//         break;
//     }
// }


// 5. Convert the following if-else-if construct into switch case:
// if(var == 1)
// System.out.println("good");
// else if(var == 2)
// System.out.println("better");
// else if(var == 3)
// System.out.println("best");
// else
// System.out.println("invalid");

// #include<stdio.h>
// int main(){
//     int var;
//     printf("enter the number 1-3 :- ");
//     scanf("%d",&var);
//     switch (var)
//     {
//     case 1:
//         printf("good\n");
//         break;
//     case 2:
//         printf("better\n");
//         break;
//     case 3:
//         printf("best\n");
//         break;
//     default:
//         printf("invalid\n");
//     }
// }



// 6. Program to check whether a year is a leap year or not. Using switch
// statement

// #include<stdio.h>
// int main(){
//     int year;
//     printf("enter the year:- ");
//     scanf("%d",&year);
//     switch(year%100){
//         case 0:
//             switch(year%400){
//                 case 0:
//                     printf("year is a leap year");
//                     break;
//                 default:
//                     printf("year is not an leap year");
//             }
//             break;
//         default:
//             switch (year%4)
//             {
//             case 0:
//                 printf("year is a leap year");
//                 break;
            
//             default:
//                 printf("year is not an leap year");
//             }
//     }
// }


//7. Program to take the value from the user as input electricity unit charges
// and calculate total electricity bill according to the given condition . Using
// the switch statement.
// For the first 50 units Rs. 0.50/unit
// For the next 100 units Rs. 0.75/unit
// For the next 100 units Rs. 1.20/unit
// For units above 250 Rs. 1.50/unit
// An additional surcharge of 20% is added to the bill.


// #include<stdio.h>
// int main(){
//     int bill_unit;
//     printf("Enter the bill unit:- ");
//     scanf("%d",&bill_unit);
//     switch(bill_unit>50){
//         case 1:
//             switch(bill_unit>150){
//                 case 1:
//                     switch(bill_unit>250){
//                         case 1:
//                             bill_unit=(bill_unit-250)*1.50 + 50*0.50 + 100 *0.75 + 100*1.20;
//                             break;
//                         case 0:
//                             bill_unit=(bill_unit-150)*1.20 + 50*0.50 + 100 *0.75;
//                             break;
//                     }
//                     break;
//                 case 0:
//                 bill_unit = (bill_unit-50)*0.75 + 50*0.50;
//                 break;
//             }
//             break;
//         case 0:
//             bill_unit*=0.50;
//             break;
//     }
//     bill_unit+=bill_unit*0.2;
//     printf("bill is %d",bill_unit);
// }



// 8. Program to convert a positive number into a negative number and negative
// number into a positive number using a switch statement.


// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter the positive or negative num :-");
//     scanf("%d",&num);
//     switch (num>0)
//     {
//     case 1:
//         num*=-1;
//         printf("neg is %d",num);
//         break;
//     case 0:
//         num*=-1;
//         printf("pos is %d",num);
//     }
// }


// 9. Program to Convert even number into its upper nearest odd number
// Switch Statement.

// #include<stdio.h>
// int main(){
//     int num;
//     printf("enter the even num :-");
//     scanf("%d",&num);
//     switch (num%2)
//     {
//     case 0:
//         num+=1;
//         printf("upper nearest odd is %d",num);
//         break;
//     case 1:
//         printf("Num is not even");
//     }
// }

// 10. C program to find all roots of a quadratic equation using switch case

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int a,b,c,D;
//     double root1,root2;
//     printf("enter coefficient of quadratic eqn :-");
//     scanf("%d %d %d",&a,&b,&c);
//     D=b*b-4*a*c;
//     switch (D>0)
//     {
//     case 1:
//         root1 = (-b+sqrt(D))/2*a;
//         root2 = (-b-sqrt(D))/2*a;
//         printf("real roots of quadratic eqn are %lf %lf",root1,root2);
//     case 0:
//         root1 = (-b+sqrt(D))/2*a;
//         root2 = (-b-sqrt(D))/2*a;
//         printf("imagenary roots of quadratic eqn are %lf %lf",root1,root2);
//     }
// }