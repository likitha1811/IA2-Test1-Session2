#include<stdio.h>

 int check_scalene(int a, int b, int c)
 {  if(a==b && b==c) 
    {  
        printf("This is not a scalene triangle.\n");  
    }  
    else if(a==b || a==c || b==c)    
    {   
        printf("This is not a scalene triangle.\n");  
    }  
    else  
    {  
        printf("This is a scalene triangle.\n");  
    }
 }
 int input() 
 {
  int x;
  printf("Enter three sides of a triangle:\n");
  scanf("%d",&x);
  return x;
 }
 
 int main()
 {
   int a, b, c;
   a=input();
   b=input();
   c=input();
   printf("This is a scalene triangle.\n",check_scalene(a,b,c));
   return 0;
 }