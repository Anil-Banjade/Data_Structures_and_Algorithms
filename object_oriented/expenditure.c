#include <stdio.h>
#define Num_Months 12
int main(){
  int No_Year;
  printf("Enter No of years");
  scanf("%d",&No_Year);
  int expenditure[No_Year][Num_Months];


  for(int i=0;i<No_Year;i++){
      printf("Enter expenditure data for year %d \n",i);

      for(int j=0;j<Num_Months;j++){
	printf("Month %d",j+1);

	scanf("%d",&expenditure[i][j]);

      }

    }



  
      int monthly_average[Num_Months];
      int yearly_average[No_Year];
      int total_sum=0;

      for (int j=0; j<Num_Months;j++){
	int sum=0;

	for(int i=0;i<No_Year;i++){
	  sum +=expenditure[i][j];
	  total_sum += expenditure[i][j];
	}

	monthly_average[j]=sum/No_Year;
      }


	for(int i=0; i<No_Year;i++){
	  int sum=0;
	  for (int j=0;j<Num_Months;j++){
	    sum=sum+expenditure[i][j];
	  }

	  yearly_average[i]=sum/Num_Months;
	}
	int overall_average=total_sum/(No_Year*Num_Months);




      printf("Table of expenditure  \n");
      for (int i=0;i<No_Year;i++){
	for (int j=0;j<Num_Months;j++){
	    printf(" %d %d  %d",i+1, j+1,monthly_average);
	  }
      }


	return 0;
      

}
