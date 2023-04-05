#include <stdio.h>

int main() {

    int Ar[10] = {2, 1, 4, 3, 6, 5, 8, 7, 10, 9};
    int i, tar, awal = 0, akhir = 10, tengah;

    printf("Datanya adalah = ");
    for (i = 0; i < 10; i++) {
        printf("%d ",Ar[i]);
    }

    printf("\nMasukan data yang akan dicari : ");
    scanf("%d", &tar);

    while (awal <= akhir) {
        tengah = (awal + akhir) / 2;
        if (tar > Ar[tengah]) {
            awal = tengah + 1;
        } else if (tar < Ar[tengah]) {
            akhir = tengah + 1;
        } else {
            awal = akhir + 1;
        }
    }

    if(tar == Ar[tengah]){
        printf("\nData ditemukan pada index ke-%d",tengah);
    }else{
        printf("Data tidak ditemukan..!");
    }

    for(i=0;i<(10-1);i++)
    {
        for(int j= i+1;j<10;j++)
        {
            if(Ar[i]>Ar[j])
            {
                int temp=Ar[i];
                Ar[i]=Ar[j];
                Ar[j]=temp;
            }
        }
    }

    //menampilkan data
    printf("\n\nAscending: ");
    for(i=0;i<10;i++){
        printf("%d ",Ar[i]);
    }

    //menampilkan data
    printf("\nDescending: ");
    for(i=9;i>=0;i--){
        printf("%d ",Ar[i]);
    }

    printf("\n");

    // NIM    : 10522014
    // Nama   : Arif Nur Ramadhan
    // Github : https://github.com/arifnrrmdn/tugas-1-binary-search.git

}