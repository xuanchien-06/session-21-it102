#include <stdio.h>
#include <string.h>
int main(){
	int sodong; 
	char s[100];
	//Mo file bt05.txt va in ki tu nguoi dung nhap vao file
	FILE *file = fopen("bt05.txt","w+");
	printf("Ban muon nhap bao nhieu dong vao trong file : ");
	scanf("%d", &sodong);
	printf("Moi ban nhap vao file ..............\n");
	for(int i=0;i<sodong;i++){
		printf("Moi ban nhap dong thu %d : ",i+1);
		fflush(stdin);
		fgets(s,sizeof(s),stdin);
		fprintf(file,"%s",s);
	}
	//Dong file
	fclose(file);
	printf("Da dong file.");
	return 0;
}
