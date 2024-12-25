#include <stdio.h>

int main(){
	//Mo file bt01.txt
	FILE *file = fopen("bt01.txt","r");
	//Mo file bt06.txt
	FILE *ptr = fopen("bt06.txt","w+");
	char s[100];
	//sao chep file bt01.txt sang bt06.txt
	while(fgets(s,sizeof(s),file) != NULL){
		fputs(s,ptr);
	}
	printf("Da sao chep thanh cong toi file bt06.txt");
	//dong file
	fclose(file);
	fclose(ptr);
	return 0;
}
