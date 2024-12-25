#include <stdio.h>

int main(){
	char s[100];
	printf("Moi ban nhap ki tu vao file bt01.txt : ");
	fgets(s,sizeof(s),stdin);
	//Mo file bt01.txt
	FILE *ptr = fopen("bt01.txt","w+");
	// Ghi chuoi vao file
    fprintf(ptr, "%s",s);
    // Dong file sau khi ghi xong
    fclose(ptr);
    printf("Da ghi chuoi vao file bt01.txt.\n");
    return 0;
}
