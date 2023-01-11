//WAP  to take a string from user and count total number of vowels in it
#include<stdio.h>
#include<string.h>
int main(){
	int i,count=0;
	char str[100];
	scanf("%[^\n]s",str);
	for(i=0;str[i]!='\0';i++){
	if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
count++;
	}
	printf("no of vowels in statement:%d",count);
	return 0;
}
