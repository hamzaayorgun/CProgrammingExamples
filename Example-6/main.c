#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//Soru 1)
void tirnak_slash_Sayisi(char string[]){
	int i, slashSayac=0 , tirnakSayac=0;
	for(i=0 ; string[i] != '\0'; i++){
		if(string[i] == '\\' ){
			slashSayac++;
		}
		else{
			tirnakSayac++;
		} 
		
	}
	printf("Ters slash sayisi:%d\nTirnak sayisi: %d" , slashSayac , tirnakSayac);	
}
	
//Soru 2)
int karakterSayisi(char string[]){
	int i , sayac=0;
	for(i=0; string[i] != '\0'; i++){
		if(string[i] != ' '){
			sayac++;
		}
	}
	return sayac;
}

//Soru 3)
void kelimeString(char string[]){
	int i;
	for(i=0; string[i] != '\0'; i++){
		printf("%c\n" , string[i]);
	}
}

//Soru 4)
void stringYildiz(char string[]){
	int i, j , sayac=0;
	for(i=0; string[i] != '\0'; i++){
		if(string[i] != ' '){
		sayac++;
		}
		
		if(string[i] == ' ' || string[i+1] == '\0'){
			for(j=0; j<sayac; j++){
				printf("*" , j);
			}
			printf("\n");
			sayac=0;
		}
	}
}


//Soru 5)
void stringEnUzunKelime(char string[]){
	int i , j ,sayac=0 , max=-1000000 , temp=0 ; 
	
	
	for(i=0; string[i] != '\0'; i++){
	
			sayac++;
	
		
		if(string[i] == ' ' || string[i+1] == '\0' ){
			if(sayac>max){
				max= sayac;
				temp = i;
				
			}
			
				sayac=0;
			
		}
		
	}
	temp -= max;
	
	
	for(j=temp; j<=max+temp; j++){
		printf("%c" , string[j]);
	}
}


//Soru 6)
int stringKarakterSayisi(char A[] , char aranan){
	int i , sayac=0;
	for(i=0; A[i] != '\0'; i++){
		if(aranan == A[i]){
			sayac++;
		}
	}
	
	return sayac;
}

//Soru 7)
int stringBuyukHarf(char string[]){
	int i , sayac=0;
	for(i=0; string[i] != '\0'; i++){
		if(string[i]>='A' && string[i]<='Z'){
			sayac++;
		}
	}
	return sayac;
}

//Soru 8)
void stringOrtak(char A[] , char B[]){
	int i , j , sayac=0;
	for(i=0; A[i] != '\0'; i++){
		for(j=0; B[j] != '\0'; j++){
			if(A[i] == B[j]){
				sayac++;
				break;
			} 
		}
		if(sayac==1){
			printf("%c" , A[i]);
		}
		sayac=0;
	}
}

//Soru 9)
int stringPalindrome(char string[]){
	int i, j, sayac=0, karakterSayac=0;
	for(i=0; string[i] != '\0'; i++){
		karakterSayac++;
	}
	
	
	for(j=0; string[j] != '\0'; j++){
		
		if(string[karakterSayac-1] != string[j]){
			sayac++;
			break;
		}
		
		karakterSayac--;
	}
	if(sayac==0){
		return 1;
	}
	else{
		return 0;
	}
}

//Soru 10)
int stringIndex(char A[] , char B[]){
	int i=0 , j=0 , k=0 , ilk_Index=0 , sayac=0 , karakterSayisi=0;
	for(i=0; B[i] != '\0'; i++){
		karakterSayisi++;
	}
	
	
	for(i=0; A[i] != '\0'; i++){
		k=i;
		if(A[i] == B[0]){
			ilk_Index = i;

			for(j=0; j<karakterSayisi; j++){
				
				if(A[k] == B[j]){
					sayac++;
					
				}
				k++;
			
			}
			if(sayac==karakterSayisi){
			return ilk_Index;
			
			}
			sayac=0;
			
		}
		
	}
		
}

