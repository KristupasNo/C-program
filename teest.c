#include <stdio.h>
void lol(int *x)
{
    int s=0,  **l;
    l=&x;
    printf("%d  " , **l);
    for(int i=0; i<5; i++)
    {
        s=0;
        for(int j=0; j<5; j++)
        {
        *(x+i*5+j)=s;
        s++;
        }
    }

}

int main () {

   int a[5][5], b=3,s=5;

   for(int i=0; i<5; i++)
   {
       s=5;
        for(int j=0; j<5; j++)
        {
        a[i][j]=s;
        s--;
        }
   }



   lol(a);


      for(int i=0; i<5; i++)
      {
           printf("\n");
            for(int j=0; j<5; j++)
            {
          printf("%d  " , a[i][j]);
            }
      }



   return 0;
}
