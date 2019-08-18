#include <stdio.h>

#define MAXLINE 1000

int getline(char line[],int limi);
void reverse(char s[],int lim,char t[]);//用于反转字符数组的函数

int main(){
	char currentLine[MAXLINE];
	char reverseLine[MAXLINE];
	int len = 0;
	while((len = getline(currentLine,MAXLINE)) > 0){//当前输入的行有效
		reverse(currentLine,len,reverseLine);
		printf("反转的字符串是：%s",reverseLine);
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

void reverse(char inputs[],int limited,char reverseCopy[]){//用另一个数组存储当前反转的字符数组
	int i,j;
	for(i = limited - 2,j = 0;i >= 0, j < limited - 1;i --,j ++){
		reverseCopy[j] = inputs[i];
	}
	reverseCopy[++j] = '\0';
}