//THAYCACAC
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <ctype.h>
//strcpy(s1,s2): sao chep chuoi nguon vao chuoi dich
//strcat(s1,s2): ghep chuoi nguon vao chuoi dich
//strcmp(s1,s2): so sanh chuoi 1 vs 2

//HAM DEM DO DAI CUA CHUOI
int countLength(char s[]){
	int count=0;
	while(s[count++]!=NULL){
	}
	return count-1;
}

//HAM DEM SO KY TU TRONG CHUOI
int countCharacter(char s[]){
	int count=0,i;
	while(s[i]!=NULL){
		if(isalpha(s[i])) count++;
		i++;
	}
	return count;
}

//HAM CHUYEN TAT CA CAC KI TU THANH CHU HOA
void upper(char s[]){
	int i=0;
	while(s[i]!=NULL){
		if(s[i]>='a'&&s[i]<='z')	s[i]-=32;
		i++;
	}
	puts(s);
}

//HAM CHUYEN TAT CA CAC KI TU THANH CHU THUONG
int lower(char s[]){
	int i=0;
	while(s[i]!=NULL){
		if(s[i]>='A'&&s[i]<='Z')	s[i]+=32;
		i++;
	}
	puts(s);
}

//HAM CHUYEN TAT CA CAC KI TU THANH CHU HOA NHUNG VAN GIU MANG CU
void upperAdvance(char s[]){
	int i=0;
	char p[100];
	strcpy(p,s);
	while(p[i]!=NULL){
		if(p[i]>='a'&&p[i]<='z')	p[i]-=32;
		i++;
	}
	puts(s);
	puts(p);
}

//HAM CHUYEN TAT CA CAC KY TU DAU TIEN CUA MOI TU THANH KY TU HOA
void beautyCharacter(char s[]){
	for(int i=0; i<=strlen(s); i++){
		if(s[i]==32&&s[i+1]!=32){
			if(s[i+1]>='a'&&s[i+1]<='z') s[i+1]-=32;
		}
		if(s[0]>='a'&&s[0]<='z') s[0]-=32;
	}
	puts(s);
}

//HAM XOA CAC KHOANG TRANG THUA
void deleteSpace(char s[]){
	for(int i=0; i<strlen(s); i++){
		if(s[i]==32&&s[i+1]==32){
			for(int j=i; j<strlen(s); j++)
				s[j]=s[j+1];
			i--;	
			s[strlen(s)]=NULL;
		}
	}
	if(s[0]==32){
		for(int i=0; i<strlen(s); i++)
			s[i]=s[i+1];
		s[strlen(s)]=NULL;
	}
	if(s[strlen(s)]==32)
		s[strlen(s)]=NULL;
	puts(s);
}

//HAM DEM XEM BAO NHIEU TU TRONG CHUOI
void countWord(char s[]){
	int word=0;
	for(int i=0; i<strlen(s); i++)
		if(s[i]!=32&&(s[i+1]==32||s[i+1]==NULL))	word++;
	printf("%d", word);
}

//HAM CAT CAC TU IN RA THANH CAC DONG LIEN TIEP NHAU
void cutWord(char s[]){
	char *token;
	token=strtok(s," \t");
	while(token!=NULL){
		puts(token);
		token=strtok(NULL," \t");
	}
}

//HAM TIM TU CO CHIEU DAI LON NHAT VA IN RA TU DO
int numLongestWord(char s[]){
	char *token;
	char p[100],s2[100];
	int character;
	strcpy(s2,s);
	token=strtok(s2," \t");
	character=strlen(token);
	strcpy(p,token);
	while(token!=NULL){
		token=strtok(NULL," \t");
		if(token!=NULL){
			if(strlen(token)>character)
				character=strlen(token);
		}	
	}
	return character;
}
void longestWord(char s[]){
	char *token;
	int num=numLongestWord(s);
	token=strtok(s," \t");
	if(strlen(token)==num)	puts(token);
	while(token!=NULL){
		token=strtok(NULL," \t");
		if(token!=NULL)
			if(strlen(token)==num)
				printf("%s ",token);
	}
}

//HAM KIEM TRA TEN CO HOP LE KHONG
void checkName(char s[]){
	bool check=true;
	for(int i=0; i<strlen(s); i++){
		if(isalpha(s[i])==0&&s[i]!=32){
			check=false;
			break;
		}	
	}
	if(check==true)	printf("Invalid");
	else printf("Not invalid");
}

