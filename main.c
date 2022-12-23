#include <stdio.h>
#include <math.h>
#define PI 3.14

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int standarthesap(){ // standart hesap makinesi
	int sayiTuru;
	int islemsecim;
	printf("Sayi Turunu Giriniz\n1-INTEGER\n2-KARMASIK\n");
	scanf("%d",&sayiTuru);
	
	if(sayiTuru == 1){
		int sayi1;
		int sayi2;
		int carpim;
		int toplam;
		printf("Yapmak Istediginiz Islemi Seciniz\n1-Toplama\n2-Carpma\n");
		scanf("%d",&islemsecim);
		
		switch(islemsecim){
			case 1: // toplama islemi
				printf("1.SAYIYI GIRINIZ\n");
				scanf("%d",&sayi1);
				printf("2.SAYIYI GIRINIZ\n");
				scanf("%d",&sayi2);
				toplam = sayi1+ sayi2;
				printf("TOPLAM = %d\n",toplam);
				break;
			case 2: // carpma islemi
				printf("1.SAYIYI GIRINIZ\n");
				scanf("%d",&sayi1);
				printf("2.SAYIYI GIRINIZ");
				scanf("%d",&sayi2);
				carpim = sayi1 * sayi2;
				printf("CARPIM = %d",carpim);
				break;
			default:
				printf("");
				
				
		}
	}else if(sayiTuru == 2){ // karmasik sayilarda islemler
		int reel1;
		int sanal1;
		int reel2;
		int sanal2;
		int sonuc_reel;
		int sonuc_sanal;
		int karmasiktoplamreel;
		int karmasiktoplamsanal;
		
		printf("YAPMAK ISTEDIGINIZ ISLEMI SECINIZ\n1-TOPLAMA\n2-CARPMA\n");
		scanf("%d",&islemsecim);
		switch(islemsecim){
			case 1: // karmasik sayilarda toplama
				printf("1.DEGERI GIRINIZ(ONCE REEL KISMINI)\n");
				scanf("%d %d",&reel1,&sanal1);
				printf("2.DEGERI GIRINIZ(ONCE REEL KISMINI)\n");
				scanf("%d %d",&reel2,&sanal2);
				karmasiktoplamreel = reel1 + reel2;
				karmasiktoplamsanal = sanal1 + sanal2;
				printf("TOPLAM = %d + %di\n",karmasiktoplamreel,karmasiktoplamsanal);
				break;
			case 2: // karmasik sayilarda carpma
				printf("1.DEGERI GIRINIZ(ONCE REEL KISMINI)\n");
				scanf("%d %d",&reel1,&sanal1);
				printf("2.DEGERI GIRINIZ(ONCE REEL KISMINI)\n");
				scanf("%d %d",&reel2,&sanal2);
				sonuc_reel = (reel1 * reel2) - (sanal1 * sanal2);
				sonuc_sanal = (reel1 * sanal2) + (sanal1 * reel2);
				printf("CARPIM = %d + %di\n",sonuc_reel,sonuc_sanal);
				break;
			default:
				printf("Gecersiz Secim\n");
		}
		
	}
	return 0;
}
int alancevre(){ // sekillerde alan ve cevre bulma
	int sekil;
	float alan;
	float cevre;
	float kenar1;
	float kenar2;
	float kenar3;
	float yaricap;
	float s;
	
	
	printf("SEKIL SECINIZ\n1-DIKDORTGEN\n2-UCGEN\n3-DAIRE\n");
	scanf("%d",&sekil);
	
	switch(sekil){
		case 1: // dikdortgen cevre ve alan
			printf("DIKDORTGENIN IKI KENARINI GIRINIZ\n");
			scanf("%f %f",&kenar1,&kenar2);
			cevre = (kenar1 * 2) + (kenar2 * 2);
			alan = kenar1 * kenar2;
			printf("CEVRE = %f\nALAN = %f\n",cevre,alan);
			break;
		case 2: // ucgen cevre ve alan(her formulu)
			printf("UCGENIN 3 KENARINI GIRINIZ\n");
			scanf("%f %f %f",&kenar1,&kenar2,&kenar3);
			cevre = kenar1 + kenar2 + kenar3;
			s =(kenar1+kenar2+kenar3) /2;
			alan = sqrt(s*(s-kenar1)*(s-kenar2)*(s-kenar3));
			printf("CEVRE = %f\nALAN = %f\n",cevre,alan);
			break;
		case 3: // daire cevre ve alan hesaplama
			printf("DAIRENIN YARICAPINI GIRINIZ\n");
			scanf("%f",&yaricap);
			cevre = 2* PI*yaricap;
			alan =PI *yaricap*yaricap;
			printf("CEVRE = %f\nALAN = %f\n",cevre,alan);
			break;
			
	}
	
	return 0;
}

int sicaklikhesap(){//sicalik donusumu
	
	int islemsecim;
	float derece;
	float kelvin;
	float fahrenheit;
	
	printf("YAPACAGINIZ ISLEMI SECINIZ\n1-FAHRENHEIT'DEN KELVIN'E\n2-KELVIN'DEN FAHRENHEIT'E\n");
	scanf("%d",&islemsecim);
	
	switch(islemsecim){
		case 1: // fahrenheitden kelvine cevirme
			printf("FAHRENHEIT CINSINDEN SICAKLIGI GIRINIZ\n");
			scanf("%f",&fahrenheit);
			kelvin = (((5) * (fahrenheit-32))/9) +273.15;
			printf("KELVIN DEGERI = %f\n",kelvin);
			break;
		case 2: // kelvinden fahrenheita cevirme
			printf("KELVIN CINSINDEN SICAKLIGI GIRINIZ\n");
			scanf("%f",&kelvin);
			fahrenheit = ((9 * (kelvin -273.15))/5) +32;
			printf("FAHRENHEIT DEGERI = %f\n",fahrenheit);
			break;
	}
	return 0;	
}


int main(int argc, char *argv[]) {
	
	system("COLOR 3");
	printf("EGEMEN SANAL\nOGRENCI NO:1220505051\n\n");
	
	int secim;
	printf("COKLU HESAP MAKINESI\n1-Standart Hesap Makinesi\n2-Alan&Cevre Hesaplama\n3-Sicaklik Hesaplama\n");
	scanf("%d",&secim);
	
	if(secim == 1){
		standarthesap(); // standart hesap makinesi fonk. cagirma
	}else if(secim ==2){
		alancevre(); // alan ve cevre hesaplayici fonk. cagirma
	}else if(secim ==3){
		sicaklikhesap(); //sicaklik hesaplayici fonk. cagirma
	}else{
		printf("GECERSIZ SECIM\n");
	}
	return 0;
}
