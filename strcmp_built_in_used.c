#include<stdio.h>
#include<string.h>
int main()
{   int *ptr;
    char str1[]="iabdaecjion";
    char str2[]="incognition";
   int compare= strcmp(str1,str2);
   ptr=&compare;
   printf("%d",*ptr);
   return 0;
}
