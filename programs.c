//printing ascii values of character
#include<stdio.h>
int main(){
    char var;
    printf("enter a character:");
    scanf("%c",&var);
    printf("%d",var);
}


//printing your own name
#include<stdio.h>
int main(){
    char name[15]="jothi";
    printf("My name is %s",name);
}

//getting name from the user
#include<stdio.h>
int main(){
    char name[15];
    printf("what is your name?");
    scanf("%s",&name);
    printf("my name is %s",name);
}


//multiple of 2 floating point numbers
#include<stdio.h>
int main(){
    float x=17.13;
    float y=13.17;
    float z=x+y;
    printf("the multiple of x and y is: %f ",z);
    return 0;
}


//calculate Fahrenheit to Celsius
#include<stdio.h>
int main(){
int celcius,fahrenheit;
printf("enter the temperature in fahrenheit: ");
scanf("%d",&fahrenheit);
celcius = (fahrenheit - 32) * 5 / 9;
printf("the Celsius is: %d",celcius);
return 0;
}



//size of int, float, double, char
#include <stdio.h>
int main() {
    printf("Size of char: %d bytes\n", sizeof(char));
    printf("Size of int: %d bytes\n", sizeof(int));
    printf("Size of float: %d bytes\n", sizeof(float));
    printf("Size of double: %d bytes\n", sizeof(double));
    return 0;
}


//size of int, float, double, char from the user
#include <stdio.h>
int main() {
    char ch;
    int var;
    float val;
    double dou;
    printf("enter a character: \n");
    scanf("%c",&ch);
    printf("enter a integer: \n");
    scanf("%d",&var);
    printf("enter a floating-point number: \n");
    scanf("%f",&val);
    printf("enter a double number: \n");
    scanf("%lf",&dou);
    printf("Size of char: %d bytes\n", sizeof(ch));
    printf("Size of int: %d bytes\n", sizeof(var));
    printf("Size of float: %d bytes\n", sizeof(val));
    printf("Size of double: %d bytes\n", sizeof(dou));
    return 0;
}


//swapping of 2 numbers
#include <stdio.h>
int main() {
    int a, b, temp;
    printf("Enter 1st number: ");
    scanf("%d",&a);
    printf("Enter 2nd number: ");
    scanf("%d",&b);
    printf("before swapping: %d %d\n",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("After swapping: %d %d\n",a,b);
    return 0;
}


//odd or even
#include <stdio.h>
int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   if (num%2==0){
       printf("The number is even");
   }
   else{
       printf("The number is odd");
   }
    return 0;
}


//positive or negative number
#include <stdio.h>
int main() {
   int num;
   printf("Enter a number: ");
   scanf("%d",&num);
   if (num<0){
       printf("The given number is Negative");
   }
   else{
       printf("The given number is Positive");
   }
    return 0;
}


//leap year
#include <stdio.h>
int main() {
   int year;
   printf("Enter a year: ");
   scanf("%d",&year);
   if ((year%4==0 && year%100!=0) || year%400==0){
       printf("The given year is a leap year");
   }
   else{
       printf("The given year is not a leap year");
   }
    return 0;
}


//number divisible by 5 and 11
#include <stdio.h>
int main() {
    int num;
    printf("enter a number: ");
    scanf("%d",&num);
    if(num%5==0 && num%11==0){
        printf("the number is divisible by 5 and 11");
    }
    else{
        printf("the number is not divisible by 5 and 11");
    }
