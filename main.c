#include <stdio.h>
#include <stdlib.h>
void func(char str1[], char str2[]);
void main() {
	char str1[100];
	char str2[100];
	printf("ilk stringi giriniz: ");
	gets(str1);
	func(str1,str2);
}
void func(char str1[], char str2[]){
	int i,j;
	for(i=0,j=0;i<100;i++){
		if(str1[i]>='a'&&str1[i]<='z' || str1[i]>='A'&&str1[i]<='Z'){
			str2[j]=str1[i];
			j++;
		}
		else if(str1[i]=='\0'){
			break;
		}
	}
	puts(str2);	
}
