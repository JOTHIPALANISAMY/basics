//find power(n) using for loop
#include <stdio.h>
int main() {
    int n, power, result = 1;
    printf("Enter the base number: ");
    scanf("%d", &n);
    printf("Enter the power value: ");
    scanf("%d", &power);
    for(int i = 0; i < power; i++) {
        result *= n;
    }
    printf("%d^%d = %d\n", n, power, result);
    return 0;
}

//find power(n) using while loop
#include <stdio.h>
int main() {
    int n, power, result = 1, i = 0;
    printf("Enter the base number: ");
    scanf("%d", &n);
    printf("Enter the power value: ");
    scanf("%d", &power);
    while (i < power) {
        result=result*n;
        i++;
    }
    printf("%d^%d = %d\n", n, power, result);
    return 0;
}


//funtions without parameters
#include <stdio.h>
void add();//function declaration without parameters

int main() {
    add();//function call
    return 0;
}

void add()//function definition
{
    int a=10,b=20; //function definition
    int sum=a+b;
    printf("%d",sum);
}



//add and sub without parameters
#include <stdio.h>
void add()//function declaration
{
    int a=10,b=20; //function definition
    int sum=a+b;
    printf("addition answer is %d\n",sum);
}
void sub()
{
   int a=10,b=20; //function definition
    int sum=a-b;
    printf("subtraction answer is %d",sum);
}

int main() {
    add();//function call
    sub();
    return 0;
}



//functions with parameter
#include <stdio.h>
void add(int m,int n)//function definition with parameter
{
    int sum=m+n;
    printf("addition answer is %d\n",sum);
}
void sub()
{
   int a=10,b=20; //function definition
    int sum=a-b;
    printf("subtraction answer is %d",sum);
}

int main() {
    int a=10;
    int b=20;
    add(a,b);//function call
    sub();
    return 0;
}


