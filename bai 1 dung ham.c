#include <stdio.h>
#include <stdlib.h>
int tinh_tong(int a, int b){
        return a+b;
}
int tinh_hieu(int a, int b){
        return a-b;
}
int tinh_tich(int a, int b){
        return a*b;
}int tinh_thuong(int a, int b){
        return a/b;
}

int main()
{
    int a,b,tong,hieu,tich,thuong;
    char answer;
    int lc;
    printf("Nhap a va b :\n ");
    scanf("%d%d",&a,&b);
    printf("\Phep tinh:\n");
    printf("=============================\n");
    printf("1. Tinh tong\n2. Tinh hieu\n3. Tinh tich\n4. Tinh thuong\n5. Thoat\n");
    printf("\n=============================\n");
    do{
    printf("Chon chuc nang : ");
    scanf("%d", &lc);
            switch(lc){
            printf("Chon phep tinh : ");	

                case 1:
                    tong = tinh_tong(a,b);
                    printf("%d",tong);
                    break;

                case 2:
                    hieu = tinh_hieu(a,b);
                    printf("%d",hieu);
                    break;

                case 3:
                    tich = tinh_tich(a,b);
                    printf("%d",tich);
                    break;

                case 4:
                    thuong = tinh_thuong(a,b);
                    printf("%d",thuong);
                    break;

                case 5:
                    printf("Khet thuc!");
                    break;
            }
    printf("\nBan co muon dung may tinh tiep khong? (Y?N) :");
	fflush(stdin);
	scanf("%c",&answer);
   }while(answer=='y'||answer=='Y');
}
    
