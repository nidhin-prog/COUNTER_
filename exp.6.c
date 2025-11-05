/* Name : Nidhi Nandepalli
   UIN : 251P092
   CLASS : COMP/ D */

#include<stdio.h>

 void Counter()
 {
   static int count = 0;
   count++;
   printf("Count = %d\n", count);
   }

   int main()
   {
   Counter();
   Counter();
   Counter();

   return 0;

}
