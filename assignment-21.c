// // 1. Define a structure Employee with member variables id, name, salary
// #include<stdio.h>
// //void sort_emp_sal(struct employee);

// //struct employee;


// struct  employee{
//     int id;
//     char name[20];
//     float salary;
// }e2;
// struct employee e1={2,"prathamesh",200};




// // 2. Write a function to take input employee data from the user. [ Refer structure from
// // question 1 ]

// //#include<stdio.h>
// void printing();
// int main(){
    
//     //printf("%f",e1.salary);
//     //struct employee e2;
//     printf("Enter employee id:- ");
//     scanf("%d",&e2.id);
//     getchar();
//     printf("Enter employee name:- ");
//     fgets(e2.name,20,stdin);
//     printf("Enter salary of employee:- ");
//     scanf("%f",&e2.salary);


//     struct employee emp[10];
//     emp[0].id=12;
//     strcpy(emp[0].name,"umesh");
//     emp[0].salary=2000;

//     emp[1].id=13;
//     strcpy(emp[1].name,"ramesh");
//     emp[1].salary=5000;


//     emp[2].id=14;
//     strcpy(emp[2].name,"mahesh");
//     emp[2].salary=7000;

//     emp[3].id=15;
//     strcpy(emp[3].name,"prathamesh");
//     emp[3].salary=10000;

//     emp[4].id=16;
//     strcpy(emp[4].name,"naresh");
//     emp[4].salary=1000;

//     emp[5].id=17;
//     strcpy(emp[5].name,"kabir");
//     emp[5].salary=2050;

//     int large=emp[0].salary;
//     char name[20]="";
//     strcpy(name,emp[0].name);
//     for(int i=0;i<=5;i++){
        
//         if(large<emp[i].salary){
//             large=emp[i].salary;
//             strcpy(name,emp[i].name);
//         }
//     }
//     printf("%s has Highest salary which is %d\n\n",name,large);

//     printing();
//     return 0;
//     printf("\n\n\n");
//     sort_emp_sal(emp);
// }

// // 3. Write a function to display employee data. [ Refer structure from question 1 ]

// void printing(){
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",e2.id,e2.name,e2.salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",e1.id,e1.name,e1.salary);

// }

// // 4. Write a function to find the highest salary employee from a given array of 10
// // employees. [ Refer structure from question 1]


// // 5. Write a function to sort employees according to their salaries [ refer structure from
// // question 1]

// void sort_emp_sal(struct employee emp11[]){
//     for(int i=0;i<4;i++){
//         for(int j=i;j<5;j++){
//             if(emp11[i].salary>emp11[j].salary){
//                 struct employee empTemp=emp11[i];
//                 emp11[i]=emp11[j];
//                 emp11[j]=empTemp;
//             }
//         }
//     }
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[0].id,emp11[0].name,emp11[0].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[1].id,emp11[1].name,emp11[1].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[2].id,emp11[2].name,emp11[2].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[3].id,emp11[3].name,emp11[3].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[4].id,emp11[4].name,emp11[4].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[5].id,emp11[5].name,emp11[5].salary);
// }


// // 6. Write a function to sort employees according to their names [refer structure from
// // question 1]

// void sort_name(struct employee emp[]){
//     for(int i=0;i<4;i++){
//         for(int j=i;j<5;j++){
//             if(strcmp(emp[i].name,emp[j].name)>0){
//                 struct empname_temp=emp[i];
//                 emp[i]=emp[j];
//                 emp[j]=empname_temp;
//             }
//         }
//     }
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[0].id,emp11[0].name,emp11[0].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[1].id,emp11[1].name,emp11[1].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[2].id,emp11[2].name,emp11[2].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[3].id,emp11[3].name,emp11[3].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[4].id,emp11[4].name,emp11[4].salary);
//     printf("emp id = %d, emp name = %s,emp salary = %f\n",emp11[5].id,emp11[5].name,emp11[5].salary);
// }


// 7. Write a program to calculate the difference between two time periods.

// #include<stdio.h>
// int main(){

//     struct time{
//         int hour;
//         int min;
//         int sec;
//     }time1,time2,difference;

//     printf("Enter start time in \"Hour min sec\" format:- ");
//     scanf("%d%d%d",&time1.hour,&time1.min,&time1.sec);

//     printf("Enter end time in \"Hour min sec\" format:- ");
//     scanf("%d%d%d",&time2.hour,&time2.min,&time2.sec);

//     if(time2.sec<time1.sec){
//         time2.sec+=60;
//         time2.min-=1;
//     }
//     if(time2.min<time1.min){
//         time2.min+=60;
//         time2.hour-=1;
//     }

//     difference.hour=time2.hour-time1.hour;
//     difference.min=time2.min-time1.min;
//     difference.sec=time2.sec-time1.sec;
    
//     printf("difference is %d hours %d min and %d sec",difference.hour,difference.min,difference.sec);

//     //first time will be always smaller assuming this bydefault


// }
// 8. Write a program to store information of 10 students and display them using structure.

// #include<stdio.h>
// int main(){
//     struct student{
//         int rollno;
//         char name[20];
//         int std;
//     }stud[10];
//     for(int i=0;i<10;i++){
//         printf("Enter stud %d RollNo name standard",i+1);
//         scanf("%d %s %d",&stud[i].rollno,&stud[i].name,&stud[i].std);
//     }

//     for(int i=0;i<10;i++){
//         printf("roll no = %d   name = %s   standard = %d \n\n",stud[i].rollno,stud[i].name,stud[i].std);
//     }
//     return 0;
// }


// 9. Write a program to store information of n students and display them using structure


// 10. Write a program to enter the marks of 5 students in Chemistry, Mathematics and
// Physics (each out of 100) using a structure named Marks having elements roll no.,
// name, chem_marks, maths_marks and phy_marks and then display the percentage
// of each student.

struct student_marks{
    int math;
    int chem;
    int phy;
    float percentage;
}studentMarks[5];

#include<stdio.h>
int main(){
    for(int i=0;i<5;i++){
        printf("Enter student %d details:- \n",i+1);
        printf("Math mark:- ");
        scanf("%d",&studentMarks[i].math);
        printf("chemistry mark:- ");
        scanf("%d",&studentMarks[i].chem);
        printf("physics mark:- ");
        scanf("%d",&studentMarks[i].phy);

        studentMarks[i].percentage=((studentMarks[i].math+studentMarks[i].chem+studentMarks[i].phy)*100)/300;
    }
    printf("\n\n");

    for(int i=0;i<5;i++){
        printf(" student %d percentage is %f \n",i,studentMarks[i].percentage);
    }

}