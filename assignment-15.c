// 1. Write a function to find the greatest number from the given array of any size. (TSRS)
// #include<stdio.h>
// int greatest(int a[],int n){
//     int k,greatest=a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]>greatest)
//             greatest=a[i];
//     }
//     return greatest;
// }
// int main(){
//     int n;
//     printf("how many numbers to store in arr:- ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements to store in arr:- ");
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     printf("%d",greatest(a,n));
//     return 0;
// }

// 2. Write a function to find the smallest number from the given array of any size. (TSRS)
// #include<stdio.h>
// int smallest(int a[],int n){
//     int k,smallest=a[0];
//     for(int i=0;i<n;i++){
//         if(a[i]<smallest)
//             smallest=a[i];
//     }
//     return smallest;
// }
// int main(){
//     int n;
//     printf("how many numbers to store in arr:- ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements to store in arr:- ");
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     printf("%d",smallest(a,n));
//     return 0;
// }


// 3. Write a function to sort an array of any size. (TSRS)


// #include<stdio.h>
// void sort(int a[],int n){
//     int k;
//     for(int i=0;i<n-1;i++){
//         for(int j=i;j<n;j++){
//             if(a[i]>a[j]){
//                 k=a[i];
//                 a[i]=a[j];
//                 a[j]=k;
//             }
//         }
//     }
//     for(int i=0;i<n;i++){
//         printf("%d ",a[i]);
//     }
// }

// int main(){
//     int n;
//     printf("how many numbers to store in arr:- ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements to store in arr:- ");
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     sort(a,n);
//     return 0;
// }


// 4. Write a function to rotate an array by n position in d direction. The d is an indicative
//    value for left or right. (For example, if array of size 5 is [32, 29, 40, 12, 70]; n is 2 and
//    d is left, then the resulting array after left rotation 2 times is [40, 12, 70, 32, 29] )

// #include<stdio.h>
// void rotate(int a[],int num_of_ele,int n,int d){
//     if(d==-1){
//         int k;
//         for(int i=0;i<n;i++){
//             k=a[0];
//             for(int j=0;j<num_of_ele;j++){
//                 a[j]=a[j+1];
//             }
//             a[num_of_ele-1]=k;
//         }
//     }
//     else if(d==1){
//         int k;
//         for(int i=0;i<n;i++){
//             k=a[num_of_ele-1];
//             for(int j=num_of_ele-1;j>=0;j--){
//                 a[j]=a[j-1];
//             }
//             a[0]=k;
//         }
//     }
//     for(int i=0;i<num_of_ele;i++){
//         printf("%d ",a[i]);
//     }
// }

// int main(){
//     int arr[5]={32,29,40,12,70};
//     int num_of_ele=5;
//     int n=2;
//     int d = -1;
//     rotate(arr,num_of_ele,n,d);
// }

// 5. Write a function to find the first occurrence of adjacent duplicate values in the array.
//    Function has to return the value of the element.

// #include<stdio.h>
// int first_dup(int arr[],int n){
//     for(int i=0;i<n-1;i++)
//         if(arr[1]==arr[i+1])
//             return arr[i];
// }
// int main(){
//     int arr[] = {2,4,7,3,2,2,9,9,7};
//     printf("frist occurance of duplicate value is %d \n",first_dup(arr,9));
//     return 0;
// }


// 6. Write a function in C to read n number of values in an array and display it in reverse
// order.

// #include<stdio.h>
// void rev(int a[],int n){
//     printf("the elements in array in reverse order are:- ");
//     printf("\n");
//     for(int i=n-1;i>=0;i--)
//         printf("%d ",a[i]);
    
// }
// int main(){
//     int n;
//     printf("how many numbers to store in arr:- ");
//     scanf("%d",&n);
//     int a[n];
//     printf("Enter the elements to store in arr:- ");
//     for(int i=0;i<n;i++)
//         scanf("%d",&a[i]);
//     rev(a,n);
//     return 0;
// }


// 7. Write a function in C to count a total number of duplicate elements in an array.


// #include<stdio.h>
// void duplicateNo(int a[],int n){
//     int b[10]={0},k=0,c[10]={0},no=0;

