#include <stdio.h>
#include <stdlib.h>
//Soru 1
int negatifMatrix(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(matrix[i][j]<0){
				toplam += matrix[i][j];
			}
		}
	}
	return toplam;
}

//Soru 2
int matrixTekToplam(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0;
	for(i=0 ; i<satir; i++){
		for(j=0; j<sutun; j++){
			
			if(matrix[i][j]%2==1){
				toplam += matrix[i][j];
			}	
		}
	}
	return toplam;
}

//Soru 3
float matrixOrtalama(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0 ;
	float ortalama=0;
	for(i=0 ; i<satir; i++){
		for(j=0; j<sutun; j++){
			toplam += matrix[i][j];
		}
	}
	ortalama = (float) toplam / (satir*sutun);
	return ortalama;
	
	
}

//Soru 4
int matrixCiftAdet(int satir , int sutun , int matrix[][sutun]){
	int i , j , ciftSayac=0;
	for(i=0 ; i<satir ; i++){
		for(j=0 ; j<sutun ; j++){
			if(matrix[i][j]%2 ==0){
				ciftSayac++;
				
			}
		}
	}
	return ciftSayac;
}

//Soru 5
int matrixMaxSayi(int satir , int sutun , int matrix[][sutun]){
	int i , j , max;
	max = matrix[0][0];
	for(i=0 ; i<satir; i++){
	for(j=1; j<sutun;j++){
		if(matrix[i][j]>max){
			max = matrix[i][j];
		}
	}	
	
	}
	return max;
}

//Soru 6
int matrixArananDeger(int aranan , int satir , int sutun , int matrix[][sutun]){
	int i , j;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(aranan==matrix[i][j]){
				return 1;
			}
		}
		
	}
	return -1;
	
	
}
//Soru 7
int matrixArananAdet(int aranan ,int satir , int sutun , int matrix[][sutun]){
	int i , j , arananSayac=0;
	for(i=0;i<satir;i++){
		for(j=0; j<sutun; j++){
			if(aranan==matrix[i][j]){
				arananSayac++;
			}
		}
	}
	return arananSayac;
	
	
}
//Soru 8
void matrixSutunToplam(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0 , transpoz[sutun][satir];
	for(i=0; i<satir; i++){
		for(j=0; j<sutun;j++){
		    transpoz[j][i] = matrix[i][j];
		}
	}
	for(i=0; i<sutun; i++){
		for(j=0; j<satir; j++){
			toplam += transpoz[i][j];
		}
		printf("%d.sutun toplami:%d\n" , i+1 ,  toplam);
		toplam=0;
	}
}

//Soru 9
void matrixSatirMax(int satir , int sutun , int matrix[][sutun]){
	int i , j , max;
	for(i=0; i<satir; i++){
		max = matrix[i][0];
		for(j=1; j<sutun; j++){
			if(matrix[i][j]>max){
				max = matrix[i][j];
			}
		}
		printf("%d. satirin max degeri:%d\n" , i+1 , max);
	}
}

//Soru 10
void matrixSutunMin(int satir , int sutun , int matrix[][sutun]){
	int i , j ,  transpoz[sutun][satir] , min;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun;j++){
		    transpoz[j][i] = matrix[i][j];
		}
	}
	for(i=0; i<sutun; i++){
		min = transpoz[i][0];
		for(j=1; j<satir; j++){
			if(transpoz[i][j]<min){
				min = transpoz[i][j];
			}
		}
		printf("%d.sutun min:%d\n" , i+1 ,  min);
		}
}

//Soru 11
int matrixAyniSatirAdet(int satir , int sutun , int matrix[][5]){
	int i, j  , adetSayac=0 , sayac=0;
	for(i=0; i<satir; i++){
		
		for(j=1; j<sutun; j++){
			if(matrix[i][0]!=matrix[i][j]){
				sayac++;
			}
		}
		if(sayac==0){
			adetSayac++;
		}
		sayac=0;
	}
	return adetSayac;
}

//Soru 12
int matrixMaxMinFark(int satir , int sutun , int matrix[][sutun]){
	int i , j , max , min , toplam=0;
	max = matrix[0][0];
	min = matrix[0][0];
	for(i=0; i<satir; i++){
		
		for(j=1; j<sutun; j++){
			if(matrix[i][j]>max){
				max = matrix[i][j];
			}
			if(matrix[i][j]<min){
				min = matrix[i][j];
			}
		}
	}
	toplam = max - min;
	return toplam;
}

