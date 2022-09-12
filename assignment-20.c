
// 1. Write a function to swap values of two in variables of calling function. (TSRS)

// #include<stdio.h>
// void swap(int*, int*);
// void pointerr(){
//     int a,b;
//     a=5;
//     b=6;
//     printf("original value of a=%d  b=%d\n",a,b);
//     swap(&a,&b);
//     printf("swaped value of a=%d  b=%d\n",a,b);
// }
// void swap(int *a,int *b){
//     int temp;
//     temp=*a;
//     *a=*b;
//     *b=temp;
// }
// int main(){
//     pointerr();
// }


// 2. Write a function to swap strings of two char arrays of calling functions. (TSRS)

// #include<stdio.h>
// #include<string.h>

// void swap(char str1[],char str2[]){
//     char temp[20]="";
//     strcpy(temp,str1);
//     strcpy(str1,str2);
//     strcpy(str2,temp);
// }

// int main(){
//     char str1[20]="bhopal";
//     char str2[20]="lonavala";
//     printf("Strings before swaping \"%s\" \"%s\"\n",str1,str2);
//     swap(str1,str2);
//     printf("Strings After swaping \"%s\" \"%s\"\n",str1,str2);

// }


// 3. Write a function to sort an array of int type values. [ void sort(int *ptr,int size); ]

// #include<stdio.h>
// void sort(int *ptr,int size){
//     for(int j=0;j<size-1;j++)
//         for(int i=j+1;i<size;i++){
//             if(*(ptr+j)>*(ptr+i)){
//                 int temp=*(ptr+j);
//                 *(ptr+j)=*(ptr+i);
//                 *(ptr+i)=temp;
//             }
//         }
// }
// int main(){
//     int ptr[10]={2,9,4,6,2,1,11,19,12,15};
//     int n=10;
//     sort(ptr,n);
//     printf("Sorted array is ");
//     for(int i=0;i<n;i++){
//         printf("%d ",ptr[i]);
//     }
//     return 0;
// }

// 4. Write a program in C to demonstrate how to handle the pointers in the program.



// 5. Write a program to find the maximum number between two numbers using a pointer

// #include<stdio.h>
// int max(int* ,int*);

// int main(){
//     int a,b;
//     printf("Enter 2 numbers:- ");
//     scanf("%d %d",&a,&b);
//     printf("%d is greater between %d and %d",max(&a,&b),a,b);
//     return 0;
// }

// int max(int *a,int *b){
//     if(*a > *b)
//         return *a;
//     else
//         return *b;
// }

// 6. Write a program to calculate the length of the string using a pointer

// #include<stdio.h>

// int length(char*str){
//     int i;
//     for(i=0;*(str+i);i++);
//     return i;
// }
// int main(){
//     char str[20]="";
//     printf("Enter the string:- ");
//     scanf("%s",&str);
//     int len = length(str);
//     printf("Length of %s is %d",str,len);
//     return 0;
// }


// 7. Write a program to count the number of vowels and consonants in a string using a
//     pointer.

#include<stdio.h>
void count(char *name){
    int vowels=0,consonents=0;
    for(int i=0;*(name+i);i++){
        if(*(name+i)=='a' || *(name+i)=='e' || *(name+i)=='i' || *(name+i)=='o' || *(name+i)=='u' || *(name+i)=='A' || *(name+i)=='O' || *(name+i)=='I' || *(name+i)=='E' || *(name+i)=='U')
            vowels++;
        else
            consonents++;
    }
    printf("vowels are %d and consonents are %d",vowels,consonents);
}
int main(){
    char nm[20]="prarthamesh";
    count(&nm);
    return 0;

}


// 8. Write a program to compute the sum of all elements in an array using pointers.

// #include<stdio.h>
// int sum(int *arr){
//     int sum1=0;
//     for(int i=0;i<10;i++){    //array stores 0 in the extra space if value enter is less than 10(size declared of array)
//         sum1+=*(arr+i);    //but it does not store 0 after the declared space therefor it is giving 1048673264 like garbage valur for a[11];
//     }
//     return sum1;
// }
// int main(){
//     int arr[10]={1,2,5,8,11,21,13,15,16,6};
//     int sum1 = sum(arr);
//     printf("Sum of the given array is %d\n",sum1);
// }

// 9. Write a program to print the elements of an array in reverse order.


// #include<stdio.h>
// void revPrint(int *arr,int len){
//     int sum1=0;
//     for(int i=len-1;i>=0;i--){    
//         printf("%d ",*(arr+i));
//     }
// }
// int main(){
//     int len=10;
//     int arr[10]={1,2,5,8,11,21,13,15,16,6};
//     revPrint(arr,len);
// }


// 10. Write a program to print a string in reverse using a pointer


// #include<stdio.h>
// void revStr(char *arr,int len){
//     for(int i=len-1;i>=0;i--){    
//         printf("%c",*(arr+i));
//     }
// }
// int main(){
//     int len;
//     char arr[10]="Harshad";
//     for(len=0;arr[len];len++);
//     revStr(arr,len);
// }