//     //array ko traverse kiya aur counter ke madat se unique elements ko ek b[] array me store kiya
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=i+1;j<n;j++){
//             if(a[i]==a[j])
//                 count++;    
//         }
//         if (count==0)
//         {
//             b[k]=a[i];
//             k++;
//         }
//     }
//     for(int i=0;i<=10;i++){
//         int frequency = 0;
//         for(int j=0;j<=n;j++){
//             if(b[i]==a[j])
//                 frequency++;
//         }
//         c[i]=frequency;
//         if(c[i]>1)
//             no++;
//     }
//     printf("%d are the duplicate elemets in array",no);
// }

// int main(){
//     int a[10]={5,2,8,11,11,21,18,21,2,5};
//     duplicateNo(a,10);
//     return 0;
// }


// 8. Write a function in C to print all unique elements in an array.

// #include<stdio.h>
// void unique(int a[],int n){
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=i+1;j<n;j++){
//             if(a[i]==a[j])
//                 count++;    
//         }
//         if (count==0)
//             printf("%d ",a[i]);
//     }
// }
// int main(){
//     int a[10]={5,2,8,11,11,21,18,21,2,5};
//     unique(a,10);
//     return 0;
// }



// 9. Write a function in C to merge two arrays of the same size sorted in descending
// order.

// #include<stdio.h>
// void merge_Descending(int arr[],int arr1[],int n){
//     //arranging arr[] and arr1[] individually in descending order
//     for(int i=0;i<n-1;i++){
//         for(int j=i+1;j<n;j++){
//             int k;
//             if(arr[i]<arr[j]){
//                 k=arr[i];
//                 arr[i]=arr[j];
//                 arr[j]=k;
//             }
//             if(arr1[i]<arr1[j]){
//                 k=arr1[i];
//                 arr1[i]=arr1[j];
//                 arr1[j]=k;
//             }
//         }
//     }

//     //merging the descendingly arranged arrays in a single array
//     int arr_merge[2*n];
//     for(int i=0;i<n;i++)
//         arr_merge[i]=arr[i];
//     for(int i=n;i<2*n;i++)
//         arr_merge[i]=arr1[i-n];

//     //printing the merged array
//     for(int i=0;i<2*n;i++)
//         printf("%d ",arr_merge[i]);
// }

// int main(){
//     int n=8;
//     // printf("enter the size of arr:- ");
//     // scanf("%d",&n);
//     int arr[8]={2,5,8,1,9,2,12,87};
//     int arr1[8]={12,15,22,18,25,67,9,10};
//     merge_Descending(arr,arr1,n);
// }


// 10. Write a function in C to count the frequency of each element of an array.

// #include<stdio.h>
// void feequency(int a[],int n){
//     int b[10],k=0,c[10];

//     //array ko traverse kiya aur counter ke madat se unique elements ko ek b[] array me store kiya
//     for(int i=0;i<n;i++){
//         int count = 0;
//         for(int j=i+1;j<n;j++){
//             if(a[i]==a[j])
//                 count++;    
//         }
//         if (count==0)
//         {
//             b[k]=a[i];
//             k++;
//         }
//     }

//     //unique elements wake array se ek element 'i' se uthaya aur 'j' se original array me traverse kiya frequency store ki c[] me
//     for(int i=0;i<=10;i++){
//         int frequency = 0;
//         for(int j=0;j<=n;j++){
//             if(b[i]==a[j])
//                 frequency++;
//         }
//         c[i]=frequency;
//     }

//     //aab unique elements aur uski frequency ke elements ko print kiya

//     printf("the frequency of numbers in array are as follows \n\n ");
//     printf("Ele   freq\n");
//     for(int i=0;i<10 && (a[i] && b[i]);i++){
//         printf("  %d   %d  \n",b[i],c[i]);
//     }
// }
// int main(){
//     int a[10]={5,2,8,11,11,21,18,21,2,5};
//     feequency(a,10);
//     return 0;
// }



// ---------------------------------new aproach--------------------------------------------------\\
// #include<stdio.h>
// void frequency(int arr[],int freq[]){
//     for(int i=0;i<10;i++)
//         freq[arr[i]]++;
// }
// int main(){
//     int arr[10]={10,2,5,43,2,10,25,2,9,6};
//     int freq[100]={0};
//     frequency(arr,freq);
//     for(int i=0;i<100;i++)
//         if(freq[i]!=0)
//             printf("%d ===>  %d\n",i,freq[i]);
// }
