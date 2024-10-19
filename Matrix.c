#include <stdio.h>
int main()
{
   int ar[2][2],ray[2][2],i=0,j=0,sum[2][2];
   char arth;
   printf("Rishu Kumar\tBCA-1-B\n");
   while(i<2)
   {
     printf("Enter for First matrix ar[%d][%d] :",i+1,j+1);
     scanf("%d",&ar[i][j]);
     j++;
     while(j<2)
        {
           printf("Enter for First matrix ar[%d][%d] :",i+1,j+1);
           scanf("%d",&ar[i][j]);
           j++;
        }
     j=0;
     i++;
   }
   i=0;
   j=0;
   while(i<2)
   {
    printf("Enter for Second matrix ar[%d][%d] :",i+1,j+1);
     scanf("%d",&ray[i][j]);
     j++;
     while(j<2)
        {
           printf("Enter for Second matrix ar[%d][%d] :",i+1,j+1);
           scanf("%d",&ray[i][j]);
           j++;
        }
     j=0;
     i++;
   }
   i=0;
   j=0;
   printf("First Matrix :\n");
   while(i<2)
   {
     printf("[%d ",ar[i][j]);
     j++;
     while(j<2)
        {
           printf("%d",ar[i][j]);
           j++;
        }
    printf("]\n");
     j=0;
     i++;
   }
   i=0;
   j=0;
   printf("Second Matrix :\n");
   while(i<2)
   {
     printf("[%d ",ray[i][j]);
     j++;
     while(j<2)
        {
           printf("%d",ray[i][j]);
           j++;
        }
    printf("]\n");
     j=0;
     i++;
   }
   printf("Enter for  _,+, -, *, for airthmatic matrix equation :\n");
   printf("+ for addition, _ for transpose,- for subtraction, * for multiplication \n");
   while(getchar()!='\n');
       arth=getchar();
   i=0;
   j=0;
   printf("The %c of these two matrix are :\n",arth);
   switch(arth)
   {
       case '+':
       while(i<2)
       {
         sum[i][j]=ar[i][j]+ray[i][j];
         j++;
         while(j<2)
         {
           sum[i][j]=ar[i][j]+ray[i][j];
           j++;
         }
         j=0;
         i++;
        }
        break;
        case '*':
             sum[i][j]=ar[0][0]*ray[0][0]+ar[0][1]*ray[1][0];
             j++;
             sum[i][j]=ar[0][0]*ray[0][1]+ar[0][1]*ray[1][1];
         i++;
         j=0;
             sum[i][j]=ar[1][0]*ray[0][0]+ar[1][1]*ray[1][0];
             j++;
             sum[i][j]=ar[1][0]*ray[0][1]+ar[1][1]*ray[1][1];
        
        break;
        case '-':
        while(i<2)
       {
         sum[i][j]=ar[i][j]-ray[i][j];
         j++;
         while(j<2)
         {
           sum[i][j]=ar[i][j]-ray[i][j];
           j++;
         }
         j=0;
         i++;
        }
        break;
        case '_':
        while(j<2)
       {
         sum[j][i]=ar[i][j];
         i++;
         while(i<2)
         {
           sum[j][i]=ar[i][j];
           i++;
         }
         i=0;
         j++;
        }
        i=0;
        j=0;
        printf("The transpose of First matrix :\n");
        while(i<2)
         {
            printf("[%d ",sum[i][j]);
            j++;
            while(j<2)
            {
             printf("%d",sum[i][j]);
             j++;
            }
            printf("]\n");
            j=0;
            i++;
         }
        i=0;
        j=0;
        while(j<2)
       {
         sum[j][i]=ray[i][j];
         i++;
         while(i<2)
         {
           sum[j][i]=ray[i][j];
           i++;
         }
         i=0;
         j++;
        }
        i=0;
        j=0;
        printf("The transpose of Second matrix :\n");
        while(i<2)
         {
            printf("[%d ",sum[i][j]);
            j++;
            while(j<2)
            {
             printf("%d",sum[i][j]);
             j++;
            }
            printf("]\n");
            j=0;
            i++;
         }
         break;
        default:
        printf("Pls enter correct matrix airthmatix operation.");
   }
   if(arth!='_'){
   i=0;
   j=0;
   while(i<2)
   {
     printf("[%d ",sum[i][j]);
     j++;
     while(j<2)
        {
           printf("%d",sum[i][j]);
           j++;
        }
    printf("]\n");
     j=0;
     i++;
   }
   }
   return 0;
}
