#include <stdio.h>
#include <stdlib.h>

void main() {
	char str1[100];
	char str2[100];
	printf("ilk stringi giriniz: ");
	gets(str1);
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
