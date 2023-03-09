#include <iostream>
using namespace std;

int alpha[27]; // 'A'의 맨 처음 등장 위치는 alpha[1]. 
char result[101];
int ans[27];
int num;
int check=0;
void print_result(int len){
	for(int i=1;i<=len;i++){
		if(result[i]==0){
					printf("0");
		}else{
			printf("%c",result[i]);	
		}
		
	}
	printf("\n");
}
void back(int len, int pos,int sum){
	
	if(len+1==pos){
		
		
		if(sum==num){
			check =1;
			memcpy(ans, alpha, sizeof(alpha));
			
		}
//		for(int i=1;i<=len;i++){
//			printf("%d ",alpha[i]);
//		}
//		printf("\n");
	}else{
			
		for(int i=alpha[pos-1]+1;i<=sum+1;i++){
			if(sum+i>num){
				break;
			}
			alpha[pos] = i;
			back(len,pos+1,sum+i);
		}
	}
	
}

int main(){
	
	
	scanf("%d",&num);
	
	for(int i=1;i<18;i++){
		back(i,1,0);
		
		if(check==1){
			
			for(int j=1;j<=i;j++){
				result[ans[j]] = 'A'+j-1;
			}
			
			int cnt = 1;
			for(int j=1;j<=i;j++){
				
				while(ans[j]!=1){
					
					
					if(result[cnt]==0){
						result[cnt]='A'+j-1;
						ans[j]--;
						cnt++;
					}else{
						cnt++;
					}
				}
			}
			for(int j=1;j<=num;j++){
				if(result[j]==0){
					printf("0");
				}else{
				printf("%c",result[j]);	
				}
				
			}
			exit(0);
		}
	}
	printf("-1");
}