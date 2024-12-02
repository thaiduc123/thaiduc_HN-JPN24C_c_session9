#include<stdio.h>

int main(){
	int arr[100]; 
	int n; 
	int pick;
    do {
        printf("\nMENU\n");
        printf("1.Nhap vao mang\n");
        printf("2.Hien thi mang\n");
        printf("3.Them phan tu\n");
        printf("4.Sua phan tu\n");
        printf("5.Xoa phan tu\n");
        printf("6.Thoat\n");
        printf("Lua chon cua ban: ");
        scanf("%d", &pick);
        switch(pick){
            case 1:{
                printf("so luong phan tu: ");
                scanf("%d", &n);
                for (int i=0; i<n; i++){
                    printf("nhap phan tu thu %d: ", i+1);
                    scanf("%d", &arr[i]);
                }
                break;
            }
            case 2:{
                printf("Mang: ");
                for (int i=0; i<n; i++) {
                    printf("%d ", arr[i]);
                }
                printf("\n");
                break; 
			}
            case 3:{
		printf("Nhap vi tri muon them moi phan tu: ");
		scanf("%d",&position);
		printf("Nhap gia tri muon them moi vao mang: ");
		scanf("%d",&value);
		if(position<0 || position > n){
			printf("Vi tri ban nhap khong hop le\n");
		}else {
			for (int i = n; i > position; i--) {
       			arr[i] = arr[i - 1];
    		}
    		arr[position]=value;
    		n++; 
            }
            case 4:{
		int addIndex, newIndex;
                printf("vi tri can sua: ");
                scanf("%d", &addIndex);
                if (addIndex<0 || addIndex>=n) {
                    printf("khong hop le\n");
                } else {
                    printf("gia tri moi: ");
                    scanf("%d", &newIndex);
                    arr[addIndex]=newIndex;
                }
                n++; 
                break;
            }
            case 5:{
                int deleteIndex;
                printf("vi tri can xoa: ");
                scanf("%d", &deleteIndex);
                if (deleteIndex<0 || deleteIndex>=n) {
                    printf("khong hop le\n");
                } else{
                    for (int i=deleteIndex; i<n - 1; i++){
                        arr[i]=arr[i + 1];
                    }
                }
                break;
            }
            case 6:
                break;
            default:
                printf("khong hop le\n");
        }
    }while (pick!=6);
	return 0; 
} 
