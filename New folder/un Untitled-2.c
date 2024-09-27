include<stdio.h>
int main()
{ 
   //1-D Array
   int a[10],address_i;
   int p=1000;
   printf("The base address of the array is : %d \n" ,p);
   int ub,lb,i;
   printf("Number of elements =%d \n" ,(ub-lb+1));
   printf("Enter an index to find the address of that index element\n");
   scanf("%d",&i);
   address_i= p+2*(i-lb);
   printf("The address of element at %d index is %d\n" ,i,address_i);
   return0;
}