//Soru 13
int satirToplamMax(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0 , max=0;
	for(j=0 ; j<sutun; j++){
		max += matrix[0][j];
	}
	
	for(i=1; i<satir; i++){
		for(j=0; j<sutun; j++){
			toplam += matrix[i][j];
		}
		if(toplam>max){
			max=toplam;
		}
		toplam=0;
	}
	return max;
}

//Soru 14 
void matrixAsal(int satir , int sutun , int matrix[][sutun]){
	int i , j , k , sayac=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			for(k=2; k<matrix[i][j]; k++){
				if(matrix[i][j]%k==0){
					sayac++;
					}
			}
			if(sayac==0 && matrix[i][j]>=2){
				printf("%d\n" , matrix[i][j]);
			}
			sayac=0;
		}
	}
}

//Soru 15
int sifiraYakin(int satir , int sutun , int matrix[][sutun]){
	int i , j , minPozitif=100000 , maxNegatif=-100000 , sonuc;
	
	for(i=0 ; i<satir; i++){
		for(j=0; j<sutun; j++){
			
			if(matrix[i][j]<minPozitif && matrix[i][j]>0 ){
				minPozitif = matrix[i][j];
				}
			
			if (matrix[i][j]>maxNegatif && matrix[i][j]<0){
				maxNegatif = matrix[i][j];
				}
		}
		
	}
	sonuc = maxNegatif * (-1);
	if(sonuc<minPozitif){
			return maxNegatif;
		}
	else{
			return minPozitif;
		}
	
}

//Soru 16
int matrixKosegenlerToplami(int satir , int sutun, int matrix[][sutun]){
	int i , j , toplam=0 , temp;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(j == i){
				toplam += matrix[i][j];
			}
		}
		
	}
	
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(i+j==sutun-1){
				toplam += matrix[i][j];
			}
		}
	}
	return toplam;
}

//Soru 17
int matrixKosegenlerMax(int satir , int sutun, int matrix[][sutun]){
	int i , j , toplam=0 , temp , max;
	max = matrix[0][0];
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(j == i){
				if(matrix[i][j]>max){
					max = matrix[i][j];
				}
			}
		}
		
	}
	
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(i+j==sutun-1){
				if(matrix[i][j]>max){
					max = matrix[i][j];
				}
			}
		}
	}
	return max;
}

//Soru 18
int kombinasyon(int n , int r){
	int i , nFaktoriyel=1 , rFaktoriyel=1 , carpim=1 , sonuc;
	for(i=1; i<=n;  i++){
		nFaktoriyel *= i;
	}
	
	for(i=1; i<=r ; i++){
		rFaktoriyel *=i;
	}
	
	for(i=1; i<=n-r; i++){
		carpim *= i;
	}
	sonuc = nFaktoriyel/(rFaktoriyel*carpim);
	return sonuc;
	
}

//Soru 19
int permutasyon(int n , int r){
	int i , nFaktoriyel=1  , carpim=1 , sonuc;
	for(i=1; i<=n;  i++){
		nFaktoriyel *= i;
	}
	
	for(i=1; i<=n-r; i++){
		carpim *= i;
	}
	sonuc = nFaktoriyel/carpim;
	return sonuc;
	
}

//Soru 23
void diziOrtakEleman (int intelUzunluk , int amdUzunluk , int intel[] , int amd[]){
	
	int i , j , temp;
	for(i=0 ; i<intelUzunluk; i++){
		temp = intel[i];
		for(j=0; j<amdUzunluk; j++){
			if(temp==amd[j]){
				printf("%d\n" , amd[j]);
				break;
			}
			
		}
	}
	
	
}

//Soru 24
void diziFarkliEleman(int messiUzunluk , int ronaldoUzunluk , int Messi[] , int Ronaldo[]){

	int	 i , j , temp , sayac=0;
	for(i=0 ; i<messiUzunluk; i++){
		for(j=0; j<ronaldoUzunluk; j++){
			if(Messi[i]==Ronaldo[j]){
				sayac++;
			}
		}
		if(sayac==0){
			printf("%d " , Messi[i]);
		}
		sayac=0;
	}
}
	
