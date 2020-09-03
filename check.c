//THAYCACAC
#include <stdio.h>
#include <math.h>

//HAM KIEM TRA SO NGUYEN TO
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}

//HAM KIEM TRA SO CHINH PHUONG
int isSquare(int n){
	if(n<2) return 0;
	if(sqrt(n)==(int)sqrt(n)) return 1;
	else return 0;
}

//HAM KIEM TRA SO HOAN HAO
int isPerfect(int n){
	int s=0;
	for(int i=1; i<n; i++){
		if(n%i==0)	s+=i;
	}
	if(n==s)	return 1;
	else	return 0;
}

//HAM KIEM TRA SO PALINDROME
int isPalindrome(int n){
	int sum=0,r;
	int check=n;
	while (n>0){
		r=n%10;
		sum=sum*10+r;
		n/=10;
	}
	if(sum==check) return 1;
	else return 0;
}

//HAM KIEM TRA SO CHIA HET CHO MOT SO X (VI DU CHIA HET CHO 7)
int isDivisible(int n){
	if(n%7==0) return 1;
	else return 0;
}

//HAM KIEM TRA 1/(2*N+1)<=C
void check1(double c){
	int n=0;
	while(1){
		if(1.0/(2*n+1)<=c)	break;
		n++;
	}
	printf("%d\n",n);
}

//HAM KIEM TRA |X^N/N!<=C|
void check2(double c){
	int n=1;
	double t=1;
	double x=2;
	while(1){
		t*=x/n;
		if(fabs(t)<=c)	break;
		n++;
	}
	printf("%d\n",n);
}

//HAM KIEM TRA |X^(2*N+1)/(2*N+1)!<=C|
void check3(double c){
	int n=3;
	double x=2;
	double t=x;
	while(1){
		if(fabs(t)<=c)	break;
		t*=x*x/(n*(n-1));
		n+=2;
	}
	printf("%d\n",(n-1)/2);
}

int main(){
	int n;
	printf("Enter n = ");
	scanf("%d", &n);
	
//	for(int i=0; i<=n; i++){
//		if(isPrime(i)==1)	printf("%5d",i);
//	}

//	for(int i=0; i<=n; i++){
//		if(isSquare(i)==1)	printf("%5d",i);
//	}

//	for(int i=0; i<=n; i++){
//		if(isPalindrome(i)==1)	printf("%7d",i);
//	}	

	if(isPerfect(n)==1)	printf("True");
	else	printf("False");

//	for(int i=0; i<=n; i++){
//		if(isDivisible(i)==1)	printf("%7d",i);
//	}	
//	double c=0.00001;
//	check1(c);
//	check2(c);
//	check3(c);
	
}
