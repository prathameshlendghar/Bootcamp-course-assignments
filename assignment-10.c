// 1. Write a function to calculate the area of a circle. (TSRS)

// #include<stdio.h>
// area(int);
// int main(){
//     int rad;
//     printf("Enter the radius to find area:- ");
//     scanf("%d",&rad);
//     int area1 = area(rad);
//     printf("Area of the circle is %d sq cm\n",area1);
//     return (0);
// }
// int area(int r){
//     int area_circle;
//     area_circle = 3.14*r*r;
//     return area_circle;
// }

// 2. Write a function to calculate simple interest. (TSRS)

// #include<stdio.h>
// double simple_interest(int,int,double);
// int main(){
//     int amount,year;
//     double rate_of_int;
//     printf("Enter the amount:- ");
//     scanf("%d",&amount);
//     printf("Enter how many year:- ");
//     scanf("%d",&year);
//     printf("Enter rate of interest:- ");
//     scanf("%lf",&rate_of_int);
//     double SI = simple_interest(amount,year,rate_of_int);
//     printf("simple interest for %d is %lf",amount,SI);
//     return (0);
// }
// double simple_interest(int amt,int yr,double rate){
//     double si = (amt*rate/100)*yr;
//     return si;
// }

// 3. Write a function to check whether a given number is even or odd. Return 1 if the
// number is even, otherwise return 0. (TSRS)
// #include<stdio.h>
// int even(int);
// int main(){
//     int num;
//     printf("Enter the even or odd num:- ");
//     scanf("%d",&num);
//     int eod = even(num);
//     if(eod == 0){
//         printf("%d is odd",num);
//     }
//     else
//         printf("%d is even",num);
// }
// int even(int num){
//     if (num%2)
//         return 0;
//     else
//         return 1;
// }

// 4. Write a function to print first N natural numbers (TSRN)

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural num to print:- ");
//     scanf("%d",&n);
//     natural(n);
// }
// void natural(int num){
//     for(int i=1;i<=num;i++){
//         printf("%d  ",i);
//     }
// }

// 5. Write a function to print first N odd natural numbers. (TSRN)


// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural num to print:- ");
//     scanf("%d",&n);
//     natural(n);
// }
// void natural(int num){
//     for(int i=1;i<=num;i++){
//         printf("%d  ",2*i-1);
//     }
// }


// 6. Write a function to calculate the factorial of a number. (TSRS)


// #include<stdio.h>
// int fact(int);
// int main(){
//     int n;
//     printf("Enter num to print factoril:- ");
//     scanf("%d",&n);
//     int factorial = fact(n);
//     printf("%d",factorial);
// }
// int fact(int num){
//     int factorial=1;
//     for(int i=1;i<=num;i++){
//         factorial*=i;
//     }
//     return factorial;
// }


// 7. Write a function to calculate the number of combinations one can make from n items
// and r selected at a time. (TSRS)


// #include<stdio.h>
// int pnc(int,int);
// int main(){
//     int n,r;
//     printf("Enter total num of items:- ");
//     scanf("%d",&n);
//     printf("Enter num of items to select at a time:- ");
//     scanf("%d",&r);
//     int combitions = pnc(n,r);
//     printf("%d",combitions);
//     return 0;
// }
// int pnc(int n,int r){
//     int Nfact=1,Rfact=1,N_Rfact=1;
//     for(int i=1;i<=n;i++){
//         Nfact*=i;
//     }
//     for(int i=1;i<=r;i++){
//         Rfact*=i;
//     }
//     for(int i=1;i<=n-r;i++){
//         N_Rfact*=i;
//     }
//     int ncr = Nfact/(Rfact*N_Rfact);
//     return ncr;
// }

// 8. Write a function to calculate the number of arrangements one can make from n items
// and r selected at a time. (TSRS)

// #include<stdio.h>
// int pnc(int,int);
// int main(){
//     int n,r;
//     printf("Enter total num of items:- ");
//     scanf("%d",&n);
//     printf("Enter num of items to arrange at a time:- ");
//     scanf("%d",&r);
//     int permutations = pnc(n,r);
//     printf("%d",permutations);
//     return 0;
// }
// int pnc(int n,int r){
//     int Nfact=1,Rfact=1,N_Rfact=1;
//     for(int i=1;i<=n;i++){
//         Nfact*=i;
//     }
//     for(int i=1;i<=n-r;i++){
//         N_Rfact*=i;
//     }
//     int npr = Nfact/N_Rfact;
//     return npr;
// }

// 9. Write a function to check whether a given number contains a given digit or not.
// (TSRS)

// #include<stdio.h>
// int has_digit(int,int);
// int main(){
//     int num,digit;
//     printf("Enter num:- ");
//     scanf("%d",&num);
//     printf("Enter the digit to find in num:- ");
//     scanf("%d",&digit);
//     int hasDigit = has_digit(num,digit);
//     if(hasDigit==0)
//         printf("%d is not present in %d",digit,num);
//     else
//         printf("%d is present in %d",digit,num);
// }
// int has_digit(int num,int digit){
//     int flag=0;
//     while(num){
//         int i = num%10;
//         num/=10;
//         if(i==digit)
//             flag++;
//     }
//     if(flag>=1)
//         return 1;
//     else
//         return 0;
// }


// 10. Write a function to print all prime factors of a given number. For example, if the
// number is 36 then your result should be 2, 2, 3, 3. (TSRN)

// #include<stdio.h>
// void prime_fact(int);
// int main(){
//     int num;
//     printf("Enter num:- ");
//     scanf("%d",&num);
//     prime_fact(num);
// }
// void prime_fact(int num){    
//     for(int i = 2;i<=num;i++){
//         while(num%i==0){
//             num/=i;
//             printf("%d ",i);
//         }
//     }
// }

