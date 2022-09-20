

// 1. Define a function to input variable length string and store it in an array without
// memory wastage.
// // #include<stdio.h>


// // int main(){
// //     int j=1,i=0;
// //     char c;
// //     char *ptr;
// //     ptr=(char *)malloc(sizeof(char));
// //     while(c!='\n'){
// //         c= getc(stdin);
// //         j++;
// //         ptr=(char *)realloc(ptr,j*sizeof(char));
// //         ptr[i]=c;
// //         i++;
// //     }
// //     ptr[i]='\0';
// //     printf("%s\n",ptr);

////      free(ptr);


// // }                                                                                       //THIS IS JUST PRACTICE OF VOID POINTER 


// // #include<stdio.h>
// // int main(){
// //     void *p=NULL;
// //     int b=9;
// //     int a[10]={1,5,3,7,5,99,13};
// //     p=&b;
// //     printf("%d",*(int *)p);
// // }
// a


// #include<stdio.h>
// int main(){
//     char *ptr;
//     char a;
//     int j=1,i=0;
//     ptr = (char *)malloc(sizeof(char));
//     while(a!='\n'){
//         a=getc(stdin);
//         j++;
//         //free(ptr);
//         //ptr=NULL;
//         ptr = (char*)realloc(ptr,j*sizeof(char));
//         ptr[i]=a;
//         i++;
//     }
//     ptr[i]='\0';
//     printf("%s",ptr);

//     return 0;
// }


//2. Write a program to ask the user to input a number of data values he would like to
//   enter then create an array dynamically to accommodate the data values. Now take
//   the input from the user and display the average of data values.

// #include<stdio.h>
// int main(){
//     int *ptr, j=1, i=0, a, sum=0, avg=0;
//     printf("Enter the number of data values:- ");
//     ptr = (int *)malloc(sizeof(int));
    
//     while(a!='\n'){
//         j++;
//         scanf("%d",&a);
//         ptr=(int*)realloc(ptr,j*sizeof(int));
//         *(ptr+i) = a;
//         printf("%d  ",*(ptr+i));
//         sum+=*(ptr+i);
//         i++;
//         // printf("%d ",i);
//     }

//     avg = sum/i;

//     printf("the average of the number you entered is %d",avg);


//     return 0;
// }


// 3. Write a program to calculate the sum of n numbers entered by the user using malloc
// and free.

// #include<stdio.h>
// int main(){
//     int *ptr,a,i=0,j=1,sum=0;
//     ptr = (int*)malloc(sizeof(int));
//     printf("Enter the number:- ");
//     while(a!='\n'){
//         j++;
//         scanf("%d",&a);
//         free(ptr);
//         ptr =(int *)malloc(j*sizeof(int));           //INCOMPLETE QUESTION BECAUSE I AM NOT GETTING HOE TO USE MALLOC AND FREE FUNCTON IN PLACE OF REALLOC AS DESCRIBED BY sIR IN CLASS
//         *(ptr+i)=a;
//         i++;
//     }
//     for(int k=0;k<i;k++){
//         sum+=*(ptr+k);
//     }
//     printf("The sum is %d \n",sum);
//     free(ptr);
// }



// 4. Write a program to input and print text using dynamic memory allocation.

// #include<stdio.h>
// int main(){
//     char *ptr;
//     char a;
//     int i,j;
//     ptr = (char*)malloc(sizeof(char));
//     printf("Enter the string:");
//     for(i=0,j=2;a!='\n';j++,i++){
//         a=getc(stdin);
//         ptr = (char *)realloc(ptr,j*(sizeof(int)));
//         ptr[i]=a;
//     }
//     ptr[i]='\0';
//     printf("Your entered string is %s",ptr);

// }

// 5. Write a program to read a one dimensional array, print sum of all elements along with
// inputted array elements using dynamic memory allocation.


// 6. Write a program in C to find the largest element using Dynamic Memory Allocation.

#include<stdio.h>
int main(){
    int *ptr,j,i,max,min;
    printf("Enter the number of values you want to enter");
    scanf("%d",&j);
    ptr = (int *)malloc(j*sizeof(int));
    if(ptr == NULL){
        printf("Memory allocation is failed");
        return 0;
    }
    printf("Enter the numbers");
    for(int i=0;i<j;i++){
        scanf("%d",(ptr+i));
    }
    max = *ptr;
    for(int k=0;k<j;k++){
        if(*(ptr+k)>max)
            max = *(ptr+k);
    }

    printf("the maximum of the number you entered is %d\n",max);


    return 0;
}

// 7. Write a program to demonstrate memory leak in C.

// #include<stdio.h>
// int main(){
//     int *ptr;
//     ptr = (int *)malloc(4);
//     *ptr = 5;
//     printf("Till here we have pointer pointing the string \n value stored is %d\n\n",*ptr);
//     ptr = NULL;
//     printf("Now as we have stored null in pointer we dont have address to that DMA memory \n therefore we cant access that variable value\n");
//     free(ptr);
//     return 0;
// }


// 8. Write a program to demonstrate dangling pointers in C.


// #include<stdio.h>
// int main(){
//     int *ptr;
//     ptr = (int *)malloc(4);
//     *ptr = 50;
//     printf("Vlaue stored in DMA varable is %d\n\n",*ptr);
//     free(ptr);
//     printf("The DMA block is now freed therefore value to which pointer is pointing is garbage to us %d\n",*ptr);
//     return 0;
// }


// 9. Write a program to allocate memory dynamically of the size in bytes entered by the
// user. Also handle the case when memory allocation is failed.

// #include<stdio.h>
// int main(){
//     int *ptr,j;
//     printf("Enter the number of values you want to enter");
//     scanf("%d",&j);
//     ptr = (int *)malloc(j*sizeof(int));
//     if(ptr == NULL){
//         printf("Memory allocation is failed");
//         return 0;
//     }
//     printf("Enter the numbers");
//     for(int i=0;i<j;i++){
//         scanf("%d",(ptr+i));
//     }
//     for(int i=0;i<j;i++){
//         printf("%d ",*(ptr+i));
//     }
//     free(ptr);
//     ptr=NULL;
//     return 0;
// }


// 10. Find out the maximum and minimum from an array using dynamic memory allocation
// in C.

// #include<stdio.h>
// int main(){
//     int *ptr,j,i,max,min;
//     printf("Enter the number of values you want to enter");
//     scanf("%d",&j);
//     ptr = (int *)malloc(j*sizeof(int));
//     if(ptr == NULL){
//         printf("Memory allocation is failed");
//         return 0;
//     }
//     printf("Enter the numbers");
//     for(int i=0;i<j;i++){
//         scanf("%d",(ptr+i));
//     }
//     max = *ptr;
//     min = *ptr;
//     for(int k=0;k<j;k++){
//         if(*(ptr+k)>max)
//             max = *(ptr+k);
//         if(*(ptr+k)<min)
//             min = *(ptr+k);
//     }

//     printf("the maximum of the number you entered is %d\n",max);
//     printf("the minimum of the number you entered is %d\n",min);


//     return 0;
// }