//HAM IN RA N KI TU DAU TIEN
void cutNFirst(char s[], int &n){
	printf("Enter n: ");
	scanf("%d", &n);
	int count=0;
	for(int i=0; i<strlen(s); i++){
		if(s[i]!=' ')
			count++;
		if(count==n) 
			s[i+1]=NULL;
	}
	puts(s);
}

//HAM HOAN DOI HAI CHUOI
void swapString(char s1[], char s2[]){
	char y[10];
	strcpy(y,s1);
	strcpy(s1,s2);
	strcpy(s2,y);
}

//HAM DAO CHUOI NGUOC LAI
void swapString2(char s[]){
	char temp[10][10]; //so tu / so ky tu
	int i=0;
	//Cat cac tu trong chuoi
	char *token;
	token=strtok(s," \t");
	while(token!=NULL){
		strcpy(temp[i],token);
		token=strtok(NULL," \t");
		i++;
	}
	for(int j=0; j<i/2; j++){
		swapString(temp[j],temp[i-1-j]);
	}
	for(int j=0; j<i; j++){
		printf("%s ",temp[j]);
	}
}

//HAM DEM XEM TU DAI NHAT CO BAO NHIEU KY TU
void maxCharacter(char s[]){
	int max=0;
	char *token;
	token=strtok(s," \t");
	while(token!=NULL){
		if(strlen(token)>max) max=strlen(token);
		token=strtok(NULL," \t");
	}
	printf("%d", max);
}

//HAM XOA TAT CA CAC CHU CAI DAI HON TU DAU TIEN TRONG CHUOI
void deleWordAdvance(char s[]){
	int firstWord;
	char s2[10][10];
	char *token;
	token=strtok(s," \t");
	firstWord=strlen(token);
	while(token!=NULL){
		if(strlen(token)<=firstWord){
			printf("%s ",token);
		} 
		token=strtok(NULL," \t");
	}
}

//HAM DOI CHO CHU NGAN NHAT VA CHU DAI NHAT DAU TIEN
void swapAdvance(char s[]){
	char s1[100], s2[100], s3[100];
	//Tim chu dai nhat trong chuoi
	int max=0;
	strcpy(s1,s);
	char *token;
	token=strtok(s1," \t");
	while(token!=NULL){
		if(strlen(token)>max) max=strlen(token);
		token=strtok(NULL," \t");
	}
	//Tim chu ngan nhat trong chuoi
	int min;
	strcpy(s2,s);
	char *token2;
	token2=strtok(s2," \t");
	min=strlen(token2);
	while(token2!=NULL){
		if(strlen(token2)<min) min=strlen(token2);
		token2=strtok(NULL," \t");
	}
	//Gan chuoi vao mang 2 chieu
	char temp[10][10];
	int i=0;
	strcpy(s3,s);
	char *token3;
	token3=strtok(s3," \t");
	while(token3!=NULL){
		strcpy(temp[i],token3);
		i++;
		token3=strtok(NULL," \t");
	}
	char y[1][10];
	for(int j=0; j<i; j++){
		for(int k=0; k<i; k++){
			if(strlen(temp[j])==max&&strlen(temp[k])==min){
				strcpy(y[1],temp[j]);
				strcpy(temp[j],temp[k]);
				strcpy(temp[k],y[1]);
				break; break;
			}
		}
	}
	for(int j=0; j<i; j++){
		printf("%s ",temp[j]);
	}
}
int main(){
	char s[100];
	fflush;
	gets(s);
	
//	printf("%d", countLength(s));
//	printf("%d",strlen(s));
	
//	printf("%d", countCharacter(s));
	
//	upper(s);
//	strupr(s);
//	puts(s);
	
//	lower(s);
//	strlwr(s);
//	puts(s);
	
//	upperAdvance(s);

//	beautyCharacter(s);

//	deleteSpace(s);

//	countWord(s);

//	cutWord(s);

//	longestWord(s);

//	checkName(s);

//	int n;
//	cutNFirst(s,n);

//	char s1[100], s2[100];
//	fflush(stdin); gets(s1); 
//	fflush(stdin); gets(s2);
//	swapString(s1,s2);
//	puts(s1); puts(s2);

//	swapString2(s);

//	maxCharacter(s);
	
//	deleWordAdvance(s);
	
//	swapAdvance(s);
}
