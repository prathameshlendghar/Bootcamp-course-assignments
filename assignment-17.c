
// 1. Write a program to calculate the length of the string. (without using built-in method)

// #include<stdio.h>
// int main(){
//     int count=0;
//     char name[10]="Bhopal";
//     for(int i=0;name[i];i++)
//         count++;
//     printf("length of %s is %d ",name,count);
//     return 0;
// }

// 2. Write a program to count the occurrence of a given character in a given string.

// #include<stdio.h>
// int main(){
//     char b ='b';
//     char name[10]="bhopal";
//     int count=0;
//     for(int i=0;name[i];i++)
//         if(name[i]==b)
//             count++;

//     printf("the occurance of %c is %d times in %s \n",b,count,name);
// }

// 3. Write a program to count vowels in a given string


// #include<stdio.h>
// int main(){
//     char name[10]="bhopal";
//     int count=0;
//     for(int i=0;name[i];i++)
//         if(name[i]=='a' || name[i]=='e' || name[i]=='i' || name[i]=='o' || name[i]=='u')
//             count++;

//     printf("the occurance of vowels is %d times in %s \n",count,name);
// }


// 4. Write a program to convert a given string into uppercase

//#include<stdio.h>
// int main(){
//     char name[10]="bhopal";
//     char nameUpr[10];
//     int upr='A'-'a';

//     for(int i=0;name[i];i++)
//         if(name[i]>='a' && name[i]<='z')
//             nameUpr[i]=name[i]+upr;
//         else
//             nameUpr[i]=name[i];
//     printf("the uppercase of %s is %s \n",name,nameUpr);
// }

// 5. Write a program to convert a given string into lowercase

//#include<stdio.h>
// int main(){
//     char name[10]="BHOpAL";
//     char nameUpr[10];
//     int upr='A'-'a';

//     for(int i=0;name[i];i++)
//         if(name[i]>='A' && name[i]<='Z')
//             nameUpr[i]=name[i]-upr;
//         else
//             nameUpr[i]=name[i];
//     printf("the uppercase of %s is %s \n",name,nameUpr);
// }


// 6. Write a program to reverse a string.

// #include<stdio.h>
// int main(){
//     int count=0;
//     char name[10]="bhopal";
//     for(int i=0;name[i];i++)
//         count++;
//     char Rev[count];
//     for(int i=count-1,j=0;i>=0,j<count;i--,j++)
//         Rev[j]=name[i];
//     printf("reverse of %s is %s ",name,Rev);
//     return 0;
// }

// 7. Write a program in C to count the total number of alphabets, digits and special
//    characters in a string.

//  #include<stdio.h>
// int main(){
//     char name[50]="BHOpAL 123 is city of lake";
//     int alp=0;
//     int dig=0;
//     int spc=0;
//     for(int i=0;name[i];i++){
//         if((name[i]>='a' && name[i]<='z')||(name[i]>='A' && name[i]<='Z'))
//             alp++;
//         else if(name[i]>='0' && name[i]<='9')
//             dig++;
//         else
//             spc++;
//     }
//     printf("num of alphabet %d   no of digit %d    num of special char %d ",alp,dig,spc);
// }


// 8. Write a program in C to copy one string to another string.

// #include<stdio.h>
// int main(){
//     char name[50]="BHOpAL is city of lake";
//     int count=0;
//     for(int i=0;name[i];i++)
//         count++;
//     char namecpy[count];
//     for(int i=0;i<count;i++)
//         namecpy[i]=name[i];
//     printf("%s",namecpy);
// }

// 9. Write a C program to sort a string array in ascending order.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[5][10] = {"bhopal","lonavala","pune","nashik","hydrabad"};
//     char temp[10];
//     for(int i=0;i<5-1;i++){
//         for(int j=i+1;j<5;j++){
//             int k = strcmp(name[i],name[j]);
//             //printf("%d ",k);
//             if(k>0){
//                 strcpy(temp,name[i]);
//                 strcpy(name[i],name[j]);
//                 strcpy(name[j],temp);
//             }
//         }
//     }
//     for(int i=0;i<5;i++)
//         printf("%s ",name[i]);
// }

// 10. Write a program in C to Find the Frequency of Characters.

// #include<stdio.h>
// #include<string.h>
// int main(){
//     char name[20]="prathameshvl";
//     char formated[20]="";
//     for(int i=0,k=0;name[i];i++){
//         int count=0;
//         for(int j=i+1;name[j];j++){
//             if(name[i]==name[j]){
//                 count++;
//             }
//         }
//         if(count==0){
//             formated[k]=name[i];
//             k++;
//         }
//     }
//     int frequency[20] = {0};
//     for(int i=0;formated[i];i++){
//         int freq=0;
//         for(int j=0;name[j];j++){
//             if(formated[i]==name[j]){
//                 freq++;
//             }
//         }
//         frequency[i]=freq;
//         printf("%c --- %d\n",formated[i],frequency[i]);
//     }
// }


// -----------------------------------------------------new method-----------------------------------//

// #include<stdio.h>
// void rep(char str[],int repe[]){
//     for(int i=0;str[i];i++){
//         repe[str[i]]++;
//     }
//     for(int i=0;i<150;i++)
//         if(repe[i]>0)
//             printf("%c ===>  %d\n",i,repe[i]);
// }
// int main(){
//     char str[20]="mallayamasuratkal";
//     int repeated[150]={0};
//     rep(str,repeated);
// }

#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int arr[10]={2,5,1,4,8,7,3,6,9,10};
    arr[5]=arr[2];
    arr[2]=0;
    for(int i=0;i<10;i++)
        printf("%d ",arr[i]);
}