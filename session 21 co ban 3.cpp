#include <stdio.h>

int main(){
	//Mo file bt01.txt
	FILE *file = fopen("bt01.txt","a");
	if(file == NULL){
		printf("Khong hte mo file.");
		return 1;
	}
	//Ghi them ki tu vao file bt01.txt
	char s[100];
	printf("Moi ban nhap them ki tu vao file bt01.txt : ");
	fgets(s,100,stdin);
	//Ghi chuoi vao trong file
	fprintf(file,"%s",s);
	//Dong file
	fclose(file);
	printf("Dang dong file.");
	return 0;
}
