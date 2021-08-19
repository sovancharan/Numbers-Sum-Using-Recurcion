#include<stdio.h>

int sum(int n)
{
     if(n<=9){
          return n;
     }
     else{
       return n%10+sum(n/10);

     }
}
int main()
{
     printf("%d",sum(125));

}
