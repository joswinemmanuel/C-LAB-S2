#include <stdio.h>

//Joswin Emmanuel's code
struct Employee{
	char name[100];
	int id;
	float salary;
};

int main(){
	int n;
	printf("Enter the number of employee : ");
	scanf("%d", &n);
	printf("\n");
	
	struct Employee emp[n];
	
	for(int i=0;i<n;i++){
		printf("Employee %d details\n",i+1);
		printf("Enter the name of Employee %d : ",i+1);
		scanf("%s",emp[i].name);
		printf("Enter the id of Employee %d : ",i+1);
		scanf("%d",&emp[i].id);
		printf("Enter the salary of Employee %d : ",i+1);
		scanf("%f",&emp[i].salary);
		printf("Details of Employee %d entered \n\n",i+1);
	}
	
	printf("\nSummery of Employee Details entered\n\n");
	for(int i=0;i<n;i++){
		printf("Employee %d details\n",i+1);
		printf("NAME  : %s\n",emp[i].name);
		printf("ID    : %d\n",emp[i].id);
		printf("SALARY: %f\n\n",emp[i].salary);
	}
	return 0; 
	
}