//Soru 11)
int string_kac_defa(char A[] , char B[]){
	int i=0 , j=0 , k=0 , karakterSayac=0 , sayac=0 , karakterSayisi=0;
	for(i=0; B[i] != '\0'; i++){
		karakterSayisi++;
	}
	
	
	for(i=0; A[i] != '\0'; i++){
		k=i;
		if(A[i] == B[0]){
			
			for(j=0; j<karakterSayisi; j++){
				
				if(A[k] == B[j]){
					sayac++;
					
				}
				k++; 
			}
			if(sayac==karakterSayisi){
			karakterSayac++;
			}
			sayac=0;
		}
	}
	return karakterSayac;
		
}

//Soru 12)
int string_harf(char string[]){
	int i , j , sayac=0 , max=-1000000;
	for(i=0; string[i] != '\0'; i++){
		for(j=0; string[j] != '\0'; j++){
			if(string[i]==string[j]){
				sayac++;
			}
		}
		if(sayac>max){
			max = sayac;
		}
		sayac=0;
	}
	return max;
}

// Bir stringi kelimelere parçalayarak her bir kelimeyi N kadar yazdýran fonksiyon.
void string_n_defa_yazdir(char A[] , int N){
	int i, j , k , sayac=0 , index=0;
	for(i=0; A[i] != '\0'; i++){
		if(i==0 || A[i-1] == ' '){
			index = i;
		}
		if(A[i] != ' ' || A[i] != '\0'){
		sayac++;
		}
		
		if(A[i] == ' ' || A[i+1] == '\0'){
			for(k=0; k<N;k++){
			
			for(j=index; j<sayac; j++){
				printf("%c" , A[j]);
				
			}
				printf("\n");
			}
		
		}
	}
}

//Soru 13)
void stringParcalama(char string[] , int N){
	int i , j , k=0 ;
	
	for(i=0; string[i] != '\0'; i++){
		for(j=0; j<N; j++){
			
		if(string[k] != '\0'){
			printf("%c", string[k]);
			k++;
		}
				
	}
		printf("\n");
	}
}

//Soru 14)
void stringAnagram(char A[] , char B[]){
	int i,j , sayac=0 , sayacA=0 , sayacB=0;
	for(i=0; A[i] != '\0'; i++){
		sayacA++;
	}
	
	for(i=0; B[i] != '\0'; i++){
		sayacB++;
	}
	
	if(sayacA == sayacB){
	
	 for(i=0; A[i] != '\0'; i++){
			for(j=0; B[j] != '\0'; j++){
				if(A[i] == B[j]){
					sayac++;
					B[j] = -1;
					printf("%c" , B[j]);
					break;
				}
			}
		}
	}	
		 if(sayac==sayacA){
			printf("Stringler Anagramdir.");
		}
		else{
			printf("Stringler Anagram Degildir.");
		}
}

//Soru 15)
int stringRakam(char string[]){
	int i , sayac=0;
	for(i=0; string[i] != '\0'; i++){
		if(string[i]>='0' && string[i]<='9'){
			sayac++;
		}
	}
	return sayac;
}
 

//Soru 17)
void stringYineleme(char string[]){
	int i , j , sayac=0;
	for(i=0; string[i] != '\0'; i++){
		for(j=0; string[j] != '\0'; j++){
			if(string[i] == string[j]){
				sayac++;
			}
		}
		if(sayac==1){
			printf("%c" , string[i]);
			break;
		}
		sayac=0;
	}
	
}

//Soru 18)
void stringRunLenghtEncoded(char string[]){
	int i ,j , k=0, sayac=0;
	for(i=0; string[i] != '\0'; i++){
		sayac++;
		if(string[i] != string[i+1]){
			printf("%c%d" , string[i] , sayac);
			sayac=0;
		}
	}
}

