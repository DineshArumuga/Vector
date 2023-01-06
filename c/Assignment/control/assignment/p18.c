//WRITE A PROBLEM FOR BIG DATA VARIABLE ON 3 VARIABLE
#include<stdio.h>
int main()
{
    int x,y,z;
        printf("Enter the x and y value :");
       scanf("%d %d %d",&x,&y,&z);
                if ((x<y)&&(z<y))
                      printf("Y is biggest\n");
                           else if ((x<z)&&(y<z))
                                  printf("Z is biggest\n");
                                        else if ((y<x)&&(z<x))
                                                printf("X is biggest\n");
                                                 else if ((x==y)&&(z<y))
                                                           printf("X and Y is biggest\n");
                                                               else if ((x==z)&&(y<x))
                                                                      printf("X and Z is biggest\n");
                                                                           else if ((y==z)&&(x<z))
                                                                                   printf("Y and Z is biggest\n");
                                                                                     else
											     printf("x y and z are equal\n");
}
