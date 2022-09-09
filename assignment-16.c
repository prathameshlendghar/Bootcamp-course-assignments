// 1. Write a program to calculate the sum of two matrices each of order 3x3.

// #include<stdio.h>
// void simpleSum(int arr1[3][3],int arr2[3][3]){
//     int b[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             b[i][j] = arr1[i][j]+arr2[i][j];
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//             printf("%d ",b[i][j]);
//         printf("\n");
//     }
// }
// int main(){
//     int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3]={{10,11,12},{13,14,15},{16,17,18}};
//     simpleSum(arr1,arr2);
// }

// 2. Write a program to calculate the product of two matrices each of order 3x3.

// #include<stdio.h>
// void simpleProd(int arr1[3][3],int arr2[3][3]){
//     int b[3][3]={0};
//     for(int i=0;i<3;i++){
//         for(int k=0;k<3;k++){
//             for(int j=0;j<3;j++){
//                 b[i][k] += arr1[i][j]*arr2[j][k];
//             }
//         }
//     }
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//             printf("%d ",b[i][j]);
//         printf("\n");
//     }
// }
// int main(){
//     int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     int arr2[3][3]={{10,11,12},{13,14,15},{16,17,18}};
//     simpleProd(arr1,arr2);
// }

// 3. Write a program in C to find the transpose of a given matrix.

// #include<stdio.h>
// void simpleSum(int arr1[3][3]){
//     int b[3][3];
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             b[j][i] = arr1[i][j];
//         }
//     }
// //original matrix
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//             printf("%d ",arr1[i][j]);
//         printf("\n");
//     }
//     printf("\n\n");

//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++)
//             printf("%d ",b[i][j]);
//         printf("\n");
//     }
// }
// int main(){
//     int arr1[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     simpleSum(arr1);
// }

// 4. Write a program in C to find the sum of right diagonals of a matrix.

// #include<stdio.h>
// int rightDiagonal(int arr[4][4]){
//     int sum=0;
//     for(int i=3,j=0;i>=0,j<4;i--,j++){
//         sum+=arr[j][i];
//     }
//     return sum;
// }
// int main(){
//     int arr[4][4] = {{1,2,3,9},{4,5,6,2},{6,7,8,0},{2,4,6,8}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("\n");
//     printf("sum of right diagonal elements  is %d",rightDiagonal(arr));
// }

// 5. Write a program in C to find the sum of left diagonals of a matrix.

// #include<stdio.h>
// int leftDiagonal(int arr[4][4]){
//     int sum=0;
//     for(int i=0;i<4;i++){
//         sum+=arr[i][i];
//     }
//     return sum;
// }
// int main(){
//     int arr[4][4] = {{1,2,3,9},{4,5,6,2},{6,7,8,0},{2,4,6,8}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("\n");
//     printf("sum of left diagonal elements  is %d",leftDiagonal(arr));
// }

// 6. Write a program in C to find the sum of rows and columns of a Matrix.




// 7. Write a program in C to print or display the lower triangular of a given matrix.



// #include<stdio.h>
// void lowerTriangular(int arr[4][4]){
//     int b[4][4];
//     for(int j=0;j<4;j++){
//         for(int i=0;i<=j;i++){
//             b[j][i]=arr[j][i];
//             printf("%d ",b[j][i]);
//         }
//         printf("\n");
//     }
//     //return sum;
// }
// int main(){
//     int arr[4][4] = {{1,2,3,9},{4,5,6,2},{6,7,8,0},{2,4,6,8}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("\n");

//     lowerTriangular(arr);
//     //printf("sum of right diagonal elements  is %d",lowerTriangular(arr));
// }


// 8. Write a program in C to print or display an upper triangular matrix.


// #include<stdio.h>
// void upperTriangular(int arr[4][4]){
//     int b[4][4]={0};
//     for(int j=0;j<4;j++){
//         for(int i=j;i<4;i++){
//             b[j][i]=arr[j][i];
//           //  printf("%d ",b[j][i]);
//         }
//         //printf("\n");
//     }
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",b[i][j]);
//         }
//         printf("\n");
//     }
//     //return sum;
// }
// int main(){
//     int arr[4][4] = {{1,2,3,9},{4,5,6,2},{6,7,8,0},{2,4,6,8}};
//     for(int i=0;i<4;i++){
//         for(int j=0;j<4;j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     printf("\n");
//     printf("\n");

//     upperTriangular(arr);
//     //printf("sum of right diagonal elements  is %d",lowerTriangular(arr));
// }



// 9. Write a program in C to accept a matrix and determine whether it is a sparse matrix.


// #include<stdio.h>
// int sparse(int arr[3][3]){
//     int count=0;
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==0)
//                 count++;
//         }
//     }
//     if(count>4)
//         printf("given matrix is sparse matrix");
//     else
//         printf("given matrix is dense matrix");
// }

// int main(){
//     int arr[3][3]={1,2,0,0,0,5,0,0,0};
//     sparse(arr);
// }

// 10. Write a program in C to find the row with maximum number of 1s.

// #include<stdio.h>
// int max1s(int arr[3][3]){
//     int count[3]={0};
//     for(int i=0;i<3;i++){
        
//         for(int j=0;j<3;j++){
//             if(arr[i][j]==1)
//                 count[i]++;
//         }
//     }

//     if(count[0]>count[1] && count[0]>count[2])
//         return 0;
//     else if(count[1]>count[2])
//         return 1;
//     else
//         return 2;
    

//     // for(int i=0;i<2;i++){

//     //     for(int j=i;j<3;j++)
//     //         if(count[i]>count[j]){
//     //             if()
//     //     }
//     // }
// }

// int main(){
//     int arr1[3][3]={{1,2,3},{4,1,1},{7,8,9}};
//     printf("%d row has highest num of ones",max1s(arr1));
// }