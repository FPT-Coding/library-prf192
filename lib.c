#include <stdio.h>
#include <math.h>
#include <stdlib.h>

void nhap(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
}

void xuat(int a[], int n) {
	int i;
	for(i = 0; i < n; i++) {
		printf("%d ", a[i]);
	}
}

void sap_xep_tang_dan(int a[], int n) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(a[j] < a[i]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

void sap_xep_giam_dan(int a[], int n) {
	int i, j;
	for(i = 0; i < n; i++) {
		for(j = i+1; j < n; j++) {
			if(a[j] > a[i]) {
				int temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}
		}
	}
}

int so_cac_so_chan(int a[], int n) {
	int i;
	int count = 0;
	for(i = 0; i < n; i++) {
		if(a[i]%2 == 0) {
			count++;
		}
	}
	return count;
}

void mang_cac_so_chan(int a[], int b[], int n, int m) {
	int i;
	int count = 0;
	for(i = 0; i < n; i++) {
		if(a[i]%2 == 0) {
			b[count] = a[i];
			count++;
		}
	}
}

int so_cac_so_le(int a[], int n) {
	int i;
	int count = 0;
	for(i = 0; i < n; i++) {
		if(a[i]%2 == 1) {
			count++;
		}
	}
	return count;
}

void mang_cac_so_le(int a[], int b[], int n, int m) {
	int i;
	int count = 0;
	for(i = 0; i < n; i++) {
		if(a[i]%2 == 1) {
			b[count] = a[i];
			count++;
		}
	}
}

void tong_binh_phuong_trong_mang(int b[], int m) {
	int i;
	int sum = 0;
	for(i = 0; i < m; i++) {
		sum = sum + pow(b[i], 2);
	}
	printf("%d", sum);
}

int kiem_tra_so_nguyen_to(int a) {
	if(a < 2) {
		return 0;
	}
	int i;
	for(i=2; i <= sqrt(a); i++) {
		if(a%i==0) {
			return 0;
		}
	}
	return 1;
}

void cac_so_nguyen_to_tu_a_den_b(int a, int b) {
	int i;
	for(i = a; i <= b; i++) {
		if(kiem_tra_so_nguyen_to(i) == 1) {
			printf("%d ", i);
		}
	}
}



int main() {
	int a[100];
//	int n;
//	printf("nhap n: ");
//	scanf("%d", &n);
//	nhap(a, n);
//	int b[100];
//	int m = so_cac_so_le(a, n);
//	mang_cac_so_le(a, b, n, m);
//	tong_binh_phuong_trong_mang(b, m);
//	xuat(b, m);

	int a, b;
	scanf("%d", &a);
	scanf("%d", &b);
	cac_so_nguyen_to_tu_a_den_b(a, b);
	return 0;
}