//Soru 25
void matrixlerOrtakElemani(int satir , int sutun , int Kobe[][sutun] , int LeBron[][sutun]){
	int a , b , i ,j , temp;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			temp = Kobe[i][j];
			for(a=0; a<satir; a++){
				for(b=0; b<sutun; b++){
					if(temp==LeBron[a][b]){
					printf("%d\n" , LeBron[a][b]);
					break;	
					}
				}
					if(temp==LeBron[a][b]){
						break;
					}
			}
		}
	}
	
}


//Soru 26
int matrixOrtSayi(int satir , int sutun , int matrix[][sutun]){
	int i, j , toplam=0 , sayac=0;
	float ortalama=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			toplam += matrix[i][j];
			
		}
		
	}
	
	ortalama = (float) toplam / (satir*sutun);
	
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(matrix[i][j]>ortalama){
				sayac++;
			}
		}
	}
	return sayac;
}

//Soru 27
int matrixMaxOrtalama(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0 , max=0 , index;
	float ortalama=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			toplam += matrix[i][j];
		}
		ortalama = (float) toplam / sutun;
		if(ortalama>max){
			max = ortalama;
			index = i;
		}
		toplam=0;
	}
	return index;
}

//Soru 28
int EBOB(int sayi1 , int sayi2){
	int i , EBOB , kucukSayi;
	if(sayi1<sayi2){
		kucukSayi = sayi1;
	}
	else {
		kucukSayi = sayi2;
	}
	for (i=1; i<=kucukSayi; i++) {
        if (sayi1 % i == 0 && sayi2 % i == 0){
        	EBOB = i;
		}
            
    }
    return EBOB;
}

//Soru 29
int EKOK(int sayi1 , int sayi2){
	int i=2 , sayac=0 , carpim=1;
	while(i<=sayi1){
		if(sayi1%i==0){
			sayi1 /= i;
			carpim *= i;
			sayac++;
		}
		if(sayac==0){
			i++;
		}
		sayac=0;
	}
	i=2;
	while(i<=sayi2){
		if(sayi2%i==0){
		
		sayi2 /= i;
		carpim *= i;
		sayac++;
		}
		if(sayac==0){
		i++;
	}
	sayac=0;
}
	
	return carpim;
}

//Soru 30
void asalCarpan(int sayi){
	int i=2 , sayac=0;
	while(i<=sayi){
		if(sayi%i==0){
			sayi /= i;
			printf("%d " , i);
			sayac++;
			
		}
		if(sayac==0){
			i++;
		}
		sayac=0;
	}
	
}

//Soru 31
float seri_N_Terim(int N){
	int k=2 , i;
	float toplam=0;
	for(i=1; i<=5; i++){
	  
	  toplam += (float) ((i*2)-1) / ((k*2)-1);
	  
	  k++;
	}
	return toplam;
}

//Soru 32
int matrixTekrar(int satir , int sutun , int matrix[][sutun]){
	int i , j , onceki , maxTekrar=0 , sayac=0;
	for(i=0; i<satir; i++){
		onceki= matrix[i][0];
		for(j=0; j<sutun; j++){
			if(onceki==matrix[i][j]){
				sayac++;
			}
			onceki = matrix[i][j];
		}
		if(sayac>maxTekrar){
			maxTekrar = sayac;
		}
		sayac=0;
	}
	return maxTekrar;
}

//Soru 33
int matrixSutunAdet(int satir , int sutun , int matrix[][sutun]){
	int i , j , transpoz[sutun][satir] , sayac=0 , adet=0 , temp;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			transpoz[j][i] = matrix[i][j];
		}
	}
	
	for(i=0; i<sutun; i++){
		temp = transpoz[i][0];
		for(j=1; j<satir; j++){
			if(temp!=transpoz[i][j]){
				sayac++;
			}
		}
		if(sayac==0){
			adet++;
		}
	}
	return adet;
}

//Soru 34
int matrixKesisimAdet(int satir , int sutun , int A[][sutun] , int B[][sutun]){
	int i , j , adetSayac=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(A[i][j]==B[i][j]){
				adetSayac++;
			}
		}
	}
	return adetSayac;
}

//Soru 35
int matrixKesisimMax(int satir , int sutun , int A[][sutun] , int B[][sutun]){
	int i , j , max=-1000000;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(A[i][j]==B[i][j]){
				if(A[i][j]>max){
					max = A[i][j];
				}
			}
		}
	}
	return max;
}

//Soru 36
int matrixCiftIndeksToplam(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(i%2==0){
				toplam += matrix[i][j];
			}
		}
	}
	return toplam;
}

