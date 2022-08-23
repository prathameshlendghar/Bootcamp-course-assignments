// 1. Write a program to find the Nth term of the Fibonnaci series.

// #include<stdio.h>
// int main(){
//     int a=1,b=1,c,n;
//     printf("the number you want in febonnaci series:- ");
//     scanf("%d",&n);
//     //printf("%d %d ",a,b);
//     for(int i=0;i<=n-2;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         //printf("%d ",c);
//     }
//     printf("the %d therm of febonnaci series is %d ",n,c);
//     return 0;
// }

// 2. Write a program to print first N terms of Fibonacci series

// #include<stdio.h>
// int main(){
//     int a=1,b=1,c,n;
//     printf("the number you want in febonnaci series:- ");
//     scanf("%d",&n);
//     printf("%d %d ",a,b);
//     for(int i=0;i<=n-2;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         printf("%d ",c);
//     }
//     return 0;
// }


// 3. Write a program to check whether a given number is there in the Fibonacci
// series or not.

// #include<stdio.h>
// int main(){
//     int a=1,b=1,c,n,z=0;
//     printf("the number you want check in febonnaci series or not:- ");
//     scanf("%d",&n);
//     for(int i=1;i<=n-2;i++){
//         c=a+b;
//         a=b;
//         b=c;
//         if(c<=n || c==1){
//             if(c==n || c==1){
//                 printf("%d is %dth term of febonnaci sequence",c,i+2);
//                 z++;
//                 break;
//             }
//             else
//                 continue;
//         }
//         else
//             break;
        
//     }
//     if(z!=1){
//         printf("%d is not there in febonacci sequence",n);
//     }
//     return 0;
// }

// 4. Write a program to calculate HCF of two numbers

// #include<stdio.h>
// int main(){
//     int num1,num2,smallnum;
//     printf("enter 2 numbers:- ");
//     scanf("%d %d",&num1,&num2);
//     if(num1>num2)
//         smallnum = num2;
//     else
//         smallnum = num1;
//     for(int i=smallnum;i>=1;i--){
//         if(num1%i==0 && num2%i==0){
//             printf("highedt common factor of %d and %d is %d",num1,num2,i);
//             break;
//         }
//     }
// }


// 5. Write a program to check whether two given numbers are co-prime
// numbers or not


// #include<stdio.h>
// int main(){
//     int num1,num2,smallnum,i;
//     printf("enter 2 numbers:- ");
//     scanf("%d %d",&num1,&num2);
//     if(num1>num2)
//         smallnum = num2;
//     else
//         smallnum = num1;
//     for(i=smallnum;i>=1;i--){
//         if(num1%i==0 && num2%i==0){
//             //printf("highedt common factor of %d and %d is %d",num1,num2,i);
//             break;
//         }
//     }
//     if(i==1)
//         printf(" %d and %d are coprime numbers ",num1,num2);
//     else
//         printf(" %d and %d are not coprime",num1,num2);
// }

// 6. Write a program to print all Prime numbers under 100

// #include<stdio.h>
// int main(){
//     int prime;
//     for(int i = 2;i<=100;i++){
//         prime = 0;
//         for(int j=2;j<=i/2;j++){
//             if(i%j==0){
//                 prime++;
//                 break;
//             }
//         }
//         if(prime==0)
//             printf(" %d",i);
//     }
// }

// 7. Write a program to print all Prime numbers between two given numbers

// #include<stdio.h>
// int main(){
//     int num1,num2,prime;
//     printf("enter 2 no in which to check prime numbers:- ");
//     scanf("%d %d",&num1,&num2);
//     for(int i=num1;i<=num2;i++){
//         prime=0;
//         for(int j=2 ; j<=i/2; j++){
//             if(i%j==0){
//                 prime++;
//                 break;
//             }
//         }
//         if(prime==0){
//             printf(" %d",i);
//         }
//     }
// }

// 8. Write a program to find next Prime number of a given number


// #include<stdio.h>
// int main(){
//     int num1,prime;
//     printf("enter no to find next prime number:- ");
//     scanf("%d",&num1);
//     for(int i=num1+1;;i++){
//         prime=0;
//         for(int j=2 ; j<=i/2; j++){
//             if(i%j==0){
//                 prime++;
//                 break;
//             }
//         }
//         if(prime==0){
//             printf(" %d",i);
//             break;
//         }
//     }
// }

// 9. Write a program to check whether a given number is an Armstrong number
// or not

// #include <stdio.h>
// #include <math.h>
// int main(){
//     int num,arm=0,i,num1,num2,count=0;
//     printf("enter the num to check armstrong or not:- ");
//     scanf("%d",&num);
//     num1=num;
//     num2=num;
//     while(num){
//         num/=10;
//         count++;
//     }    
//     while(num1){
//         i=num1%10;
//         num1=num1/10;
//         arm += pow(i,count);
//     }
//     if(num2==arm){
//         printf("%d is an armstrong num",num2);
//     }
//     else{
//         printf("not\n");
//     }
//     return 0;
// }


// 10. Write a program to print all Armstrong numbers under 1000

// #include<stdio.h>
// #include<math.h>
// int main(){
//     int num,arm,num1,i,count;
    
//     for(int ie=0;ie<=10000;ie++){
//         if(ie>1 && ie<=10)
//             continue;
//         arm=0;
//         count=0;
//         num=ie;
//         num1=num;
//         while(num1){
//              num1/=10;
//             count++;
//         } 
//         while(num){
//             i=num%10;
//             num=num/10;
//             arm += pow(i,count);
//         }
//         if(ie==arm){
//             printf("%d ",ie);
//         }
//     }
// }
