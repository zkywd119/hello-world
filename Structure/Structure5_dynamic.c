#include <stdio.h>
#include <stdlib.h>

struct course
{
   int marks;
   char subject[30];
};

int main()
{
   struct course *ptr;
   int i, quantity;
   printf("Enter number of records: ");
   scanf("%d", &quantity);

   // Allocates the memory for quantity structures with pointer ptr pointing to the base address.
   ptr = (struct course*) malloc (quantity * sizeof(struct course));

   for(i = 0; i < quantity; ++i)
   {
       printf("Enter name of the subject and marks respectively:\n");
       scanf("%s %d", (ptr+i)->subject, &((ptr+i)->marks));
   }

   printf("Displaying Information:\n");

   for(i = 0; i < quantity ; ++i)
       printf("%s\t%d\n", (ptr+i)->subject, (ptr+i)->marks);

   return 0;
}
