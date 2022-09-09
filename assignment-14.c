// 1. Write a program to calculate the sum of numbers stored in an array of size 10. Take
// array values from the user.

// #include<stdio.h>
// int main(){
//     int a[10],sum=0;
//     printf("Enter 10 elements in array:- ");
//     for(int i=0;i<=9;i++){
//         scanf("%d",&a[i]);
//         sum+=a[i];
//     }
//     printf("sum of element in array is %d",sum);
//     return 0;
// }

// 2. Write a program to calculate the average of numbers stored in an array of size 10.
// Take array values from the user.


// #include<stdio.h>
// int main(){
//     int a[10],sum=0,n=10;
//     printf("Enter 10 elements in array:- ");
//     for(int i=0;i<=9;i++){
//         scanf("%d",&a[i]);
//         sum+=a[i];
//     }
//     printf("average of element in array is %d",sum/n);
//     return 0;
// }

// 3. Write a program to calculate the sum of all even numbers and sum of all odd
// numbers, which are stored in an array of size 10. Take array values from the user.



// #include<stdio.h>
// int main(){
//     int a[10],sume=0,sumo=0,n=10;
//     printf("Enter 10 elements in array:- ");
//     for(int i=0;i<=9;i++){
//         scanf("%d",&a[i]);
//         if(a[i]%2==0)
//             sume+=a[i];
//         else
//             sumo+=a[i];
//     }
//     printf("sum of even element in array is %d and of odd elements is %d",sume,sumo);
//     return 0;
// }


// 4. Write a program to find the greatest number stored in an array of size 10. Take array
// values from the user.


// #include<stdio.h>
// int main(){
//     int a[10],sume=0,sumo=0,n=10;
//     printf("Enter 10 elements in array:- ");
//     for(int i=0;i<=9;i++){
//         scanf("%d",&a[i]);
//         if(a[i]%2==0)
//             sume+=a[i];
//         else
//             sumo+=a[i];
//     }
//     printf("sum of even element in array is %d and of odd elements is %d",sume,sumo);
//     return 0;
// }


// 5. Write a program to find the smallest number stored in an array of size 10. Take array
// values from the user.

// #include<stdio.h>
// int main(){
//     int a[10],x;
//     printf("Enter 10 num to store in arr");
//     for(int i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     x=a[0];
//     for(int i=0;i<10;i++){
//         if(x>a[i])
//             x=a[i];
//     }
//     printf("smallest num in array is %d",x);
//     return 0;
// }

// 6. Write a program to sort elements of an array of size 10. Take array values from the
// user.
     
// #include<stdio.h>
// int main(){
//     int a[10],x,count;
//     printf("Enter 10 num to store in arr");
//     for(int i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=0;j<10;j++){
//         count=0;
//         for(int i=0;i<=8;i++){
//             if(a[i]>a[i+1]){
//                 x=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=x;
//                 count++;
//             }
//         }
//         if(count ==  0)
//             break;
//     }
//     for(int i=0;i<=9;i++){
//         printf("%d ",a[i]);
//     }
// }


// 7. Write a program to find second largest in an array.Take array values from the user.


// #include<stdio.h>
// int main(){
//     int a[10],x,count;
//     printf("Enter 10 num to store in arr");
//     for(int i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=0;j<10;j++){
//         count=0;
//         for(int i=0;i<=8;i++){
//             if(a[i]>a[i+1]){
//                 x=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=x;
//                 count++;
//             }
//         }
//         if(count ==  0)
//             break;
//     }
//     for(int i=9;i>=0;i--){
//         if(a[i]>a[i-1]){
//             printf("%d",a[i-1]);
//             break;
//         }
//     }
// }



// 8. Write a program to find the second smallest number in an array.Take array values
// from the user.


// #include<stdio.h>
// int main(){
//     int a[10],x,count;
//     printf("Enter 10 num to store in arr");
//     for(int i=0;i<10;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int j=0;j<10;j++){
//         count=0;
//         for(int i=0;i<=8;i++){
//             if(a[i]>a[i+1]){
//                 x=a[i];
//                 a[i]=a[i+1];
//                 a[i+1]=x;
//                 count++;
//             }
//         }
//         if(count ==  0)
//             break;
//     }
//     for(int i=0;i<=9;i++){
//         if(a[i]<a[i+1]){
//             printf("%d",a[i+1]);
//             break;
//         }
//     }
// }

// 9. Write a program in C to read n number of values in an array and display it in reverse
// order. Take array values from the user.


// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the num of element to store in aray:- ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter n num to store in arr");
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=n-1;i>=0;i--){
//         printf("%d ",a[i]);
//     }
// }



// 10. Write a program in C to copy the elements of one array into another array.Take array
// values from the user.

// #include<stdio.h>
// int main(){
//     int n;
//     printf("Enter the num of element to store in aray:- ");
//     scanf("%d",&n);
//     int a[n],b[n];
//     printf("Enter %d num to store in arr",n);
//     for(int i=0;i<n;i++){
//         scanf("%d",&a[i]);
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//         b[i]=a[i];
//     }
//     printf("\n");
//     for(int i=0;i<n;i++){
//         printf("%d ",b[i]);
//     }
// }
