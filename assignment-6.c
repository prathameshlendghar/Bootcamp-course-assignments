
// Write a program to calculate sum of first N natural numbers

// #include<stdio.h>
// int main(){
//     int sum=0,n,i;
//     printf("enter how many num to add:- ");
//     scanf("%d",&n);
//     if(n>0){
//     for(int i=1;i<=n;i++){
//         sum+=i;
//     }
//     printf("%d",sum);
//     }
//     else{
//         printf("Enter valid number of numbers");
//     }
// }

// Write a program to calculate sum of first N even natural numbers

// #include<stdio.h>
// int main(){
//     int sum=0,n,i;
//     printf("enter how many even natural num to add:- ");
//     scanf("%d",&n);
//     if(n>0){
//     for(int i=1;i<=n;i++){
//         sum+=i*2;
//     }
//     printf("%d",sum);
//     }
//     else{
//         printf("Enter valid number of numbers");
//     }
// }

// Write a program to calculate sum of first N odd natural numbers

// #include<stdio.h>
// int main(){
//     int sum=0,n,i;
//     printf("enter how many odd natural num to add:- ");
//     scanf("%d",&n);
//     if(n>0){
//     for(int i=1;i<=n;i++){
//         sum+=i*2-1;
//     }
//     printf("%d",sum);
//     }
//     else{
//         printf("Enter valid number of numbers");
//     }
// }


// Write a program to calculate sum of squares of first N natural numbers

// #include<stdio.h>
// int main(){
//     int sum=0,n,i;
//     printf("enter how many square of num to add:- ");
//     scanf("%d",&n);
//     if(n>0){
//     for(int i=1;i<=n;i++){
//         sum+=i*i;
//     }
//     printf("%d",sum);
//     }
//     else{
//         printf("Enter valid number of numbers");
//     }
// }

// Write a program to calculate sum of cubes of first N natural numbers

// #include<stdio.h>
// int main(){
//     int sum=0,n,i;
//     printf("enter how many cubes of num to add:- ");
//     scanf("%d",&n);
//     if(n>0){
//     for(int i=1;i<=n;i++){
//         sum+=i*i*i;
//     }
//     printf("%d",sum);
//     }
//     else{
//         printf("Enter valid number of numbers");
//     }
// }

// Write a program to calculate factorial of a number

// #include<stdio.h>
// int main(){
//     int fact=1,i,n;
//     printf("enter num to calc factorial:- ");
//     scanf("%d",&n);
//     for(i=1;i<=n;i++){
//         fact*=i;
//     }
//     printf("factorial of %d is %d \n",n,fact);
//     return 0;
// }

// Write a program to count digits in a given number

// #include<stdio.h>
// int main(){
//     int digits=0,num,num1;
//     printf("Enter the number you want to check digits of:- ");
//     scanf("%d",&num);
//     num1=num;
//     while (num){
//         num/=10;
//         digits++;
//     }
//     printf("num of digits in %d are %d",num1,digits);
    
// }

// Write a program to check whether a given number is a Prime number or
// not

// #include<stdio.h>
// int main(){
//     int num,i,n=0;
//     printf("enter the num to check if it is prime or not:- ");
//     scanf("%d",&num);
//     for(i=2;i<=num/2;i++){
//         if(num%i==0){
//             n++;
//         }
//     }
//     if(n>0){
//         printf("%d is not prime",num);
//     }else{
//         printf("%d is a prime number",num);
//     }
// }

// 9. Write a program to calculate LCM of two numbers




// 10. Write a program to reverse a given number

// #include<stdio.h>
// int main(){
//     int num,num1,rev=0;
//     printf("Enter the num to rev:- ");
//     scanf("%d",&num);
//     num1=num;
//     for(;num;num/=10){
//         rev += num%10;
//         rev = rev*10;
//     }
//     printf("Reverse of %d is %d",num1,rev/10);
// }