//Soru 37
int matrixTekIndeksMin(int satir , int sutun , int matrix[][sutun]){
	int i , j , min=1000000;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(i%2==1){
				if(matrix[i][j]<min){
					min = matrix[i][j];
				}
			}
		}
	}
	return min;
}

//Soru 38
int matrixMaxIki(int satir , int sutun , int matrix[][sutun]){
	int i , j , max , satirDeger, sutunDeger , sayi;
	for(i=0; i<satir; i++){
		max = matrix[0][0];
		for(j=1; j<sutun; j++){
		 	if(matrix[i][j]>max){
		 		max = matrix[i][j];
		 		satirDeger = i;
		 		sutunDeger = j;
			 }
		}
	}
	
	for(i=0; i<satir; i++){
		max = matrix[0][0];
		for(j=1; j<sutun; j++){
		 	sayi = matrix[i][j];
			 if(sayi>max && sayi!=matrix[satirDeger][sutunDeger] ){
		 		max = matrix[i][j];
		 		}
		}
	}
	return max;
}

//Soru 39
int matrixMaxUc(int satir , int sutun , int matrix[][sutun]){
	int i , j , max , satirDeger, sutunDeger , sayi , temp_i , temp_j;
	for(i=0; i<satir; i++){
		max = matrix[0][0];
		for(j=1; j<sutun; j++){
		 	if(matrix[i][j]>max){
		 		max = matrix[i][j];
		 		temp_i = i;
		 		temp_j = j;
			 }
		}
	}
	
	for(i=0; i<satir; i++){
		max = matrix[0][0];
		for(j=1; j<sutun; j++){
		 	sayi = matrix[i][j];
			 if(sayi>max && sayi!=matrix[temp_i][temp_j] ){
		 		max = matrix[i][j];
		 		satirDeger = i;
		 		sutunDeger = j;
				 }
		}
	}
	
	for(i=0; i<satir; i++){
		max = matrix[0][0];
		for(j=1; j<sutun; j++){
		 	sayi = matrix[i][j];
			 if(sayi>max && sayi!=matrix[satirDeger][sutunDeger] && sayi!=matrix[temp_i][temp_j] ){
		 		max = matrix[i][j];
		 		}
		}
	}
	return max;
}

//Soru 43
int matrixlerToplamiMax(int satir , int sutun , int A[][sutun] , int B[][sutun]){
	int i , j , max , C[satir][sutun];
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			C[i][j] = A[i][j] + B[i][j];
		}
	}
	max = C[0][0];
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(C[i][j]>max){
				max = C[i][j];
			}
		}
	}
	return max;
}

//Soru 44
int matrixlerMax(int satir , int sutun , int A[][sutun] , int B[][sutun]){
	int i , j , maxA , maxB;
	maxA = A[0][0];
	maxB = B[0][0];
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(A[i][j]>maxA){
				maxA = A[i][j];
			}
			if(B[i][j]>maxB){
				maxB = B[i][j];
			}
		}
	}
	
	if(maxA>maxB){
		return 1;
	}
	else if(maxB>maxA){
		return 2;
	}
	else {
		return 3;
	}
}

//Soru 45
int satirSutunIndexToplami(int satir , int sutun , int matrix[][sutun]){
	int i, j , max , min , satirIndex , sutunIndex;
	max = matrix[0][0];
	min = matrix[0][0];
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(matrix[i][j]>max){
				max = matrix[i][j];
				satirIndex = i;
			}
			if(matrix[i][j]<min){
				min = matrix[i][j];
				sutunIndex = j;
			}
		}
	}
	return satirIndex + sutunIndex;
}

//Soru 46
int matrixEnCokTekrar(int satir , int sutun , int matrix[][sutun]){
	int i , j, a, b , sayac=0 , max , temp=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			
			for(a=0; a<satir; a++){
				for(b=0; b<sutun; b++){
					
					if(matrix[i][j]==matrix[a][b]){
						sayac++;
						
						
					}
				}
			}
			if(sayac>temp){
				max = matrix[i][j];
				temp = sayac;
			}
			
			sayac=0;
		}
	}
	return max;

}

//Soru 47
int matrixMaxCiftToplam(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0 , max=-10000000 , satirIndex;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(matrix[i][j]%2==0){
				toplam += matrix[i][j];
			}
		}
		if(toplam>max){
			max = toplam;
			satirIndex = i;
		}
		toplam = 0;
	}
	return satirIndex;
}

