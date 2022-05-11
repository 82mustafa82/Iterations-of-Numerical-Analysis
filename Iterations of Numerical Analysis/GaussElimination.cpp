#include <iostream>
#include<stdio.h>
#include<math.h>
int main(int argc, char** argv) {
	int i,j,k;
	double tmp;
	double matrix [3][4]={	{3,4,-2,7},
							{1,-2,-6,14},
							{2,1,-1,1}};
	for(i=0;i<3;i++){
		for(j=i;j<3;j++){
			if(j==i){
				tmp=matrix[j][i];
				for(k=j;k<4;k++){
					matrix[i][k]=matrix[i][k]/tmp;
				}
				printf("%.2f %.2f %.2f %.2f\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[0][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[1][0],matrix[1][1],matrix[1][2],matrix[1][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[2][0],matrix[2][1],matrix[2][2],matrix[2][3]);
				printf("\n");
			}
			else{
				tmp=matrix[j][i];
				for(k=0;k<4;k++){
					matrix[j][k]=matrix[j][k]/tmp;
				}
				printf("%.2f %.2f %.2f %.2f\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[0][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[1][0],matrix[1][1],matrix[1][2],matrix[1][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[2][0],matrix[2][1],matrix[2][2],matrix[2][3]);
				printf("\n");
				for(k=0;k<4;k++){
					matrix[j][k]=matrix[j][k]-matrix[i][k];
				}
				printf("%.2f %.2f %.2f %.2f\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[0][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[1][0],matrix[1][1],matrix[1][2],matrix[1][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[2][0],matrix[2][1],matrix[2][2],matrix[2][3]);
				printf("\n");
				for(k=0;k<4;k++){
					matrix[j][k]=matrix[j][k]*tmp;
				}
				printf("%.2f %.2f %.2f %.2f\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[0][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[1][0],matrix[1][1],matrix[1][2],matrix[1][3]);
				printf("%.2f %.2f %.2f %.2f\n",matrix[2][0],matrix[2][1],matrix[2][2],matrix[2][3]);
				printf("\n");
			}
		}
	}
	printf("%.2f %.2f %.2f %.2f\n",matrix[0][0],matrix[0][1],matrix[0][2],matrix[0][3]);
	printf("%.2f %.2f %.2f %.2f\n",matrix[1][0],matrix[1][1],matrix[1][2],matrix[1][3]);
	printf("%.2f %.2f %.2f %.2f\n",matrix[2][0],matrix[2][1],matrix[2][2],matrix[2][3]);
	printf("\n");
	return 0;
}
