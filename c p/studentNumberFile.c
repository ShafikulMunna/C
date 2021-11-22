#include <stdio.h>

int main()
{
   
   FILE *math, *bangla, *english, *average;
   
   
   char Math[10][80], Bangla[10][80], English[10][80];
   int Roll[10], M[10], B[10], E[10], sum[10], i;
   
   char math_file[] = "math.txt";
   math = fopen(math_file, "r");
   
   for(i = 0; i < 10; i++)
   {
       fgets(Math[i], 80, math);
       printf("Math: %s\n", Math[i]);
   }
   
   for(i = 0; i < 10; i++)
   {
       sscanf(Math[i], "%d %d", &Roll[i], &M[i]);
   }
   
   
   char bangla_file[] = "bangla.txt";
   bangla = fopen(bangla_file, "r");
   
   for(i = 0; i < 10; i++)
   {
       fgets(Bangla[i], 80, bangla);
       printf("Bangla: %s\n", Bangla[i]);
   }
   
   for(i = 0; i < 10; i++)
   {
       sscanf(Bangla[i], "%d %d", &Roll[i], &B[i]);
   }
   
   
   char english_file[] = "english.txt";
   english = fopen(english_file, "r");
   
   for(i = 0; i < 10; i++)
   {
       fgets(English[i], 80, english);
       printf("English: %s\n", English[i]);
   }
   
   for(i = 0; i < 10; i++)
   {
       sscanf(English[i], "%d %d", &Roll[i], &E[i]);
   }
   
   char output_file[] = "out.txt";
   average = fopen(output_file, "w");
   
   for(i = 0; i < 10; i++)
   {
       printf("%d %d\n", Roll[i], (M[i] + B[i] + E[i]) / 3);
   }
   
    return 0;
}