//Soru 48
int matrixSifirSatirSayisi(int satir , int sutun , int matrix[][sutun]){
	int i , j , carpim=1 , adet;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			carpim *= matrix[i][j];
		}
		if(carpim==0){
			adet++;
		}
		carpim =1 ;
	}
	return adet;
}

//Soru 49
void matrixTersiDuzuAsal(int N){
	int i , j , sayac=0 , rakam , tersi=0 , tersiSayac=0 , temp;
	for(i=0; i<N; i++){
		temp=i;
		for(j=2; j<i; j++){
			
			while(temp!=0){
				rakam = temp % 10;
				temp /= 10;
				tersi = tersi*10 + rakam;
			}
			if(i%j==0){
				sayac++;
			}
			if(tersi%j==0){
				tersiSayac++;
			}
			
		}
		if(sayac==0 && tersiSayac==0){
			printf("%d " , i);
			
		}
		tersi=0;
		sayac=0;
		tersiSayac=0;
	}
}

//Soru 50
float matrixlerMaxOrtalama(int satir , int sutun , int A[][sutun] , int B[][sutun]){
	int i , j , toplam=0;
	float ortalamaA=0 , ortalamaB=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			toplam += A[i][j];
		}
	}
	ortalamaA = (float) toplam / (satir*sutun);
	toplam=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			toplam += B[i][j];
		}
	}
	ortalamaB = (float) toplam / (satir*sutun);
	if(ortalamaA>ortalamaB){
		return ortalamaA;
	}
	else {
		return ortalamaB;
	}
}

//Soru 51
void sayacUcgen(int N){
	int i , j , sayac=1;
	for(i=1; i<=N; i++){
		for(j=1; j<i; j++){
			printf("%d\t" , sayac);
			sayac++;
		}
		
		printf("\n");
	}
}



//Soru 54
void matrixlerAyni_Mi(int satir , int sutun , int A[][sutun] , int B[][sutun]){
	int i , j , sayac=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(A[i][j]!=B[i][j]){
				sayac++;
				break;
			}
		}
	}
	if(sayac==0){
		printf("MATRIXLER AYNI");
	}
	else{
		printf("MATRIXLER FARKLI");
	}
}



//Soru 57
int matrixIdentity(int satir , int sutun , int matrix[][sutun]){
	int i , j, sayacBir=0 , sayacSifir=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(j==i){
				if(matrix[i][j]==1){
					sayacBir++;
				}
			}
			if(j!=i){
				if(matrix[i][j]==0){
					sayacSifir++;
				}
			}
			
		}
		
	}
		if(sayacBir==sutun && sayacSifir == (satir+sutun)){
		
			return 1;
		}
		else{
			return 0;
		}
}
	


//Soru 58
int matrixDiagonalToplam(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(i+j==sutun-1){
				toplam += matrix[i][j];
			}
		}
	}
	return toplam;
}

//Soru 59
int matrixTringularToplam(int satir , int sutun , int matrix[][sutun]){
	int i , j , toplam=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(j>i){
				toplam += matrix[i][j];
			}
		}
	}
	return toplam;
}

//Soru 60
int matrixSimetrik(int satir , int sutun , int matrix[][sutun]){
	int i , j , sayac=0;
	for(i=0; i<satir; i++){
		for(j=0; j<sutun; j++){
			if(matrix[i][j] != matrix[j][i]){
				sayac++;
				break;
			}
		}
	}
	if(sayac==0){
		return 1;
	}
	else{
		return 0;
	}
}

