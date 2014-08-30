#include<stdio.h>
 
void TOH(int num, char x, char y, char z);
 
int main() {
   int num;
   printf("\nEnter number of plates:");
   scanf("%d", &num);
 
   TOH(num, 'S', 'E', 'I');
   return (0);
}
 
void TOH(int num, char x, char y, char z) {
   if (num > 0) {
      TOH(num - 1, x, z, y);
      printf("disk %d %c -> %c\n",num, x, y);
      TOH(num - 1, z, y, x);
   }
}