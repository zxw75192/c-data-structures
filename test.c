#include <stdio.h>
int main(int argc,char * argv[]){
	printf("hello world\n");
	char * pc ="abcdefg\n";
	printf("%c\n",*(pc+4));
	int n[] = {1,2,3};
	int * p = n;
	int i = 0;
	for(;i<3;i++){
		printf("%d\n",*(p+i));
		printf("%d\n",*(n+i));
	}
	char c = 'a';
	char * pi = &c;
	printf("%c\n",*pi);

	for(int i=0;i<argc;i++){
		printf("%s\n",argv[i]);
	}
	return 0;
}
