// 1. Write a function to calculate LCM of two numbers. (TSRS)
// #include<stdio.h>
// int lcm(int,int);
// int main(){
//     int a,b;
//     printf("Enter 2 num to find lcm:- ");
//     scanf("%d %d",&a,&b);
//     printf("Lcm of %d and %d is %d",a,b,lcm(a,b));
// }
// int lcm(int a, int b){
//     for(int i=1;i<=a*b;i++){
//         if(i%a==0 && i%b==0){
//             return i;
//         }
//     }
// }


// 2. Write a function to calculate HCF of two numbers. (TSRS)

// #include<stdio.h>
// int hcf(int,int);
// int main(){
//     int a,b;
//     printf("Enter 2 num to find hcf:- ");
//     scanf("%d %d",&a,&b);
//     printf("Hcf of %d and %d is %d",a,b,hcf(a,b));
// }
// int hcf(int a, int b){
//     int n;
//     if(a<b)
//         n=a;
//     else
//         n=b;
//     for(int i=n;i>=1;i--){
//         if(a%i==0 && b%i==0){
//             return i;
//         }
//     }
// }


// 3. Write a function to check whether a given number is Prime or not. (TSRS)

// #include<stdio.h>
// int prime(int);
// int main(){
//     int a;
//     printf("Enter num to find prime or not:- ");
//     scanf("%d",&a);
//     prime(a)==0?printf("not a prime"):printf("is a prime");
// }
// int prime(int a){
//     for(int i=2;i<=a/2;i++){
//         if(a%i==0){
//             return 0;
//         }
//     }
// }



// 4. Write a function to find the next prime number of a given number. (TSRS)

// #include<stdio.h>
// int prime(int);
// int main(){
//     int a;
//     printf("Enter num to find next prime:- ");
//     scanf("%d",&a);
//     int j = prime(a);
//     printf("%d ",j);
// }
// int prime(int n){
//     int prime;
//     for(int j=n+1;;j++){
//         prime=0;
//         for(int i=2;i<=j/2;i++){
//             if(j%i==0){
//                 prime++;
//                 break;
//             }
//         }
//         if (prime==0){
//             return j;
//         }
//     }
// }

// 5. Write a function to print first N prime numbers (TSRN)

// #include<stdio.h>
// void prime(int);
// int main(){
//     int a;
//     printf("Enter how many prime num to find:- ");
//     scanf("%d",&a);
//     prime(a);
// }
// void prime(int n){
//     int prime,count=0;
//     for(int j=2;;j++){
//         prime=0;
//         for(int i=2;i<=j/2;i++){
//             if(j%i==0){
//                 prime++;
//                 break;
//             }
//         }
//         if (prime==0){
//             count++;
//             printf("%d ",j);
//         }
//         if(count==n){
//             break;
//         }
//     }
// }


// 6. Write a function to print all Prime numbers between two given numbers. (TSRN)

// #include<stdio.h>
// void prime(int,int);
// int main(){
//     int a,b;
//     printf("Enter 2 num to find prime between them:- ");
//     scanf("%d",&a);
//     scanf("%d",&b);
//     prime(a,b);
// }
// void prime(int n,int m){
//     int prime;
//     for(int j=n+1;j<m;j++){
//         prime=0;
//         for(int i=2;i<=j/2;i++){
//             if(j%i==0){
//                 prime++;
//                 break;
//             }
//         }
//         if (prime==0){
//             printf("%d ",j);
//         }
//     }
// }

// 7. Write a function to print first N terms of Fibonacci series (TSRN)

// #include<stdio.h>
// void febonacci(int);
// int main(){
//     int a;
//     printf("enter hoe many num you wantin febonacci sequence:- ");
//     scanf("%d",&a);
//     febonacci(a);
// }
// void febonacci(int n){
//     int a,b,c,count=0;
//     a=1;
//     b=1;
//     printf("%d %d ",a,b);
//     while(count<n-2){
//         c=a+b;
//         printf("%d ",c);
//         a=b;
//         b=c;
//         count++;
//     }
// }

// 8. Write a function to print PASCAL Triangle. (TSRN)

// #include<stdio.h>
// void pascal(int);
// int fact(int);
// int main(){
//     int n;
//     printf("enter the length of pascle triangle:- ");
//     scanf("%d",&n);
//     pascal(n);
// }
// void pascal(int n){
//     for(int i=0;i<=n-1;i++){
//         for(int j=0;j<=i;j++){
//             int pas = fact(i)/(fact(j)*fact(i-j));
//             printf(" %d ",pas);
//         }
//         printf("\n");
//     }
// }

// int fact(int r){
//     int j=1;
//     for(int i=1;i<=r;i++){
//         j*=i;
//     }
//     return j;
// }

// 9. Write a program in C to find the square of any number using the function.

// #include<stdio.h>
// int sqr(int);
// int main(){
//     int num;
//     printf("enter the num to sqr:- ");
//     scanf("%d",&num);
//     printf("%d is a square of %d ",sqr(num),num);
//     return 0;
// }
// int sqr(int num){
//     int j = num*num;
//     return j;
// }

// 10. Write a program in C to find the sum of the series (1!/1) + (2!/2) + (3!/3) + (4!/4) + (5!/5) using the
// function.

// #include<stdio.h>
// int fact(int r){
//     int j=1;
//     for(int i=1;i<=r;i++){
//         j*=i;
//     }
//     return j;
// }

// int sum(int n){
//     int sum=0;
//     sum+= (fact(n)/n);
//     return sum;
// }

// int main(){
//     int n=5;
//     printf("%d\n",sum(n));
// }