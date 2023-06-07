#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	/*
	//Soru 1)
	//  Hamza Yorgun 21.10.2018 
	float sayi1;
	printf("bir sayi giriniz:");
	scanf("%f" ,&sayi1);
	if (sayi1>0) {
	 printf("sayi pozitiftir");
	}
	else if(sayi1==0) {
     printf("sayi sifirdir");
	}
	else {
	 printf("sayi negatiftir");
	}
    
	//Soru 2)
	// Hamza Yorgun 21.10.2018 	
	int sayi1,sayi2,sayi3;
	printf("ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("ucuncu  sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	 if (sayi1>sayi2 && sayi1>sayi3) {
	    printf("birinci sayi buyuktur");
	}
	else if(sayi2>sayi1 && sayi2>sayi3){
		printf("ikinci sayi buyuktur");
	}
	else if(sayi3>sayi1&&sayi3>sayi2){
	
		printf("ucuncu sayi buyuktur");
	}
    else {
	    printf("sayilar esittir");
    }
	
	
	
	//Soru 3)
	// Hamza Yorgun 21.10.2018
	int sayi1,sayi2,sayi3;
	printf("ilk sayiyi giriniz:");
	scanf("%d",&sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d",&sayi2);
	printf("ucuncu  sayiyi giriniz:");
	scanf("%d",&sayi3);
	
	 if (sayi1<sayi2 && sayi1<sayi3) {
	    printf("birinci sayi kucuktur");
	}
	else if(sayi2<sayi1 && sayi2<sayi3){
		printf("ikinci sayi kucuktur");
	}
	else if(sayi3<sayi1&&sayi3<sayi2){
	
		printf("ucuncu sayi kucuktur");
	}
    else {
	    printf("sayilar esittir");
    }
    
	
	
	
	//Soru 4)
	// Hamza Yorgun 21.10.2018
	float ilkhiz, sonhiz, sure, ivme;
	printf("ilk hizi giriniz:");
	scanf("%f", &ilkhiz);
	printf("son hizi giriniz:");
	scanf("%f", &sonhiz);
	printf("sureyi giriniz:");
	scanf("%f", &sure);
	ivme = (ilkhiz-sonhiz)/sure;
    if (ivme>0) {
    	printf("HIZLANIYOR");
	}
	else if(ivme<0){
		printf("YAVASLIYOR");
	}
	else if(ivme==0){
		printf("SABIT HIZDA");
	}
	
	
	//Soru 5)
	//Hamza Yorgun 21.10.2018
	
	float vize,final,odev,donemsonunotu;
	printf("vize notunuzu giriniz:");
	scanf("%f", &vize);
	printf("final notunuzu giriniz:");
	scanf("%f", &final);
	printf("odev notunuzu giriniz:");
	scanf("%f", &odev);
	donemsonunotu = (0.3*vize)+(0.2*odev)+(0.5*final);
	if (donemsonunotu<0 || donemsonunotu>100 ){
		printf("HATALI NOT GIRISI!!");
	}
	
	else if (donemsonunotu>=70) {
		printf("GECTINIZ");
    }
	else {
		printf("KALDINIZ");
	}
    	
	 
	//Soru 6)
	//Hanza Yorgun 21.10.2018
	float sayi1, sayi2, sonuc, islemnumarasi;
	printf("birinci sayiyi giriniz:");
	scanf("%f", &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%f", &sayi2);
	printf("\n1)Toplama\n");
	printf("2)Cikarma\n");
	printf("3)Carpma\n");
	printf("4)Bolme\n");
	printf("\nYaptirmak istediginiz islemin numarasini seciniz:");
	scanf("%f", &islemnumarasi);
	if(islemnumarasi<1 || islemnumarasi>4){
		printf("HATALI ISLEM NUMARASI!");
	}
	else if (islemnumarasi==1){
		sonuc=sayi1+sayi2;
		printf("\ntoplama sonucunuz:%f dir", sonuc);
	}
	else if (islemnumarasi==2){
		sonuc=sayi1-sayi2;
		printf("\ncikarma sonucunuz:%f dir", sonuc);
	}
	else if (islemnumarasi==3){
		sonuc=sayi1*sayi2;
		printf("\ncarpma sonucunuz:%f dir", sonuc);
	}
	else if (islemnumarasi==4){
		sonuc=sayi1/sayi2;
		printf("\nbolme sonucunuz:%f dir", sonuc);
	}
	
	
	
	
	//Soru 7)
	//Hamza Yorgun 21.10.2018
	char x;
	printf("not harfinizi giriniz:");
	scanf("%c", &x);
	if (x!='A' &&  x!='B' && x!='C' && x!='D' && x!='E' )  {
		printf("HATALI NOT GIRISI!");
	}
	else if (x=='A'){
		printf("Excellent");
	}
		else if (x=='B'){
		printf("Good");
	}
		else if (x=='C'){
		printf("Average");
	}
		else if (x=='D'){
		printf("Low");
	}
		else if (x=='E'){
		printf("Very Low");
	}
	
	
	
	//Soru 8)
	//Hamza Yorgun 22.10.2018
	
	float toplam, toplam2, toplam3, kenar1, kenar2, kenar3;
	printf("birinci kenari giriniz:");
	scanf("%f", &kenar1);
	printf("ikinci kenari giriniz:");
	scanf("%f", &kenar2);
	printf("ucuncu kenari giriniz:");
	scanf("%f", &kenar3);
	toplam = kenar1+kenar2;
	
	if (toplam>=kenar3 && (toplam-kenar2+kenar3)>=kenar2 && (toplam-kenar1+kenar3)>=kenar1) {
		printf("Ucgen olusur");
	}
	else {
		printf("Ucgen olusmaz");
	}
	
	
	
	//Soru 9)
	//Hamza Yorgun 22.10.2018
	char harf;
	printf("bir harf giriniz:");
	scanf("%c", &harf);
	if (harf<65 || harf>=91 && harf<=96 || harf>122 ) {
		printf("Girdiginiz harf degildir");
	}
	else if (harf=='A'|| harf=='E' || harf=='I' || harf=='O' || harf=='a'|| harf=='e' || harf=='i'|| harf=='o'){
		printf("Sesli harftir");
	}
	else {
		printf("Sesli harf degildir");
	}
	*/
	
	//Soru 10)
	//Hamza Yorgun 22.10.2018
	int sayi1, sayi2, sayi3;
	printf("birinci sayiyi giriniz:");
	scanf("%d", &sayi1);
	printf("ikinci sayiyi giriniz:");
	scanf("%d", &sayi2);
	printf("ucuncu sayiyi giriniz:");
	scanf("%d", &sayi3);
	if(sayi1<sayi2 && sayi1<sayi3){
		if(sayi2<=sayi3){
			printf("%d %d %d", sayi1,sayi2,sayi3);
		}
		else{
			printf("%d %d %d", sayi1,sayi3,sayi2);
		}
	}
	else if(sayi2<sayi1 && sayi2<sayi3){
		if(sayi1<=sayi3){
			printf("%d %d %d", sayi2,sayi1,sayi3);
		}
		else{
			printf("%d %d %d", sayi2,sayi3,sayi1);
		}
	}
	else if(sayi3<sayi1 && sayi3<sayi2){
		if(sayi1<=sayi2){
			printf("%d %d %d", sayi3,sayi1,sayi2);
		}
		else{
			printf("%d %d %d", sayi3,sayi2,sayi1);
		}
	}
	
	/*
	//Soru 11)
	//Hanza Yorgun 21.10.2018	
    float gram1, gram2, fiyat1, fiyat2, sonuc1, sonuc2;
    printf("birinci urunun gramini giriniz(kg cinsinden):");
    scanf("%f", &gram1);
    printf("birinci urunun fiyatini giriniz:");
    scanf("%f", &fiyat1);
    printf("ikinci urunun gramini giriniz(kg cinsinden):");
    scanf("%f", &gram2);
	printf("ikinci urunun fiyatini giriniz:");
    scanf("%f", &fiyat2);
	sonuc1 = fiyat1/gram1;
	sonuc2 = fiyat2/gram2;
	if (sonuc1 < sonuc2 ){
		printf("\n birinci urun avantajlidir");
	}
	else if(sonuc2 < sonuc1){
		printf("\n ikinci urun avantajlidir");
	}
	else if(sonuc1==sonuc2){
		printf("\n urunler esit avantajlidir");
	}
	

	//Soru 12)
	//Hamza Yorgun 23.10.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi );
	if(sayi<1 || sayi>12){
		printf("boyle bir ay bulunmamaktadir! 12 ay vardir.");
	}
	else if(sayi==1){
	  printf("Ocak");
	}
	else if(sayi==2){
	 printf("Subat");
   }
    else if(sayi==3) {
     printf("Mart"); 
    }
    else if(sayi==4) {
     printf("Nisan"); 
    }
    else if(sayi==5) {
     printf("Mayis"); 
    }
    else if(sayi==6) {
     printf("Haziran"); 
    }
    else if(sayi==7) {
     printf("Temmuz"); 
    }
    else if(sayi==8) {
     printf("Agustos"); 
    }
    else if(sayi==9) {
     printf("Eylul"); 
    }
    else if(sayi==10) {
     printf("Ekim"); 
    }
    else if(sayi==11) {
     printf("Kasim"); 
    }
    else {
    	printf("Aralik");
	}
		
	
	//Soru 13)
	//Hamza Yorgun 23.10.2018
	int sayi;
	printf("bir sayi giriniz:");
	scanf("%d", &sayi );
	if(sayi<1 || sayi>7){
		printf("boyle bir gun bulunmamaktadir! 7 gun vardir.");
	}
	else if(sayi==1){
	  printf("Pazartesi");
	}
	else if(sayi==2){
	 printf("Sali");
   }
    else if(sayi==3) {
     printf("Carsamba"); 
    }
    else if(sayi==4) {
     printf("Persembe"); 
    }
    else if(sayi==5) {
     printf("Cuma"); 
    }
    else if(sayi==6) {
     printf("Cumartesi"); 
    }
    else if(sayi==7) {
     printf("Pazar"); 
    }
    
	
	//Soru 14)
    //Hamza Yorgun 23.10.2018
    float aci1, aci2, aci3, ickenartoplam;
    printf("birinci aciyi giriniz:");
    scanf("%f", &aci1);
    printf("ikinci aciyi giriniz:");
    scanf("%f", &aci2);
    printf("ucuncu aciyi giriniz:");
    scanf("%f", &aci3);
    ickenartoplam = aci1+aci2+aci3;
    if(ickenartoplam==180) {
    	printf("bir ucgen olusur.");
    }
    else {
    	printf("ucgen olusmaz.");
	}
	
	
	//Soru 15)
	//Hamza Yorgun 23.10.2018
	float alisfiyati, satisfiyati, karorani, zararorani;
	printf("Alis fiyatinizi giriniz:");
	scanf("%f", &alisfiyati);
    printf("Satis fiyatinizi giriniz:");
	scanf("%f", &satisfiyati);
	karorani = (satisfiyati-alisfiyati)/alisfiyati*100;
	if(karorani>0) {
		printf("Bu satistan  %f kar edilmistir ", karorani);
	}
	else if(karorani<0) {
		zararorani = ((satisfiyati-alisfiyati)/alisfiyati*100)*-1;
		printf("zarar oraniniz: %fdir", zararorani);
	}
	
	
	//Soru 16)
	//Hamza Yorgun 23.10.2018
	int rakam;
	printf("bir rakam giriniz:");
	scanf("%d", &rakam);
	if(rakam<0 || rakam>9) {
		printf("Bu bir rakam degildir.");
	}
	else if (rakam==0){
		printf("SIFIR");
	}
	else if (rakam==1){
		printf("BIR");
	}
    else if (rakam==2){
		printf("IKI");
	}
	else if (rakam==3){
		printf("UC");
	}
	else if (rakam==4){
		printf("DORT");
	}
	else if (rakam==5){
		printf("BES");
	}
	else if (rakam==6){
		printf("ALTI");
	}
	else if (rakam==7){
		printf("YEDI");
	}
	else if (rakam==8){
		printf("SEKIZ");
	}
	else{
		printf("DOKUZ");
	}
	
	//Soru 17)
	//Hamza Yorgun 23.10.2018
	float notortalamasi;
	printf("not ortalamasi giriniz(4 uzerinden):");
	scanf("%f", &notortalamasi);
	if (notortalamasi<0 || notortalamasi>4 || ){
		printf("Hatali not girisi!");
	}
	else if(notortalamasi<=4 && notortalamasi>=3.5){
		printf("Notunuz A");
	}
	else if(notortalamasi<3.5 && notortalamasi>=3.0){
		printf("Notunuz B");
	}
	else if(notortalamasi<3.0 && notortalamasi>=2.5){
		printf("Notunuz C");
	}
	else if(notortalamasi<2.5 && notortalamasi>=2.0){
		printf("Notunuz D");
	}
	else if(notortalamasi<2 && notortalamasi>=1.5){
		printf("Notunuz E");
	}
	else if(notortalamasi<1.5 && notortalamasi>=0){
		printf("Notunuz F");
	}
	
	
	//Soru 18)
	//Hamza Yorgun 23.10.2018
    float cinsiyet, kanbasinci;
    printf("Cinsiyetiniz Erkek ise 1 Bayan ise 0 yaziniz.\n");
    scanf("%f", &cinsiyet);
    printf("Kan basinicinizi giriniz:");
    scanf("%f", &kanbasinci);
    if(cinsiyet<0 || cinsiyet>1){
    	printf("Hatali cinsiyet girdiniz");
    }
	else if (cinsiyet==1) {
    	if (kanbasinci>0 && kanbasinci<=90)
    	 printf("Kan basinciniz dusuktur");
    	else if(kanbasinci>90 && kanbasinci<=125)
    	 printf("Kan basinciniz normaldir");
    	else 
		 printf("Kan basinciniz yuksektir");
    }
    else {
    	if (kanbasinci>0 && kanbasinci<=80)
    	 printf("Kan basinciniz dusuktur");
    	else if(kanbasinci>80 && kanbasinci<=120)
    	 printf("Kan basinciniz normaldir");
    	else 
		 printf("Kan basinciniz yuksektir");
	}
	
	
	//Soru 19)
	//23.10.2018
	float sonuc, satis;
	printf("satisinizi giriniz:");
	scanf("%f", &satis);
	if(satis<100) {
		printf("Komisyon yok");
	}
	else if (satis>=100 || satis<1000) {
		sonuc = (satis*10)/100;
		printf("Komisyonunuz: %f dolardir", sonuc);
	}
	else if (satis>=1000) {
        sonuc = 100+(satis*20)/100;
		printf("Komisyonunuz: %f dolardir", sonuc);    
	}
	*/
   
}
