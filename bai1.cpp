#include <stdio.h>

int main(){
	int arr[100];
	int size, newIndex, pos;
	printf("nhap so phan tu cua mang: ");
	scanf("%d", &size);
	if(size < 0||size > 100){
		printf("loi!");
		return 1; 
	} 
	for(int i =0; i < size;i++){
		printf("nhap phan tu thu %d: ", i+1);
		scanf("%d", &arr[i]); 
	}
	if(size >= 100){
		printf("mang day"); 
	} else{
		printf("nhap vi tri muon them phan tu: ");
		scanf("%d", &pos);
		printf("nhap phan tu muon them: ");
		scanf("%d", &newIndex);
		if(pos < 1||pos > size +1){
			printf("khong hop le"); 
		}else{
			for(int i = size; i >=pos;i--){
				arr[i] = arr[i -1]; 
			} 
			arr[pos - 1] = newIndex;
			size++;
			printf("mang sau khi them : ");
			for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
		} 
	}
	return 0; 
} 
