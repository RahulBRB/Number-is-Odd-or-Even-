#include<hstring.h>

// 2. Write a program to check if a number is odd or even without using if-else.

#include<stdio.h>
int main() {
   int n;
   char* arr[2] = {"Even", "Odd"};
   printf("Enter a number: "); //take the number from the user
   scanf("%d", &n);
   printf("The number is: %s", arr[n%2]); //get the remainder to choose the string

}

