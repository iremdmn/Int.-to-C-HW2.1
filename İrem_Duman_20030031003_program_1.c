#include <stdio.h>

int main(){

    int secim;//hangi iþlemi seçeceði

    //her fonksiyonda kullanýlacak, deðiþmeyecek olduðu için global
    int vizeFinal[10][2]={

    {45,77},
    {88,80},
    {5,9},
    {45,55},
    {86,90},
    {34,29},
    {60,70},
    {96,70},
    {72,60},
    {35,58}
};

float enBuyuk=-1;
float enKucuk=101;

//birinci iþlem
float enYuksek(float enBuyuk){
    float gecmeNotu;
    int i;

	for(i=0;i<10;i++){
	    gecmeNotu=vizeFinal[i][0]*0.4+vizeFinal[i][1]*0.6;
	    if(gecmeNotu>enBuyuk){
		    enBuyuk=gecmeNotu;
	    }
    }return enBuyuk;
}
//ikinci iþlem
float enDusuk(float enKucuk){
    float gecmeNotu;
    int i;
    int index=0;

	for(i=0;i<10;i++){
	    gecmeNotu=vizeFinal[i][0]*0.4+vizeFinal[i][1]*0.6;
	    if(gecmeNotu<enKucuk){
		    enKucuk=gecmeNotu;
		    index=i;

	    }
    }return index;
}

//üçüncü islem
float vizeTop;
float finalTop;
float vizeOrt;
float finalOrt;

float Ortalamalar(float vizeOrt){
    int i;
    for(i=0;i<10;i++){
        vizeTop+=vizeFinal[i][0];
    }
    vizeOrt=vizeTop*0.1;

return vizeOrt;

}
float finaal(float finalort){
    int i;
    for(i=0;i<10;i++){
        finalTop+=vizeFinal[i][1];
    }
    finalOrt=finalTop*0.1;
return finalOrt;
}
//dersten geçenler
int j;
float gecmeNotu;

void derstenGecenler(int j){
    for(j=0;j<10;j++){
        gecmeNotu=vizeFinal[j][0]*0.4+vizeFinal[j][1]*0.6;
        if(gecmeNotu>=60){
        printf("%d. ogrenci dersten gecti.\n",j+1);
        }
    }
}
//dersten kalanlar
void derstenKalanlar(int j){
    for(j=0;j<10;j++){
        gecmeNotu=vizeFinal[j][0]*0.4+vizeFinal[j][1]*0.6;
        if(gecmeNotu<60){
        printf("%d. ogrenci dersten kaldi.\n",j+1);
        }
    }
}


    //menüyü tekrar getirmek için
    tekrarSor:
    printf("\n\nLUTFEN MENUDEN SECIM YAPINIZ:\n****************************************************\n1.Gecme notu en yuksek ogrenci\n2.Geçme Notu en dusuk ogrenci\n3.Dersin Vize ve Final Ortalamalari\n4.Dersten gecen ogrenciler\n5.Dersten kalan ogrenciler\n*****************************************************");
    scanf("%d",&secim);

    //menü iþlemleri
    switch(secim){
        case 1:
        //birinci iþlem fonksiyonu çaðýrma
            printf("en yuksek not:%f",enYuksek(enBuyuk));
            break;
        case 2:
        //ikinci iþlem fonksiyonu çaðýrma
            printf("en dusuk not:%f",enDusuk(enKucuk));
            break;
        case 3:
            printf("vize ortlamasi:%f\nfinal ortalamasi:%f",Ortalamalar(vizeOrt),finaal(finalOrt));
            break;
        case 4:
            derstenGecenler(j);
            break;
        case 5:
            derstenKalanlar(j);
            break;

    }

    goto tekrarSor;


return 0;
}
