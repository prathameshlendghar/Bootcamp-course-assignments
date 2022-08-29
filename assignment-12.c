// 1. Write a recursive function to print first N natural numbers

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         natural(n-1);
//         printf("%d ",n);
        
//     }
// }

// 2. Write a recursive function to print first N natural numbers in reverse order

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         printf("%d ",n);
//         natural(n-1);
//     }
// }

// 3. Write a recursive function to print first N odd natural numbers

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         natural(n-1);
//         printf("%d ",2*n-1);
        
//     }
// }

// 4. Write a recursive function to print first N odd natural numbers in reverse order

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         printf("%d ",2*n-1);
//         natural(n-1);
//     }
// }

// 5. Write a recursive function to print first N even natural numbers

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         natural(n-1);
//         printf("%d ",2*n);
//     }
// }

// 6. Write a recursive function to print first N even natural numbers in reverse order

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         printf("%d ",2*n);
//         natural(n-1);
//     }
// }


// 7. Write a recursive function to print squares of first N natural numbers

// #include<stdio.h>
// void natural(int);
// int main(){
//     int n;
//     printf("Enter how many natural numbers to print:- ");
//     scanf("%d",&n);
//     natural(n);
//     return 0;
// }
// void natural(int n){
//     if(n>=1){
//         natural(n-1);
//         printf("%d ",n*n);
//     }
// }

// 8. Write a recursive function to print binary of a given decimal number

// #include<stdio.h>
// int bin(int n){
//     if(n==0)
//         return 0;
//     bin(n/2);
//     printf("%d",n%2);
    
// }

//parikh method

#include<stdio.h>
void bin(int num){
    if(num==0)
        return;
    
    bin(num>>1);
    printf("%d",num&1);
}

int main(){
    bin(35);
    return 0;
}

// 9. Write a recursive function to print octal of a given decimal number


// #include<stdio.h>
// int bin(int n){
//     if(n==0)
//         return 0;
//     bin(n/8);
//     printf("%d",n%8);
    
// }

// int main(){
//     bin(35);
//     return 0;
// }


// 10. Write a recursive function to print reverse of a given number

// #include<stdio.h>
// void rev(int num){
//     if(num==0)
//         return;
//     printf("%d",num%10);
//     rev(num/10);
// }

// int main(){
//     rev(501340);
//     return 0;
// }
