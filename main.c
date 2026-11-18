#include <stdio.h>
int main(void){
    /*入力される上限の数値と、条件を満たす数の合計を保持する*/
    int num;
    long s=0;
    scanf("%d",&num);
    if(num<0){
        printf("NG");
        return 0;
        
    }
    for(int i=1;;i++){
        if(i>num)break;
        if(i%3==0||i%5==0)continue;sum+=i;
        
    }
    /*計算した合計の値を出力*/
    printf("%ld",sum);
    return 0;
    
}