#include<stdio.h>
void binary_search(int *A,int n,int k){ //二分探索関数
    int left=0; //最前
    int right=n-1; //最奥
    int flag=0; 
    while(left<=right){
        int mid=(left+right)/2;

        if(A[mid] == k){ //探索している値があればフラグを立てて終了
            flag=1;
            break;
        }else if(A[mid]<k){ //探索している値が大きければ手前を中間に移動
            left=mid+1;
        }else if(A[mid]>k){ //探索している値が小さければ奥を中間に移動
            right=mid-1;
        }
    }

    //結果の表示
    if(flag){
        printf("Yes\n");
    }else{
         printf("No\n");
    }
}

int main(){
    int n;
    scanf("%d",&n);
    int A[n];
    for(int i=0;i<n;i++){
        scanf("%d",&A[i]); //スペースは要らない
    }
    int q;
    scanf("%d",&q);
    int k[q];
    for(int i=0;i<q;i++){
        scanf("%d",&k[i]); //スペースは要らない
    }

    //関数を繰り返す
    for(int i=0;i<q;i++){
        binary_search(A,n,k[i]);
    }
}