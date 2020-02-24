#include <stdio.h> 
#include <string.h>

int main(void){
	
	FILE *fp;
	char fname[256];
	char buffer[256];
	char word[256];
	int line = 0;
	
	printf("파일 이름 입력 : ");
	scanf("%s", fname);
	
	printf("찾을 단어 입력 : ");
	scanf("%s", word);
	
	if((fp = fopen(fname, "r")) == NULL){
		fprintf(stderr, "파일 %s 을 열 수 없습니다. \n", fname);
		return 0;
	}
	//버퍼의 256 길이만큼 파일에서 읽는다 
	while(fgets(buffer, 256, fp)){
		line++;
		if(strstr(buffer, word))// word가 버퍼에 포함되어있는가의 여부를 검사
		{
			printf("라인 %d : 단어 %s 가 발견되었습니다. \n", line, word);
		}
	}
	
	fclose(fp);
	
	return 0;
}
