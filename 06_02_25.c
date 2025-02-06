//arithmetic operation using switch case
#include <stdio.h>
int main() {
  int a,b,result,choice;
  printf("enter number 1: ");
  scanf("%d",&a);
  printf("enter number 2: ");
  scanf("%d",&b);
  printf("enter your choice: \n 1.ADD \n 2.SUB \n 3.MULTIPLY \n 4.DIVIDE\n");
  scanf("%d",&choice);
  switch(choice)
  {
      case 1:
      result=a+b;
      printf("the addition of %d and %d is %d",a,b,result);
      break;
      case 2:
      result=a-b;
      printf("the subtraction of %d and %d is %d",a,b,result);
      break;
      case 3:
      result=a*b;
      printf("the multiplication of %d and %d is %d",a,b,result);
      break;
      case 4:
      result=a/b;
      printf("the division of %d and %d is %d",a,b,result);
      break;
      default:
      printf("enter a valid choice");
  }
    return 0;
}



//rollno using for loop
#include<stdio.h>
int main(){
    int rollno,roll;
    printf("enter your roll number: ");
    scanf("%d",&rollno);
    for(roll=1;roll<=rollno;roll++){
        printf("the rollno is %d\n",roll);
    }
    return 0;
}

//display even number
#include<stdio.h>
int main(){
    int i,n;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        if(i%2==0){
            printf("%d\n",i);
        }
    }
    return 0;
}

//sum of numbers
#include<stdio.h>
int main(){
    int i,n,sum=0;
    printf("enter value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++){
        sum=sum+i;
        printf("%d\n",sum);
    }
    return 0;
}
