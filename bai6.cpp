#include <stdio.h>

int main() {
    int arr[100][100];
	int rows = 0, colums = 0;
	int pick;
    do{
        printf("\nMENU\n");
        printf("1.Nhap kich co va gia tri cac phan tu cua mang\n");
        printf("2.In gia tri cac phan tu cua mang theo ma tran\n");
        printf("3.In gia tri cac phan tu le va tinh tong\n");
        printf("4.In cac phan tu tren duong bien va tinh tich\n");
        printf("5.In cac phan tu tren duong cheo chinh\n");
        printf("6.In cac phan tu tren duong cheo phu\n");
        printf("7.In ra dong co tong gia tri cac phan tu lon nhat\n");
        printf("8.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &pick);
        switch (pick){
            case 1:{
                printf("nhap hang: ");
                scanf("%d", &rows);
                printf("nhap cot: ");
                scanf("%d", &colums);
                for (int i=0; i<rows; i++){
                    for (int j=0; j<colums; j++){
                        printf("Nhap phan tu [%d][%d]: ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
                break;
            }
            case 2:{
                printf("mang hien tai: \n");
                for (int i=0; i<rows; i++) {
                    for (int j = 0; j<colums; j++){
                        printf("%d ", arr[i][j]);
                    }
                    printf("\n");
                }
                break;
            }
            case 3:{
                int sum = 0;
                printf("cac phan tu le: ");
                for (int i=0; i<rows; i++){
                    for (int j=0; j<colums; j++){
                        if (arr[i][j]%2 != 0){
                            printf("%d ", arr[i][j]);
                            sum+= arr[i][j];
                        }
                    }
                }
                printf("\ntong cac phan tu le: %d\n", sum);
                break;
            }
            case 4:{
                int tich = 1;
                printf("Cac phan tu tren duong bien: ");
                for (int i=0; i<rows; i++) {
                    for (int j=0; j<colums; j++){
                        if (i==0 || i==rows - 1 || j==0 ||j==colums - 1) {
                            printf("%d ", arr[i][j]);
                            tich*= arr[i][j];
                        }
                    }
                }
                printf("\nTich cac phan tu tren duong bien: %d\n", tich);
                break;
            }
            case 5:{
                printf("Cac phan tu tren duong cheo chinh: ");
                for (int i=0; i<rows && i<colums; i++){
                    printf("%d ", arr[i][i]);
                }
                printf("\n");
                break;
            }
            case 6:{
                printf("Cac phan tu tren duong cheo phu: ");
                for (int i=0; i<rows && i<colums; i++) {
                    printf("%d ", arr[i][colums - i - 1]);
                }
                printf("\n");
                break;
            }
            case 7:{
                int maxSum= -1, maxRow= -1;
                for (int i=0; i<rows; i++){
                    int sum = 0;
                    for (int j=0; j<colums; j++){
                        sum+= arr[i][j];
                    }
                    if (sum>maxSum){
                        maxSum=sum;
                        maxRow=i;
                    }
                }
                printf("Dong co tong lon nhat la: %d voi tong = %d\n", maxRow + 1, maxSum);
                break;
            }
            case 8:
                break;
            default:
                printf("khong hop le");
        }
    }while (pick!= 8);
    return 0;
}
