#include<stdio.h>

int main(){
    char kode[2];
    char repitisi[2];
    int jenis;
    int menu;
    int jumlah;
    int total;
    int pembayaran;
    int kembalian;
    int nomer;
    int saldo;
    
    //Kasir Minimarket
    puts("PROGRAM KASIR MINIMARKET");
    
    do{
        puts("----------------------------------------");
        puts("MENU");
        puts("1. Pembelian barang");
        puts("2. Top Up E-Wallet");
        puts("3. Informasi kode barang");
        printf("Masukkan pilihan menu: ");
        scanf("%d", &menu);
        
        if(menu==1){
            printf("Masukkan kode barang: ");
            scanf("%s", &kode);
            
            if(strcmp(kode,"A1")==0){
                printf("Nama barang            : Ultra Milk 250ml \n");
                printf("Harga barang satuan    : 5.000,- \n");
                printf("Masukkan jumlah barang :");
                scanf("%d", &jumlah);
                
                total=5000*jumlah;
                
                printf("Total harga : %d", total);
                
                do{
                    printf("\nMasukkan total uang pembayaran :");
                    scanf("%d", &pembayaran);
                
                    kembalian=pembayaran-total;
                    
                    if(total>pembayaran){
                        puts("Uang pembayaran kurang!");
                    }
                }while(total>pembayaran);
                
                printf("Kembalian pembayaran : %d", kembalian);
            }
            
            else if(strcmp(kode,"A2")==0){
                printf("Nama barang            : Indomie rendang 79gr \n");
                printf("Harga barang satuan    : 3.100,- \n");
                printf("Masukkan jumlah barang :");
                scanf("%d", &jumlah);
                
                total=3100*jumlah;
                
                printf("Total harga : %d", total);
                
                do{
                    printf("\nMasukkan total uang pembayaran :");
                    scanf("%d", &pembayaran);
                
                    kembalian=pembayaran-total;
                    
                    if(total>pembayaran){
                        puts("Uang pembayaran kurang!");
                    }
                }while(total>pembayaran);
                
                printf("Kembalian pembayaran : %d", kembalian);
            }
            
            else if(strcmp(kode,"A3")==0){
                printf("Nama barang            : Nabati Richeese wafer 50gr \n");
                printf("Harga barang satuan    : 2.000,- \n");
                printf("Masukkan jumlah barang :");
                scanf("%d", &jumlah);
                
                total=2000*jumlah;
                
                printf("Total harga : %d", total);
                
                do{
                    printf("\nMasukkan total uang pembayaran :");
                    scanf("%d", &pembayaran);
                
                    kembalian=pembayaran-total;
                    
                    if(total>pembayaran){
                        puts("Uang pembayaran kurang!");
                    }
                }while(total>pembayaran);
                
                printf("Kembalian pembayaran : %d", kembalian);
            }
            else{
                puts("Kode barang tidak dikenal!");
                printf("Silakkan cek kode barang di menu utama.");
            }
            
        }
        
        else if(menu==2){
            
            puts("1. Dana");
            puts("2. Ovo");
            puts("3. Gopay");
            printf("Masukkan jenis E-Wallet :");
            scanf("%d", &jenis);
            
            if(jenis==1){
                puts("\nJenis E-Wallet : Dana");
                puts("Biaya admin    : 2.000");
                puts("Minimal Top Up : 50.000");
                printf("\nMasukkan nomer customer : ");
                scanf("%d", &nomer);
                
                do{
                    printf("Masukkan jumlah saldo Top Up : ");
                    scanf("%d", &saldo);
                    
                    if(saldo<50000){
                        printf("Minimal Top Up : 50.000!\n");
                    }
                }while(saldo<50000);
                
                total=saldo+2000;
                
                printf("Total harga : %d", total);
                
                do{
                    printf("\nMasukkan total uang pembayaran :");
                    scanf("%d", &pembayaran);
                    
                    if(pembayaran<total){
                        printf("Uang pembayaran tidak mencukupi!");
                    }
                }while(pembayaran<total);
                
                kembalian=pembayaran-total;
                
                printf("Kembalian pembayaran : %d", kembalian);
            }
            
            else if(jenis==2){
                puts("\nJenis E-Wallet : Ovo");
                puts("Biaya admin    : 1.500");
                puts("Minimal Top Up : 20.000");
                printf("\nMasukkan nomer customer : ");
                scanf("%d", &nomer);
                
                do{
                    printf("Masukkan jumlah saldo Top Up : ");
                    scanf("%d", &saldo);
                    
                    if(saldo<20000){
                        printf("Minimal Top Up : 20.000!\n");
                    }
                }while(saldo<20000);
                
                total=saldo+1500;
                
                printf("Total harga : %d", total);
                
                do{
                    printf("\nMasukkan total uang pembayaran :");
                    scanf("%d", &pembayaran);
                    
                    if(pembayaran<total){
                        printf("Uang pembayaran tidak mencukupi!");
                    }
                }while(pembayaran<total);
                
                kembalian=pembayaran-total;
                
                printf("Kembalian pembayaran : %d", kembalian);
            }
            
            else if(jenis==3){
                puts("\nJenis E-Wallet : Gopay");
                puts("Biaya admin    : 2.000");
                puts("Minimal Top Up : 20.000");
                printf("\nMasukkan nomer customer : ");
                scanf("%d", &nomer);
                
                do{
                    printf("Masukkan jumlah saldo Top Up : ");
                    scanf("%d", &saldo);
                    
                    if(saldo<20000){
                        printf("Minimal Top Up : 20.000!\n");
                    }
                }while(saldo<20000);
                
                total=saldo+2000;
                
                printf("Total harga : %d", total);
                
                do{
                    printf("\nMasukkan total uang pembayaran :");
                    scanf("%d", &pembayaran);
                    
                    if(pembayaran<total){
                        printf("Uang pembayaran tidak mencukupi!");
                    }
                }while(pembayaran<total);
                
                kembalian=pembayaran-total;
                
                printf("Kembalian pembayaran : %d", kembalian);
            }
            
            else{
                puts("Jenis E-Wallet tidak dikenal!");
            }
        }
        
        else if(menu==3){
            puts("A1 : Ultra Milk 250ml");
            puts("A2 : Indomie rendang 79gr");
            puts("A3 : Nabati Richeese wafer 50gr");
        }
        
        else{
            puts("Pilihan menu tidak dikenal!");
        }
        printf("\n----------------------------------------");
        printf("\nApakah Anda ingin melanjutkan transaksi?\n");
        printf("(Y/N) :");
        scanf("%s", &repitisi);
    }while(strcmp(repitisi, "Y")==0 ||strcmp(repitisi, "y")==0);
  return 0;  
}