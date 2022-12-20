#include <stdio.h>
#define MAX 1000
int x1,y1;
int x2,y2;
int result[MAX][MAX];

int main(){
  int i,j,k;

  //First maxtrix

  printf("Enter the order of the 1st maxtrix : ");
  scanf("%d %d",&x1,&y1);
  int arr_1[x1][y1];
  for(i=0;i<x1;i++){
    for(j=0;j<y1;j++){
      printf("Enter the %d element of row %d of the 1st maxtrix: ",j+1,i+1);
      scanf("%d",&arr_1[i][j]);}
    }

  for(i=0;i<x1;i++){
    for(j=0;j<y1;j++){
      printf("%d ",arr_1[i][j]);
    }
    printf("\n");
   }

  //Second matrix

  printf("Enter the order of the 2nd maxtrix : ");
  scanf("%d %d",&x2,&y2);
  int arr_2[x2][y2];


  for(i=0;i<x2;i++){
    for(j=0;j<y2;j++){
      printf("Enter the %d element of row %d of the 2nd maxtrix: ",j+1,i+1);
      scanf("%d",&arr_2[i][j]);}
    }

  printf("\n");
  for(i=0;i<x2;i++){
    for(j=0;j<y2;j++){
      printf("%d ",arr_2[i][j]);
    }
    printf("\n");
  }
//Checking if the matrix product Condition is satisfied

  if(x2!=y1){
    printf("Condition to multiply maxtrixes not satisfied! \n");
    return 0;
  }

//maxtrix product

int sum = 0;
  for(i=0;i<x1;i++){
    for(j=0;j<y2;j++){
      for(k=0;k<x2;k++){
        sum += arr_1[i][k]*arr_2[k][j];
      }
      result[i][j] = sum;
      sum = 0;
    }
  }
//printing the Resultant matrix
  printf("Resultant matrix : \n");

  for(i=0;i<x1;i++){
    for(j=0;j<y2;j++){
      printf("%d ",result[i][j]);
    }
    printf("\n");
  }



}
