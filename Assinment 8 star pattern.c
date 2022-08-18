//1
// *    
// **   
// ***  
// **** 
// *****


// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//2

//     *
//    **
//   ***
//  ****
// *****

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j>5-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//3

// *****
// **** 
// ***  
// **   
// *    

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j<=6-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//4
// *****
//  ****
//   ***
//    **
//     *

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=5;j++){
//             if(j>=i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//5

//     *    
//    ***   
//   *****  
//  ******* 
// *********

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=5+1-i && j<=5-1+i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//6


// *********
//  ******* 
//   *****  
//    ***   
//     *    

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j>=i && j<=10-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//7
// *********
// **** ****
// ***   ***
// **     **
// *       *

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=9;j++){
//             if(j<=5+1-i || j>=5-1+i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//8


//     1    
//    121   
//   12321  
//  1234321 
// 123454321

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         int k=1;
//         for(j=1;j<=9;j++){
//             if(j>=5+1-i && j<=5-1+i){
//                 if(j<5)
//                     printf("%d",k++);
//                 else{
//                     printf("%d",k--);
//                 }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//9


// 123454321
//  1234321 
//   12321  
//    121   
//     1    

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         int k=1;
//         for(j=1;j<=9;j++){
//             if(j>=i && j<=10-i){
//                 if(j<5)
//                     printf("%d",k++);
//                 else{
//                     printf("%d",k--);
//                 }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }


//10


// // 123443210
// // 1234 4321
// // 123   321
// // 12     21
// // 1       1

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         int k=1;    
//         for(j=1;j<=9;j++){
//             if(j<=5+1-i || j>=5-1+i){
//                 if(j<=5)
//                     printf("%d",k++);
//                 else{
//                     printf("%d",--k);
//                 }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//11

//     A    
//    ABA   
//   ABCBA  
//  ABCDCBA 
// ABCDEDCBA

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         int k='A';
//         for(j=1;j<=9;j++){
//             if(j>=5+1-i && j<=5-1+i){
//                 if(j<5){
//                     printf("%c",k++);
//                 }else{
//                     printf("%c",k--);
//                 }
                
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//12


// ABCDEDCBA
//  ABCDCBA 
//   ABCBA  
//    ABA   
//     A   

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         int k='A';
//         for(j=1;j<=9;j++){
//             if(j>=i && j<=10-i){
//                 if(j<5)
//                     printf("%c",k++);
//                 else{
//                     printf("%c",k--);
//                 }
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     return 0;
// }

//14


// *       
// * *     
// *   *   
// *     * 
// * * * * *

// #include<stdio.h>
// int main(){
//     int i,j,k;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=4;j++){
//             if(j==1||j==i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
        
//     }
//     printf("* * * * * ");
// }

//15

// * * * * * 
//   *     * 
//     *   * 
//       * * 
//         * 

// #include<stdio.h>
// int main(){
//     int i,j,k;
//     printf("* * * * * \n");
//     for(i=4;i>=1;i--){
//         for(j=5;j>=1;j--){
//             if(j==1||j==i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
        
//     }
    
// }


//15


//     *   
//    * *  
//   *   * 
//  *     *
// * * * * *

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=4;i++){
//         for(j=1;j<=8;j++){
//             if(j==4+2-i || j==4+i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     printf("* * * * *\n");
//     return 0;
// }

//16


// *********
//  *     * 
//   *   *  
//    * *   
//     * 

// #include<stdio.h>
// int main(){
//     int i,j;
//     printf("*********\n");
//     for(i=1;i<5;i++){
//         for(j=1;j<10;j++){
//             if(j==i+1 || j==9-i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
// }

//17


//     *     
//    ***    
//   *****   
//  *******  
// ********* 
//  ******* 
//   *****  
//    ***   
//     *    



//         *           
//       * * *         
//     * * * * *       
//   * * * * * * *     
// * * * * * * * * *   
//   * * * * * * *   
//     * * * * *     
//       * * *       
//         *   


// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=5;i++){
//         for(j=1;j<=10;j++){
//             if(j>=5+1-i && j<=5-1+i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
//     for(i=1;i<5;i++){
//         for(j=1;j<10;j++){
//             if(j>i && j<10-i){
//                 printf("* ");
//             }
//             else{
//                 printf("  ");
//             }
//         }
//         printf("\n");
//     }
// }


//19


//   *****     *****  
//  *******   ******* 
// ********* *********
// ******MysirG*******
//  ***************** 
//   ***************  
//    *************   
//     ***********    
//      *********     
//       *******      
//        *****       
//         ***        
//          *         

// #include<stdio.h>
// int main(){
//     int i,j;
//     for(i=1;i<=3;i++){
//         for(j=1;j<=19;j++){
//             if(j>=4-i&&j<=6+i||j>=14-i&&j<=16+i){
//                 printf("*");
//             }
//             else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
//     printf("******MysirG*******\n");
//     for(i=1;i<=9;i++){
//         for(j=1;j<=19;j++){
//             if(j>i && j<20-i)
//                 printf("*");
//             else
//                 printf(" ");
//         }
//         printf("\n");
//     }
// }
