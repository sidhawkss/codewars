#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void *no_space(const char *str_in){
	int str_size = strlen(str_in);
	char *buf = malloc(str_size+5);
	char temp;

	for(int i=0,j=0; i < str_size; i++){
		temp = str_in[i];
		if(temp != 0x20){
			buf[j++] = temp;
		}
	}
	buf[str_size] = '\0';
	return buf;
}

	
int main(void){
	no_space("HELLO WORLD");
	return 0;
}