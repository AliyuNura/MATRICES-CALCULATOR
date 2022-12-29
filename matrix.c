#include <stdio.h>

int main(){
  int x1,x2,x3,y1,y2,y3;
  printf("Enter the rows and column of the first matrix : ");
  scanf("%d %d",&x1,&y1);
  printf("Enter the rows and column of the second matrix : ");
  scanf("%d %d",&x2,&y2);
  int arr_1[x1][y1];
  int arr_2[x2][y2];
  int result[50][50];
  int i,j,k;

 //scanning first matrix
 printf("Enter the elements of the 1st matrix \n" );
  for(i=0;i<x1;i++){
    for(j=0;j<y1;j++){
      printf("Row %d Column %d : ",i+1,j+1);
      scanf("%d",&arr_1[i][j]);
    }
  }

  //scanning second matrix
  printf("Enter the elements of the 2nd matrix \n" );
   for(i=0;i<x2;i++){
     for(j=0;j<y2;j++){
       printf("Row %d Column %d : ",i+1,j+1);
       scanf("%d",&arr_2[i][j]);
     }
   }

  //printing first matrix
    for(i=0;i<x1;i++){
      for(j=0;j<y1;j++){
        printf("%d ",arr_1[i][j]);
      }
      printf("\n");
      }
     printf("\n");
  //printing second matrix
  for(i=0;i<x2;i++){
    for(j=0;j<y2;j++){
      printf("%d ",arr_2[i][j]);
    }
    printf("\n");
    }
  if(y1!=x2){
    printf("Matrix multiplication condition not satisfied!!!\n");
    return 0;
  }

  int sum = 0;
  for(i=0;i<x1;i++){
    for(j=0;j<y2;j++){
      for(k=0;k<y1;k++){
      sum = sum + arr_1[i][k]*arr_2[k][j];
    }
    result[i][j] = sum;
    sum = 0;
    }
  }

  printf("\n");
  for(i=0;i<x1;i++){
    for(j=0;j<y2;j++){
      printf("%d ",result[i][j]);
    }
    printf("\n");
    }

}
