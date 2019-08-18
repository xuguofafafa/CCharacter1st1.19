#include <stdio.h>

#define MAXLINE 1000

int getline(char line[],int limi);
void reverse(char s[],int lim,char t[]);//���ڷ�ת�ַ�����ĺ���

int main(){
	char currentLine[MAXLINE];
	char reverseLine[MAXLINE];
	int len = 0;
	while((len = getline(currentLine,MAXLINE)) > 0){//��ǰ���������Ч
		reverse(currentLine,len,reverseLine);
		printf("��ת���ַ����ǣ�%s",reverseLine);
	}
	return 0;
}

int getline(char s[],int limit) 
{ 
	int c, i; 
	for (i=0; i < limit-1 && (c=getchar())!=EOF && c!='\n'; ++i) 
		s[i] = c; 
	if (c == '\n') { 
		s[i] = c; 
		++i; 
	} 
	s[i] = '\0'; 
	return i; 
} 

void reverse(char inputs[],int limited,char reverseCopy[]){//����һ������洢��ǰ��ת���ַ�����
	int i,j;
	for(i = limited - 2,j = 0;i >= 0, j < limited - 1;i --,j ++){
		reverseCopy[j] = inputs[i];
	}
	reverseCopy[++j] = '\0';
}