int main(int argc, char *argv[]) {
	
	// Soru 1) Hamza Yorgun
	//	23.11.2018
	int matrix[3][4] = {{-12,-5,4,3},{-15,70,59,-70},{-30,-90,60,13}};
	printf("%d" , negatifMatrix(3,4,matrix)); 
	
	
	//Soru 2) Hamza Yorgun
	//23.11.2018
	int matrix[4][3] = {{3,5,7},{9,11,13},{15,17,19},{21,23,25}};
	printf("%d" , matrixTekToplam(3,4, matrix));
	
	
	//Soru 3) Hamza Yorgun
	//24.11.2018
	int matrix[2][2] = {{2,4},{8,23}};
	printf("%f" , matrixOrtalama(2,2,matrix));
	
	
	//Soru 4) Hamza Yorgun
	//25.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	printf("%d" , matrixCiftAdet(3, 4 ,matrix));
	
	
	
	//Soru 5) Hamza Yorgun
	//25.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	printf("%d" , matrixMaxSayi(3, 4 ,matrix));
	
	
	//Soru 6) Hamza Yorgun
	//26.11.2018
	int aranan , matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	printf("Aranan deger giriniz:");
	scanf("%d" , &aranan);
	printf("%d" , matrixArananDeger(aranan, 3 , 4 , matrix));
	
	
	
	//Soru 7) Hamza Yorgun
	// 26.11.2018
	int aranan , matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	printf("Aranan deger giriniz:");
	scanf("%d" , &aranan);
	printf("%d tane aranan deger var." , matrixArananAdet(aranan , 3 , 4 , matrix));
	
	
	//Soru 8) Hamza Yorgun
	// 26.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	matrixSutunToplam(3 , 4 , matrix); 
	
	
	//Soru 9) Hamza Yorgun
	// 26.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	matrixSatirMax(3 , 4 , matrix);
	
	
	//Soru 10) Hamza Yorgun
	// 26.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	matrixSutunMin(3 , 4 , matrix);
	
	
	
	//Soru 11) Hamza Yorgun
	// 26.11.2018
	int matrix[4][5] = {{7,2,3,9,0},{4,4,4,4,4},{5,8,9,0,3},{9,9,9,9,9}};
	printf("Satirlari ayni olan:%d" , matrixAyniSatirAdet(4, 5 , matrix));
	
	
	
	//Soru 12) Hamza Yorgun
	// 26.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	printf("Maksimum Minumum Farki:%d" , matrixMaxMinFark(3 , 4 , matrix));
	
	
	//Soru 13) Hamza Yorgun
	//30.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,0,10,12},{3,1,6,14}};
	printf("Satir Toplam Max:%d" , satirToplamMax(3 , 4 , matrix));
	
	
	//Soru 14) Hamza Yorgun
	//30.11.2018
	int matrix[3][4] = {{3,4,6,8},{2,11,7,12},{3,1,6,14}};
	matrixAsal(3 , 4 , matrix);
	
	
	
	//Soru 15) Hamza Yorgun
	//30.11.2018
	int matrix[3][4] = {{-2,4,1,8},{2,0,10,12},{3,-1,6,14}};
	 printf("%d" , sifiraYakin(3 , 4 , matrix));
	
	
	//Soru 16) Hamza Yorgun
	//3.12.2018
	int matrix[3][3] = {{3,5,2},{9,25,4},{2,1,6}};
	printf("%d" , matrixKosegenlerToplami(3,3,matrix));
	  
	  
	//Soru 17) Hamza Yorgun
	//3.12.2018
	int matrix[3][3] = {{4,5,2},{40,110,4},{2,1,90}};
	printf("%d" , matrixKosegenlerMax(3,3,matrix)); 
	
	 
	//Soru 18) Hamza Yorgun
	//1.12.2018
	int n , r;
	printf("n degeri giriniz:");
	scanf("%d" , &n);
	printf("r degeri giriniz:");
	scanf("%d" , &r);
	printf("%d" , kombinasyon(n,r));
	
	
	//Soru 19) Hamza Yorgun
	//1.12.2018
	int n , r;
	printf("n degeri giriniz:");
	scanf("%d" , &n);
	printf("r degeri giriniz:");
	scanf("%d" , &r);
	printf("%d" , permutasyon(n,r));
	
	
	//Soru 23) Hamza Yorgun
	//3.12.2018
	int intel[] = {3,5,6,8,10,2,22,222};
	int amd[] = {5,22,221,11,6,8,4,2,12,41};
	diziOrtakEleman(8,10, intel , amd);
	 
	
	//Soru 24) Hamza Yorgun
	//3.12.2018
	int Messi[] = {3,5,6,8,10,2,22,222,99};
	int Ronaldo[] = {5,22,221,11,6,8,4,2,12,41};
	diziFarkliEleman(9,10, Messi , Ronaldo);
	
	
	//Soru 25) Hamza Yorgun
	//3.12.2018
	int Kobe[3][4] = {{3,5,7,9}, {4,1,0,12} , {3,2,5,7}};
	int LeBron[3][4] = {{3,5,7,9}, {4,1,0,12} , {3,2,5,7}};
	matrixlerOrtakElemani(3,4,Kobe,LeBron);
	 
	
	//Soru 26) Hamza Yorgun
	//3.12.2018
	int matrix[3][4] = {{3,5,7,9}, {4,1,0,12} , {3,2,5,7}};
	printf("%d" , matrixOrtSayi(3,4,matrix));
	
	
	//Soru 27) Hamza Yorgun
	//3.12.2018
	int matrix[3][4] = {{3,5,7,9}, {4,1,100,12} , {3,2,500,7}};
	printf("index: %d" , matrixMaxOrtalama(3,4,matrix));
	
	
	//Soru 28) Hamza Yorgun
	//3.12.2018
	int sayi1, sayi2;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d" , &sayi2);
	printf("%d" , EBOB(sayi1,sayi2));
	
	
	
	//Soru 29) Hamza Yorgun
	//3.12.2018
	int sayi1, sayi2;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d" , &sayi2);
	printf("%d" , EKOK(sayi1,sayi2));
	
	
	//Soru 30) Hamza Yorgun
	//3.12.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d" , &sayi);
	asalCarpan(sayi);
	
	
	//Soru 31) Hamza Yorgun
	//3.12.2018
	int N;
	printf("bir N degeri giriniz:");
	scanf("%d" , &N);
	printf("%f" , seri_N_Terim(N));
	
	
	//Soru 32) Hamza Yorgun
	//3.12.2018
	int matrix[3][4] = {{7, 3, 5, 5},{3, 4, 6, 8}, {9, 9, 9, 3}};
	printf("%d" , matrixTekrar(3,4,matrix));
	
	
	//Soru 33) Hamza Yorgun
	//3.12.2018
	int matrix[3][4] = {{5, 4, 5, 5},{5, 4, 6, 8}, {5, 4, 9, 3}};
	printf("%d" , matrixSutunAdet(3,4,matrix));
	
	
	//Soru 34) Hamza Yorgun
	//4.12.2018
	int A[3][3] = {{3,5,7},{22,121,6},{3,5,7}};
	int B[3][3] = {{3,5,7},{17,25,6},{3,5,7}};
	printf("%d" , matrixKesisimAdet(3,3,A,B));
	
	
	//Soru 35) Hamza Yorgun
	//4.12.2018
	int A[3][3] = {{3,5,7},{22,121,6},{3,5,7}};
	int B[3][3] = {{3,5,7},{22,12,6},{3,5,7}};
	printf("%d" , matrixKesisimMax(3,3,A,B));
	
	
	
	//Soru 36) Hamza Yorgun
	//4.12.2018
	int matrix[3][4] = {{5, 4, 5, 5},{5, 4, 6, 8}, {5, 4, 9, 3}};
	printf("%d" , matrixCiftIndeksToplam(3,4,matrix));
	
	
	//Soru 37) Hamza Yorgun
	//4.12.2018
	int matrix[4][4] = {{5, 4, 5, 5},{5, 4, 4, 8}, {5, 4, 9, 3},{2,12,50,40}};
	printf("%d" , matrixTekIndeksMin(4,4,matrix));
	
	
	//Soru 38) Hamza Yorgun
	//4.12.2018
	int matrix[4][4] = {{5, 4, 5, 5},{5, 4, 4, 8}, {5, 4, 9, 3},{2,12,50,40}};
	printf("%d" , matrixMaxIki(4,4,matrix));
	
	
	//Soru 39) Hamza Yorgun
	//4.12.2018
	int matrix[4][4] = {{5, 4, 5, 5},{5, 4, 4, 8}, {5, 4, 9, 3},{2,12,50,40}};
	printf("%d" , matrixMaxUc(4,4,matrix));
	
	
	
	
	//Soru 40) Hamza Yorgun
	//4.12.2018
	int A[2][2] = {{3,5},{5,2}};
	int B[2][2] = {{2,4},{3,9}};
	int C[2][2];
	int i , j;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			if(A[i][j]>B[i][j]){
				C[i][j] = A[i][j];
			}
			else{
				C[i][j] = B[i][j];
			}
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t" , C[i][j]);
		}
		printf("\n");
	}
	
	
	
	//Soru 41) Hamza Yorgun
	//4.12.2018
	int A[2][2] = {{3,5},{5,2}};
	int B[2][2] = {{2,4},{3,9}};
	int C[2][2];
	int i , j , fark;
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			fark = A[i][j] - B[i][j];
			C[i][j] = fark; 
		}
	}
	
	for(i=0; i<2; i++){
		for(j=0; j<2; j++){
			printf("%d\t" , C[i][j]);
		}
		printf("\n");
	}
	
	
	//Soru 42) Hamza Yorgun
	//4.12.2018
	int A[3][2] = {{2,4},{1,0},{0,2}};
	int B[2][2] = {{3,1},{2,4}};
	int C[3][2];
	int i , j , k , toplam=0;
	for(i=0; i<3; i++){  
        for(j=0; j<2; j++){
            for( k=0; k<2; k++){
                toplam += A[i][k] * B[k][j];  
            }
            C[i][j] = toplam;  
            toplam = 0;   
            printf("%d\t", C[i][j]); 
        }
        printf("\n");
    }
	
	//Soru 43) Hamza Yorgun
	//4.12.2018
	int A[2][2] = {{2,4},{1,0}};
	int B[2][2] = {{3,1},{2,4}};
	printf("%d" , matrixlerToplamiMax(2,2, A , B) );
	
	
	//Soru 44) Hamza Yorgun
	//4.12.2018
	int A[2][2] = {{2,4},{1,0}};
	int B[2][2] = {{3,1},{2,4}};
	printf("%d" , matrixlerMax(2,2, A , B) );
	
	
	//Soru 45) Hamza Yorgun
	//4.12.2018
	int matrix[2][2] = {{2,4},{1,0}};
	printf("%d" , satirSutunIndexToplami(2,2,  matrix));
	
	
	//Soru 46) Hamza Yorgun
	//4.12.2018
	int matrix[3][5] = {{6,6,6,6,6},{6,8,4,9,8},{8,8,6,4,8}};
	printf("%d" , matrixEnCokTekrar(3,5,matrix)); 
	
	
	//Soru 47) Hamza Yorgun
	//4.12.2018
	int matrix[3][5] = {{6,6,6,6,6},{100,8,4,9,8},{8,8,3,1,8}};
	printf("%d" , matrixMaxCiftToplam(3,5,matrix)); 
	
	
	//Soru 48) Hamza Yorgun
	//4.12.2018
	int matrix[3][5] = {{6,6,6,6,0},{100,0,4,9,8},{8,8,3,0,8}};
	printf("%d" , matrixSifirSatirSayisi(3,5,matrix));
	
	
	//Soru 49 Hamza Yorgun
	//4.12.2018
	int N;
	printf("bir N degeri giriniz:");
	scanf("%d" , &N);
	matrixTersiDuzuAsal(N);
	
	//Soru 50) Hamza Yorgun
	//4.12.2018
	int A[2][2] = {{10,4},{1,0}};
	int B[2][2] = {{3,1},{2,4}};
	printf("%f" , matrixlerMaxOrtalama(2,2, A , B) );
	
	
	//Soru 51) Hamza Yorgun
	//4.12.2018
	int N;
	printf("bir N degeri giriniz:");
	scanf("%d" , &N);
	sayacUcgen(N);
	
	//Soru 52) Hamza Yorgun
	//4.12.2018
	int N;
	printf("bir N degeri giriniz:");
	scanf("%d" , &N);
	asalUcgen(N);

	//Soru 54) Hamza Yorgun
	//4.12.2018
	int A[2][2] = {{10,5},{20,30}};
	int B[2][2] = {{10,5},{20,30}};
	 matrixlerAyni_Mi(2,2,A ,B);
	
	//Soru 57
	int matrix[3][3] = {{1,0,0},{0,1,0},{0,0,1}};
	printf("%d" , matrixIdentity(3,3,matrix));
	
	//Soru 58) Hamza Yorgun
	//4.12.2018
	int matrix[3][3] = {{1,2,3,},{4,5,6},{7,8,9}};
	printf("%d" , matrixDiagonalToplam(3,3,matrix));
	
	
	//Soru 59) Hamza Yorgun
	//4.12.2018
	int matrix[3][3] = {{1,2,3,},{0,5,6},{0,0,9}};
	printf("%d" , matrixTringularToplam(3,3,matrix));
	
	
	//Soru 60) Hamza Yorgun
	//5.12.2018
	int matrix[3][3] = {{1,1,1},{1,1,1},{1,1,1}};
	printf("%d" , matrixSimetrik(3,3,matrix));
	
	
	
	

	
	return 0;
	
	
	
}
