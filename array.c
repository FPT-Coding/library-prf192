//THAYCACAC
#include <stdio.h>
#include <math.h>

//NHAP MANG
void input(int n, int a[]){
	for(int i=0; i<n; i++){
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
}

//XUAT MANG
void display(int n, int a[]){
	for(int i=0; i<n; i++){
		printf("%-5d",a[i]);
	}
}

//TIM KIEM MOT PHAN TU TRONG MANG
void search(int n, int a[], int &x){
	int check=1;
	printf("Enter x = ");
	scanf("%d", &x);
	for(int i=0; i<n; i++){
		if(a[i]==x){
			printf("Tim duoc gia tri %d tai vi tri %d\n",x,i);
			check=0;
		}
	}
	if(check==1){
		printf("Khong tim thay phan tu %d trong mang",x);
	}
}

//KIEM TRA TINH CHAT CUA MANG (Co toan so duong hay khong)
void check(int n, int a[]){
	int check=1;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			check=0; break;
		}
	}
	if(check==1) 
		printf("True");
	if (check==0)
		printf("False");
}

//TACH MANG VI TRI BAT KY
void separate(int n, int a[], int &position){
	printf("Enter position = ");
	scanf("%d",&position);
	printf("Array 1: ");
	display(position, a);
	int j=0;
	for(int i=position; i<n; i++){
		a[j++]=a[i];
	}
	printf("\nArray 2: ");
	display(n-position,a);
}

//TACH THANH HAI MANG AM VA DUONG
void separateSign(int n, int a[], int &j, int negative[]){
	j=0;
	for(int i=0; i<n; i++){
		if(a[i]<0){
			negative[j++]=a[i];
		} 
	}
	display(j,negative);
}

//GOP MANG
void addArray(int &n, int a[], int j, int negative[]){
	n+=j;
	int n1=n;
	for(int i=j; i>=0; i--)
		a[n1--]=negative[i];
	printf("\n");
	display(n,a);
}

//TIM GIA TRI LON NHAT TRONG MANG
void max(int n, int a[]){
	int max=a[0];
	for(int i=1; i<n; i++)
		if(a[i]>max)
			max=a[i];
	printf("Max = %d",max);
}

//TIM GIA TRI NHO NHAT
void min(int n, int a[]){
	int min=a[0];
	for(int i=1; i<n; i++)
		if(a[i]<min)
			min=a[i];
	printf("Min = %d",min);
}

//SAP XEP MANG TANG DAN
swap(int &a, int &b){
	int temp;
	temp=a;
	a=b;
	b=temp;
}

void increase(int n, int a[]){
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	display(n,a);
}

//SAP XEP MANG GIAM DAN
void decrease(int n, int a[]){
	for(int i=0; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]<a[j])
				swap(a[i],a[j]);
	display(n,a);
}

//SAP XEP 5 PHAN TU DAU TIEN
void increase5First(int n, int a[]){
	for(int i=0; i<5; i++)
		for(int j=i+1; j<5; j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	display(n,a);
}

//SAP XEP 5 PHAN TU CUOI CUNG
void increase5last(int n, int a[]){
	for(int i=n-6; i<n; i++)
		for(int j=i+1; j<n; j++)
			if(a[i]>a[j])
				swap(a[i],a[j]);
	display(n,a);
}

//THEM MOT PHAN TU VAO MANG
void add(int &n, int a[], int &position, int &x){
	printf("Enter position = ");
	scanf("%d",&position);
	printf("Enter value add = ");
	scanf("%d",&x);
	n+=1;
	for(int i=n; i>position; i--){
		a[i]=a[i-1];
	}
	a[position]=x;
	display(n,a);
}

//XOA MOT PHAN TU TRONG MANG
void erase(int &n, int a[], int &position){
	printf("Enter position = ");
	scanf("%d",&position);
	for(int i=position; i<n-1; i++){
		a[i]=a[i+1];
	}
	display(--n,a);
	
}

//SUA MOT PHAN TU TRONG MANG
void edit(int n, int a[], int &position, int &x){
	printf("Enter position = ");
	scanf("%d", &position);
	printf("Enter x = ");
	scanf("%d",&x);
	a[position]=x;
	display(n,a);
}

//HAM KIEM TRA SO NGUYEN TO
int isPrime(int n){
	if(n<2) return 0;
	for(int i=2; i<=sqrt(n); i++){
		if(n%i==0) return 0;
	}
	return 1;
}
//XOA PHAN TU TRUOC SO NGUYEN TO THU 2
void advance(int n, int a[]){
	int count=0;
	for(int i=0; i<n; i++){
		if(isPrime(a[i])==1) count++;
		if(count==2) {
			for(int j=i-1; j<n; j++){
				a[j]=a[j+1];
			}
			break;
		}
	}
	display(--n,a);
}
int main(){
	int n,x,position,j;
	int a[100], negative[100];
	printf("Enter n = ");
	scanf("%d",&n);
	
	input(n,a);
//	search(n,a,x);
//	check(n,a);
//	separateSign(n,a,j,negative);
//	addArray(n,a,j,negative);
//	max(n,a);
//	min(n,a);
//	increase(n,a);
//	decrease(n,a);
//	add(n,a,position,x);
//	erase(n,a,position);
//	edit(n,a,position,x);
//	increase5First(n,a);
//	increase5last(n,a);
//	advance(n,a);
}
