#include <stdio.h>
int main() {
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  if(num%3==0 && num%5==0){
      printf("the number is divisible by both 3 and 5");
  }
  else if(num%5==0){
      printf("the number is divisible by 5");
  }
  else if(num%3==0){
      printf("the number is divisible by 3");
  }
  else{
      printf("the number is neither divisibe  by 3 nor by 5");
  }
    return 0;
}
