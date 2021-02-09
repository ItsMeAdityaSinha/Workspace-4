#include<stdio.h>
#include<math.h>
int main() 
{
   int num, orgnum, rem, n = 0;
   float result = 0.0;

   printf("Enter an integer: ");
   scanf("%d", &num);

   orgnum = num;

   for (orgnum = num; orgnum != 0; ++n) 
   {
       orgnum /= 10;
   }

   for (orgnum = num; orgnum != 0; orgnum /= 10) 
   {
       rem = orgnum % 10;

      result += pow(rem, n);
   }

   if ((int)result == num)
    printf("%d is an Armstrong number.", num);
   else
    printf("%d is not an Armstrong number.", num);
   return 0;
}