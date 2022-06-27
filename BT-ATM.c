
#include <stdio.h>
#include <conio.h>
main()
{
int tk,tien;
char ch,key;
tk=10000;
printf("Chuong trinh mo phong may rut tien ATM");
do{
printf("\nMoi ban nhap:\nn de nop tien\nr de rut tien\nx de xem tai khoan \n Q de Thoat: "); scanf("%c",&ch);
switch(ch){
case 'n':{
printf("Moi ban nhap so tien can gui: "); scanf("%d",&tien);
tk+=tien;
printf("So tien trong tai khoan quy khach la: %d",tk);
getch();
break;
}
case 'r':
printf("Moi ban nhap so tien can rut: "); scanf("%d",&tien);
if(tien>tk){
printf("So tien ban rut lon hon so tien hien tai trong tai khoan.");
printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
getch();break;
}
else
if(tien%10000!=0){
printf("So tien can rut phai la boi so cua 10000.");
printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");

}
else{
tk-=tien;
printf("So tien con lai trong tai khoan quy khach la: %d",tk);
printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");

}
getch();break;

case 'x': printf("So tien trong tai khoan quy khach la: %d",tk);
printf("\nMoi ban nhan phim bat ki de tiep tuc, hoac Esc de thoat.");
getch();
break;
}

}while(ch !='q' );
}
