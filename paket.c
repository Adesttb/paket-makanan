#include <stdio.h>
int main()
{
	int menu, nasi=3000, ayam_bakar=7000, tahu=1000, tempe=1000, lalap=2000,
    air_mineral=3000, sayur_asem=2000, gepuk=5000, air_hangat=1000,jumlah_pesanan,total,pajak,total_akhir;
   
    printf("=========Selamat datang di ade.k Resto========== \n\n");
    printf("\tPAKET MAKANAN \t\n");
    printf("\t=============\t\n");
    printf("==Paket 1== \n");
	printf("nasi        1 (posi)\n");
	printf("ayam bakar  1 (potong)\n");
	printf("tahu        1 (pcs)\n");
	printf("tempe       1 (pcs)\n");
	printf("lalapan     1 (porsi)\n");
	printf("Air mineral 1 (gelas)\n");
	printf("\n");
    printf("==Paket 2== \n");
	printf("nasi        1 (posi)\n");
	printf("ayam bakar  1 (potong)\n");
	printf("sayur asem  1 (mangkok)\n");
	printf("tahu        1 (pcs)\n");
	printf("tempe       1 (pcs)\n");
	printf("lalapan     1 (porsi)\n");
	printf("Air mineral 1 (gelas)\n");
	printf("\n");
    printf("==Paket 3== \n");
	printf("nasi        1 (posi)\n");
	printf("ayam bakar  1 (potong)\n");
	printf("gepuk       1 (potong)\n");
	printf("tahu        1 (pcs)\n");
	printf("tempe       1 (pcs)\n");
	printf("lalapan     1 (porsi)\n");
	printf("Air mineral 1 (gelas)\n");
	printf("\n");
    printf("Silakan pilih paket menu yang ada :\n");
	printf("paket =");
    scanf("%d",&menu);
    printf("Banyaknya pesanan :");
    scanf("%d",&jumlah_pesanan);
    printf("\n");
   
    switch (menu){
           case 1 :
                printf("Paket 1 \n");
                printf("Nasi :%d",nasi);
                printf("\nAyam Bakar :%d",ayam_bakar);
                printf("\nTahu  :%d",tahu);
                printf("\nTempe :%d",tempe);
                printf("\nLalapan :%d",lalap);
                printf("\nAir Mineral :%d",air_mineral);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+ayam_bakar+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 1 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 2 :
                printf("Paket 2 \n");
                printf("Nasi :%d",nasi);
                printf("\nAyam Bakar :%d",ayam_bakar);
                printf("\nSayur Asem :%d",sayur_asem);
                printf("\nTahu :%d",tahu);
                printf("\nTempe :%d",tempe);
                printf("\nLalapan :%d",lalap);
                printf("\nAir Mineral :%d",air_mineral);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+ayam_bakar+sayur_asem+tahu+tempe+lalap+air_mineral)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 2 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
            case 3 :
                printf("Paket 3 \n");
                printf("Nasi :%d",nasi);
                printf("\nGepuk :%d",gepuk);
                printf("\nTahu :%d",tahu);
                printf("\nTempe :%d",tempe);
                printf("\nLalapan :%d",lalap);
                printf("\nAir Hangat :%d",air_hangat);
                printf("\nJumlah pesanan :%d paket",jumlah_pesanan);
                total=(nasi+gepuk+tahu+tempe+lalap+air_hangat)*jumlah_pesanan;
                pajak=(total)*10/100;
                total_akhir=total+pajak;
                printf("\n");
                printf("\nTotal, paket 3 * %d :%d",jumlah_pesanan,total);
                printf("\nPajak 10 persen : %d",pajak);
                printf("\nJadi, total yang harus anda bayar :%d",total_akhir);
                printf("\n");
           break;
           default:
                   printf("Maaf, Paket yang anda pilih tidak ada didalam menu..!! Silahkan Coba lagi :)\n");
                   }
           system("pause");
           return 0;
}
