#include <stdio.h>
#include <time.h>

int dayOfMonth() {
  time_t today;
  time(&today);

  printf("Date and Time : %s", ctime(&today));
}

int greatest() {
  int a, b, c;
  printf("Enter a number : ");
  scanf("%d", &a);
  printf("Enter a number : ");
  scanf("%d", &b);
  printf("Enter a number : ");
  scanf("%d", &c);

  if (a > b && a > c) {
    printf("%d is greater", a);
  }
  if (b > a && b > c) {
    printf("%d is greater", b);
  }
  if (c > a && c > b) {
    printf("%d is greater", c);
  }
}

int reverse() {
  int a, lsNum, reverseNum;
  printf("Enter a number to reverse :");
  scanf("%d", &a);

  while (a > 0) {
    lsNum = a % 10;
    reverseNum = reverseNum * 10 + lsNum;
    a = a / 10;
  }
  printf("Reversed Num %d", reverseNum);
}

int swap() {
  int a, b;
  printf("Enter a number 1 : ");
  scanf("%d", &a);
  printf("Enter a number 2 : ");
  scanf("%d", &b);
  printf("Before swap num1 : %d ,num2 : %d", a, b);
  a = a + b;
  b = a - b;
  a = a - b;

  printf("\nAfter swap num1 : %d ,num2 : %d", a, b);
}

int sum_of_subjects() {
  int a, b, c, d, e, tot, per;

  printf("Enter marks of subject 1: ");
  scanf("%d", &a);
  printf("Enter marks of subject 2: ");
  scanf("%d", &b);
  printf("Enter marks of subject 3: ");
  scanf("%d", &c);
  printf("Enter marks of subject 4: ");
  scanf("%d", &d);
  printf("Enter marks of subject 5: ");
  scanf("%d", &e);

  tot = a + b + c + d + e;
  per = tot / 5;
  printf("total : %d ,percentage : %d", tot, per);
}

int sum_two() {
  int a, b;
  printf("Enter a number 1 : ");
  scanf("%d", &a);
  printf("Enter a number 2 : ");
  scanf("%d", &b);
  a = a + b;
  printf("Total: %d", a);
}

int fibonacci() {
  int a, b, n, c, i;
  printf("Enter a first num : ");
  scanf("%d", &a);
  printf("Enter a second num : ");
  scanf("%d", &b);
  printf("Enter a no of terms : ");
  scanf("%d", &n);

  for (i = 0; i < n; i++) {
    if (i < 1) {
      c = i;
    }
    c = a + b;
    a = b;
    b = c;
    printf("\n%d", c);
  }
}

int natural() {
  int a;
  for (a = 1; a < 11; a++) {
    printf("\n%d", a);
  }
}

// recursive function
int fact(int num, int b) {
  if (num <= 1) {
    return b;
  }
  b *= num;
  return fact(num - 1, b);
}

int factorial() {
  int a, b = 1, res;
  printf("Enter a number : ");
  scanf("%d", &a);
  res = fact(a, b);
  printf("The factorial is %d\n", res);
}

int palindrome() {
    int a, lsNum, reverseNum , original;
    printf("Enter a number to reverse :");
    scanf("%d", &a);
    original = a;
    while (a > 0) {
      lsNum = a % 10;
      reverseNum = reverseNum * 10 + lsNum;
      a = a / 10;
    }
    if(reverseNum == original){
      printf("It is a palindrome");
    }else{
       printf("It is not a palindrome");
    }
}

int prime() {
  int a, i, c = 0;
  printf("Enter a number : ");
  scanf("%d", &a);
  if (a == 0) {
   printf("It is neither a prime number nor composite");
  } 
  for (i = 2; i < a; i++) {
    if (a % i == 0) {
      c = 1;
      break;
    }
  }
  if (c == 0 &&  a!=0) {
    printf("It is a prime number");
  } else {
    printf("It is not a prime number");
  }
}

int armstrong(){
  int a , original , lsNum , armNum;
  printf("Enter a number : ");
  scanf("%d", &a);

  original = a;

  while(a>0){
    lsNum = a % 10;
    armNum += lsNum * lsNum * lsNum;
    a = a / 10;
  }

  if(armNum == original){
    printf("It is an armstrong number");
  }else{
      printf("It is not an armstrong number");
  }
  
}

int perfectNum(){
  int a , i , sum = 0;
  printf("Enter a number : ");
  scanf("%d", &a);

  for(i = 1; i < a; i++){
    if(a % i == 0){
      sum += i;
    }
  }

  if(sum == a){
    printf("It is a perfect number");
  }else{
      printf("It is not a perfect number");
    }
}

int ascii(){
  int a;  
  printf (" The complete ASCII table of the characters in the C ");  
  for (a = 0; a < 257; a++)  
  {  
      printf (" \n The value of '%c' character is: %d", a, a);  
  }  
}

int factorial_wof(){
  int a, b = 1;
  printf("Enter a number : ");
  scanf("%d", &a);

  for(a; a > 0; a--) {
    b *= a;
  }
  printf("The factorial is %d", b);
}

int main() {
  // Uncomment the functions to run code 
  
  // dayOfMonth();
  // greatest();
  // reverse();
  // swap();
  // sum_of_subjects();
  // sum_two();  
  // fibonacci();
  // natural();
  // factorial();
  // palindrome();
  // prime();
  // armstrong();
  // perfectNum();
  // ascii();
  // factorial_wof();
  
  return 0;
}

