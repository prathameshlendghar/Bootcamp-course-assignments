// 1. Write a C++ program to print Hello MySirG on the screen.

// #include<iostream>
// //using namespace std;
// int main(){
//     std::cout<<"Hello MySirG";
//     return 0;
// }

// #include <iostream>
// using namespace std;
// int main() {
//     cout << "Hello MySirG!";
//     return 0;
// }


// 2. Write a C++ program to print Hello on the first line and MySirG on the second line
// using endl.

// #include<iostream>
// using namespace std;
// int main(){
//     cout<<"Hello"<<'\n'<<"Mysirg";
//     return 0;
// }

// 3. Write a C++ program to calculate the sum of two numbers.

// #include<iostream>
// int main(){
//     using namespace std;
//     int a,b;
//     cout<<"Enter 2 numbers to add:- ";
//     cin>>a>>b;
//     cout<<a+b;
// }

// 4. Write a C++ program to calculate the area of a circle

// #include<iostream>
// int main(){
//     using namespace std;
//     int radius;
//     cout << "Enter the Radius:- ";
//     cin >> radius;
//     int area = 3.14*radius*radius;
//     cout << "Area of circle is "<< area ;
//     return 0;
// }

// 5. Write a C++ program to calculate the volume of a cuboid.

// #include<iostream>
// int main(){
//     using namespace std;
//     int length,breadth,height;
//     cout << "Enter the length ";
//     cin >> length;
//     cout << "Enter the breadth ";
//     cin >> breadth;
//     cout << "Enter the height ";
//     cin >> height;    
//     int volume = length*breadth*height;
//     cout << volume << " is the volume of cuboid" << "\n";
//     return 0;
// }


// 6. Write a C++ program to calculate an average of 3 numbers.

// #include<iostream>
// int main(){
//     using namespace std;
//     int a,b,c;
//     cout << "Enter 3 numbers to average it";
//     cin >> a >> b >> c;
//     int avg = (a+b+c)/3;
//     cout << "average of "<< a <<" "<< b <<" and " << c << " is " << avg; 
//     return 0;
// }

// 7. Write a C++ program to calculate the square of a number

// #include<iostream>
// int main(){
//     using namespace std; 
//     int a,sqr;
//     cout<<"Enter the bunber to square";
//     cin >> a;
//     sqr = a*a;
//     cout<<"Square of the number is "<< sqr;
//     return 0;
// }


// 8. Write a C++ program to swap values of two int variables without using third variable

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b;
//     cout<<"Enter the value in a and b";
//     cin >> a >> b;
//     cout << "Value of a and b before swaping are "<< a << " " << b << '\n';
//     a = a+b;
//     b = a-b;
//     a = a-b;
//     cout << "Value of a and b after swaping are "<< a <<" "<< b << '\n';
// }

// 9. Write a C++ program to find the maximum of two numbers.

// #include<iostream>
// int main(){
//     using namespace std;
//     int a,b;
//     cout<<"Enter 2 numbers to find max between them";
//     cin >> a >> b;
//     if(a>b)
//         cout << a << " is a greater";
//     else
//         cout << b << " is a greater";
//     return 0;
// }

// 10. Write a C++ program to add all the numbers of an array of size 10.

#include<iostream>
int main(){
    using namespace std;
    int a[10]={2,6,3,8,11,1,9,4,0,13};
    int sum = 0;
    for(int i=0;i<10;i++){
        sum+=a[i];
    }
    cout << "Sum of numbers in array is "<< sum;
    return 0;
}