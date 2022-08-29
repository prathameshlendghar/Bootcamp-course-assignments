// 1. Write a recursive function to calculate sum of first N natural numbers

#include<stdio.h>
int sum_natural(int n){
    int sum=0;
    if(n==1)
        return 1;
    sum = n + sum_natural(n-1);
    return sum;
}

// 2. Write a recursive function to calculate sum of first N odd natural numbers

int sum_oddNatural(int n){
    int sum=0;
    int j=2*n-1;
    if(j==1)
        return 1;
    sum = j + sum_oddNatural(n-1);
    return sum;
}


// 3. Write a recursive function to calculate sum of first N even natural numbers

int sum_evenNatural(int n){
    int sum=0;
    int j=2*n;
    if(j==0)
        return 0;
    sum = j + sum_evenNatural(n-1);
    return sum;
}

// 4. Write a recursive function to calculate sum of squares of first n natural numbers

int sum_sqrNatural(int n){
    int sum=0;
    int j=n*n;
    if(j==1)
        return 1;
    sum = j + sum_sqrNatural(n-1);
    return sum;
}

// 5. Write a recursive function to calculate sum of digits of a given number

int sumOfDigit(int num){
    int dig,sum;
    if(num==0)
        return 0; 
    dig = num%10;
    sum=dig+sumOfDigit(num/10);
    return sum;
    
}


// 6. Write a recursive function to calculate factorial of a given number

int factorial(int n){
    if(n==0)
        return 1;
    int fact=1;
    fact = n * factorial(n-1);
    return fact;
}

// 7. Write a recursive function to calculate HCF of two numbers

// int hcf(int num1,int num2,int f){
//     if(f==1)
//         return 1;
//     if(num1%f==0 && num2%f==0)
//         return f;
//     hcf(num1,num2,f-1);
// }

// //euclid method saurabh sir

int hcf(int num1,int num2){
    int euc;
    if(num1>num2){
        euc = num1%num2;
        if(euc==0)
            return num2;
        hcf(euc,num2);
    }
    else{
        euc = num2%num1;
        if(euc==0)
            return num1;
        hcf(num1,euc); 
    }
}

// 8. Write a recursive function to print first N terms of Fibonacci series.

// void feb(int a,int b,int c,int count){
//     int count1=count;
//     if(count1==0){
//         a=1;
//         b=1;
//         printf("%d %d ",a,b);
//     }
//     if(count1==c){
//         return;
//     }
//     int third=a+b;
//     a=b;
//     b=third;
//     count1++;
//     printf("%d ",third);
//     feb(a,b,third,count1);
// }

int fibo(int n){
    if(n==0 || n==1){
        return n;
    }
    return fibo(n-1)+fibo(n-2);
}
  

// 9. Write a program in C to count the digits of a given number using recursion.

int no_of_digit(int num){
    if(num == 0)
        return 0;
    return no_of_digit(num/10)+1;
}

// 10. Write a program in C to calculate the power of any number using recursion.

int main(){
    int n=5;
    int sum = sum_natural(5);
    printf("Sum of %d natural number is %d",n,sum);
    printf("\n");
    printf("Sum of %d odd natural number is %d",n,sum_oddNatural(n));
    printf("\n");
    printf("Sum of %d even natural number is %d",n,sum_evenNatural(n));
    printf("\n");
    printf("Sum of %d square of natural number is %d",n,sum_sqrNatural(n));
    printf("\n");

    int num = 3425;
    printf("Sum of %d's digits is %d",num,sumOfDigit(num));
    printf("\n");
    printf("factorial of %d is %d",n,factorial(n));
    printf("\n");

    int num1=6,num2=3;

    // if(num1>num2)
    //     f = num2;
    // else
    //     f = num1;

//    printf("hcf of %d and %d is %d",num1,num2,hcf(num1,num2,f));
    printf("hcf of %d and %d is %d",num1,num2,hcf(num1,num2));
    printf("\n");

    printf("fibonaci is");
    for(int i=0;i<=5;i++){
        printf(" %d ",fibo(i));
    }
    printf("\n");
    int a = 34587;
    printf("the number of digits in %d is %d",a,no_of_digit(a));
    return 0;    

}

