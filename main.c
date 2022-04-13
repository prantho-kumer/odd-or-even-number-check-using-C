#include <stdio.h>

int main(void) {

//  check if a number is odd or even

int num;

printf("Enter the number: ");
scanf("%d", &num);

if(num%2 == 0){
  printf("The number %d is even", num);
}else{
  printf("The number %d is odd", num);
}
 

  
  return 0;
}