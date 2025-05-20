#include <stdio.h>
int main(void){
    int H,W,N;
    scanf("%d %d %d\n",&H,&W,&N);
    
    char S[H][W+1];
    for(int i=0;i<H;i++){
        scanf("%s",S[i]);
    }
    /*for(int i=0;i<W;i++){
        printf("%s\n",S[i]);
    }*/
    
    int X[N],Y[N];
    for(int i=0;i<N;i++){
        X[i]=0;
        Y[i]=0;
    }
    for(int i=0;i<N;i++){
        scanf("%d %d",&Y[i],&X[i]);
    }
    /*for(int i=0;i<N;i++){
        printf("%d %d\n",Y[i],X[i]);
    }*/
    
    for(int i=0;i<N;i++){
        if(S[X[i]][Y[i]] == "."){
            S[X[i]][Y[i]] = "#";
        }else{
            S[X[i]][Y[i]] = ".";
        }
    }
    
     for(int i=0;i<H;i++){
        printf("%s\n",S[i]);
    }
    
}

/* chatgpt
#include <stdio.h>

int main(void) {
    int H, W, N;
    scanf("%d %d %d", &H, &W, &N);

    char S[H][W + 1];  // 各行の文字列＋終端用

    // 盤面の読み込み
    for (int i = 0; i < H; i++) {
        scanf("%s", S[i]);
    }

    // 指定された座標を # に書き換え
    for (int i = 0; i < N; i++) {
        int y, x;
        scanf("%d %d", &y, &x);
        S[y][x] = '#';
    }

    // 盤面を出力
    for (int i = 0; i < H; i++) {
        printf("%s\n", S[i]);
    }

    return 0;
}
*/