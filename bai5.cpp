#include<stdio.h>

int main() {
    int arr[100]; 
	int n; 
	int pick;
    do {
        printf("\nMENU\n");
        printf("1.Nhap so phan tu va gia tri cac phan tu\n");
        printf("2.In ra gia tri cac phan tu dang quan ly\n");
        printf("3.In ra cac phan tu chan va tinh tong\n");
        printf("4.In ra gia tri lon nhat va nho nhat\n");
        printf("5.In ra cac phan tu la so nguyen to va tinh tong\n");
        printf("6.Thong ke so luong mot gia tri trong mang\n");
        printf("7.Them mot phan tu vao vi tri chi dinh\n");
        printf("8.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &pick);
        switch (pick){
            case 1:{
                printf("so luong phan tu: ");
                scanf("%d", &n);
                for (int i=0; i<n; i++){
                    printf("nhap phan tu thu %d: ", i + 1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2:{
                printf("cac phan tu trong mang la: ");
                for (int i=0; i<n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break;
				}
            case 3:{
                int sum=0;
                printf("Cac phan tu chan: ");
                for (int i=0; i<n; i++) {
                    if (arr[i]%2 == 0) {
                        printf("%d ", arr[i]);
                        sum+=arr[i];
                    }
                }
                printf("\ntong cac phan tu chan: %d\n", sum);
                break;
            }
            case 4: {
                int max=arr[0];
				int min=arr[0];
                for (int i=1; i<n; i++) {
                    if (arr[i]>max){
						max = arr[i];
					}
                    if (arr[i]<min){
						min = arr[i];
					}
                }
                printf("gia tri lon nhat: %d\n", max);
                printf("gia tri nho nhat: %d\n", min);
                break;
            }
            case 5:{
                int sum=0;
                printf("cac so nguyen to: ");
                for (int i=0; i<n; i++){
                    if ((arr[i])%i != 0){
                        printf("%d ", arr[i]);
                        sum+= arr[i];
                    }
                }
                printf("\ntong cac so nguyen to: %d\n", sum);
                break;
        	}
            case 6:{
                int a, count=0;
                printf("gia tri can thong ke: ");
                scanf("%d", &a);
                for (int i=0; i<n; i++) {
                    if (arr[i] == a){
						count++;
					}
                }
                printf("So phan tu co gia tri %d la: %d\n", a, count);
                break;
        	}
            case 7:{
                int addIndex, newIndex;
                printf("vi tri muon them (0 - %d): ", n);
                scanf("%d", &addIndex);
                if (addIndex<0 || addIndex>n) {
                    printf("khong hop le\n");
                } else{
                    printf("gia tri can them: ");
                    scanf("%d", &newIndex);
                    for (int i=n; i>addIndex; i--){
                        arr[i]=arr[i - 1];
                    }
                    arr[addIndex]=newIndex;
                    n++;
                }
                break;
            }
            case 8:
                break;
            default:
                printf("khong hop le\n");
        }
    }while (pick!= 5);
    return 0;
}