//Soru 19)
int stringHighest(char string[]){
	int i , j,sayac=0 , max=-1000000 ;
	char karakter;
	for(i=0; string[i] != '\0'; i++){
		for(j=0; string[j] != '\0'; j++){
			if(string[i] == string[j]){
				sayac++;
			}
		}
		if(sayac>max){
			max = sayac;
			karakter = string[i];
		}
		sayac=0;
	}
	return karakter;
}

//Soru 20)
int stringBenzersiz(char string[]){
	int i,j,sayac=0,returnSayac=0;
	for(i=0; string[i] != '\0'; i++){
		for(j=0; string[i] != '\0'; j++){
			if(string[i] != string[j]){
				sayac++;
			}
		}
		if(sayac==1){
			returnSayac++;
		}
		sayac=0;
	}
	return returnSayac;
}

//Soru 15)
int main(int argc, char *argv[]) {
	/*
	//Soru 1)
	char string[40];
	printf("bir karakter giriniz:");
	gets(string);
 	tirnak_slash_Sayisi(string);
 	
 	
	 //Soru 2)
 	char string[40];
 	printf("bir string giriniz:");
 	gets(string);
 	printf("%d" , karakterSayisi(string));
 	
 	
 	//Soru 3)
 	char string[40];
 	printf("bir string giriniz:");
 	gets(string);
 	kelimeString(string);
 	
 	
 	//Soru 4)
 	char string[40];
 	printf("bir string giriniz: ");
 	gets(string);
 	stringYildiz(string);
 	
 	//Soru 5)
 	char string[40];
	printf(" stringi giriniz: ");
 	gets(string);
 	stringEnUzunKelime(string);
	
	
 	//Soru 6)
	char A[40] , aranan;
 	printf("Bir stringi giriniz: ");
 	gets(A);
 	printf("Bir karakter giriniz: ");
	scanf("%c" , &aranan);
 	printf("%d" , stringKarakterSayisi(A , aranan));
 	
	 
 	//Soru 7)
 	char string[40];
 	printf("bir string giriniz: ");
 	gets(string);
 	printf("%d" , stringBuyukHarf(string));
 	

 	//Soru 8)
 	char A[40] , B[40];
 	printf("Birinci stringi giriniz: ");
 	gets(A);
 	printf("Ikinci stringi giriniz: ");
	gets(B);
 	stringOrtak(A,B);
 	
 	*/	 
 	//Soru 9)
	char string[40];
 	printf("bir string giriniz: ");
 	gets(string);
 	printf("%d" , stringPalindrome(string));
 	
 	/*
 	//Soru 10)
 	char A[40] , B[40];
 	printf("birinci stringi giriniz:");
 	gets(A);
 	printf("ikinci stringi giriniz:");
 	gets(B);
 	printf("%d" , stringIndex(A,B));
 	
	//Soru 11)
 	char A[40] , B[40];
 	printf("Birinci stringi giriniz: ");
 	gets(A);
 	printf("Ikinci stringi giriniz: ");
	gets(B);
 	printf("%d", string_kac_defa(A,B));
 	
 	//Soru 12)
	char string[40];
	printf("bir string giriniz:");
	gets(string);
    printf("%d" , string_harf(string));
 	
 	
	//Soru 12.5) 
	 // Bir stringi kelimelere parçalayarak her bir kelimeyi N kadar yazdýran fonksiyon.
	 char A[40] ;
	 int N;
 	printf("Birinci stringi giriniz: ");
 	gets(A);
 	printf("N degeri giriniz: ");
	scanf("%d" , &N);
 	string_n_defa_yazdir(A,N);
 	
 	//Soru 13)
	char string[40];
	int N;
	printf("bir string giriniz:");
	gets(string);
	printf("bir N degeri giriniz:");
	scanf("%d" , &N);
     stringParcalama(string , N);
     
     //Soru 14)
	char A[40] , B[40];
 	printf("Birinci stringi giriniz: ");
 	gets(A);
 	printf("Ikinci stringi giriniz: ");
	gets(B);
 	stringAnagram(A,B);
 	
 	//Soru 15)
 	char string[40];
 	printf("string giriniz:");
 	gets(string);
 	printf("%d" , stringRakam(string));
 	
 	//Soru 17)
 	char string[40];
 	printf("string giriniz:");
 	gets(string);
 	stringYineleme(string);
 	
 	//Soru 18)
 	char string[40];
 	printf("string giriniz:");
 	gets(string);
 	 stringRunLenghtEncoded(string);
	 	
 	//Soru 19)
 	char string[40];
 	printf("string giriniz:");
 	gets(string);
 	printf("%c" , stringHighest(string));
 	
 	//Soru 20)
 	char string[40];
 	printf("string giriniz:");
 	gets(string);
 	printf("%d" , stringBenzersiz(string)); 
 	
 	
	 
	//Soru 22)
 	FILE *fp;
	
	fp = fopen( "deneme.txt", "w");
	
	if( fp == NULL ){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	
	int i , dizi[] = {3,5,7};
	
	for(i=0; i<3; i++){
	
	fprintf(fp, "%d\n" , dizi[i]);
	
	}
	fclose(fp);
 	
    
    //Soru 23)
	FILE *fp;
	fp = fopen("deneme.txt" , "r");
	if(fp == NULL){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	int sayi , max=-1000000;
	
	do{
	
		fscanf(fp,  "%d" ,  &sayi);     
		if(sayi>max){
			max = sayi;
		}
	
	} while( ! feof(fp) );   
	
	FILE *f;
	
	f = fopen("output.txt", "w");
	
	if( f == NULL ){                            
		printf("Dosya acmada hata oldu.");
		exit(1);
	}
	
	
	
	fprintf(f, "%d", max);      
	
	fclose(f);
 	
 	
 	//Soru 24)
 	
 	FILE *fp;
 	fp = fopen("deneme.txt" , "r");
 	if( fp == NULL){
 		printf("Dosya acmada hata oldu.");
	 }
	FILE *f; 
	f = fopen("output.txt" , "w");
	
	if(fp==NULL){
		printf("Dosya acmada hata oldu.");
		exit(1);
	} 
	char okunan[100];
	
	do{
	
		fscanf(fp, "%s ", okunan);
		fprintf(f , "%s " , okunan);     
		
	
	} while( ! feof(fp));
 	
 	fclose(fp);
 	
	 
 	
 	//Soru 25)
 	FILE *fp;
 	FILE *filep;
	FILE *filew;
	fp = fopen("dosya1.txt" , "r");
 	filep = fopen("dosya2.txt" , "r");
 	filew = fopen("birlestir.txt" , "w");
 	if(fp == NULL){
 		printf("Dosya okumada hata oldu.");
 		exit(1);	
	 }
	
	if(filep == NULL){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	
	if(filew == NULL){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	
	char okunan1[100];
	char okunan2[100];
	
	do{
		fscanf(fp , "%s" , okunan1);
		fprintf(filew , "%s " , okunan1);
	}while(! feof(fp)); 
	fclose(fp);	
	
	do{
		fscanf(filep , "%s" , okunan2);
		fprintf(filew , "\n%s" , okunan2);
	}while(! feof(filep)); 
	
	fclose(filep);
	fclose(filew);
	
	//Yanlýs kod hatam nerede hocam?
	//Soru 26)
	FILE *temp;
	FILE *fp;
	FILE *filep;
	fp = fopen("dosya1.txt", "r");
	filep = fopen("dosya2.txt" , "r");
	temp = fopen("dosya3.txt" , "r");
	
	if(fp == NULL){
		printf("Dosya açmada hata oldu.");
		exit(1);
	}
	if(filep == NULL){
		printf("Dosya açmada hata oldu.");
		exit(1);
	}
	if(temp == NULL){
		printf("Dosya acmada hata oldu.");
		exit(1);
	}
	
	
	char okunan1[100];
	char okunan2[100];
	
	do{
		fscanf(fp , "%s" , okunan1);
		
		fprintf(temp , "%s" , okunan1);
	}while(! feof(fp));
	
	do{
		fscanf(temp , "%s" , okunan2);
		fprintf(filep , "%s" , okunan2);
	}while(! feof(temp));
	
	fclose(fp);
	fclose(filep);
	fclose(temp);
	
	//Soru 27)
	FILE *fp;
	fp = fopen("dosya1.txt" , "r");
	
	if(fp == NULL){
		printf("Dosya acmada hata oldu.");
		exit(1);
	}
	
	int sayac;
	char aranan;
	aranan = 'a';
	char harf;
	
	do{
		harf = getc(fp);
		if(harf==aranan){
			sayac++;
		}
	}while(! feof(fp));
	
	
	
	if(sayac!=0){
		printf("Aranan karakter vardir.");
	}
	else { 
	    printf("Aranan karakter yoktur.");
	}
	
	fclose(fp);
	
	
	
	
	
	//Bu soru için <string.h> kütüphanesi kullanýlmýþtýr. karþýlaþtýrýlan iki deðer strcmp( a , b) þeklinde yazýlýr ve sonuç 0 ise stringler aynýdýr.
	//Soru 28)
	FILE *fp;
	fp = fopen("dosya1.txt" , "r");
	
	if(fp == NULL){
		printf("Dosya acmada hata oldu.");
		exit(1);
	}
	
	int sayac=0 , sonuc;
	char aranan[40];
	printf("bir string giriniz:");
	gets(aranan);
	char okunan[100];
	
	do{
		fscanf(fp , "%s" ,  okunan);
		sonuc = strcmp(aranan , okunan);
		if(sonuc==0){
			sayac++;
		}
		
	}while(! feof(fp));
	
	
	
	if(sayac!=0){
		printf("Aranan string vardir.");
	}
	else { 
	    printf("Aranan string yoktur.");
	}
	
	fclose(fp);
	
	
	
	//Soru 31)
	FILE *fp;
	fp = fopen("deneme.txt" , "r");
	if(fp == NULL){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	
	int i=0 ,sayi; 
	int dizi[100];
	do{
		fscanf(fp , "%d" , &sayi);
		dizi[i] = sayi;
		i++;
	}while(! feof(fp));
	
	for(i=0; i<4; i++){
		printf("%d " , dizi[i]);
	}
	fclose(fp);
	
	//Soru 31)
	FILE *fp;
	FILE *fw;
	fp = fopen("deneme.txt" , "r");
	
	if(fp == NULL){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	char buffer[100];
	
	do{
		fgets(buffer, 100, fp);
		fw = fopen("buffer.txt" , "w");
		fprintf(fw , "%s" , buffer);
		
	}while(! feof(fp));
	fclose(fp);
	fclose(fw);
	
	
	//Soru 32)
	FILE*fp;
	fp = fopen("deneme.txt" , "r");
	
	if(fp==NULL){
		printf("Dosya okumada hata oldu.");
		exit(1);
	}
	int sayac=0;
	char okunan[100];
	do{
		fscanf(fp, "%s" , okunan );
		sayac++;
	}while(! feof(fp));
	
	printf("Metindeki satir sayisi:%d" , sayac);
	
	fclose(fp);
	
	
	//Soru 33)
	FILE *words;
	FILE *characters;
	
	words = fopen("deneme.txt" , "r");
	characters = fopen("deneme.txt" , "r");
	
	if(words == NULL){
		printf("Dosya acmada hata oldu.");
		exit(1);
	}
	if(characters == NULL){
		printf("Dosya acmada hata oldu.");
	}
	int wordsCount=0 , characterCounts=0;
	char okunan[100];
	char character;
	do{
		  character = fgetc(characters);
		  characterCounts++;
		
	}while(! feof(characters));
	
	do{
		  fscanf(words , "%s" , okunan);
		  wordsCount++;
		
	}while(! feof(words));
	
	printf("wordsCount:%d characterCounts:%d" , wordsCount , characterCounts);
	
	fclose(words);
	fclose(characters);
	*/
	
	return 0;
}
