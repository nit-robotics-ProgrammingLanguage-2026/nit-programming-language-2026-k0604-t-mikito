#include <stdio.h>
int main(void){
    /*入力される上限の数値と、条件を満たす数の合計を保持する*/
    int num;
    long sum=0;
    scanf("%d",&num);
    if(num<0){
        printf("NG");
        return 0;
        
    }
    for(int cou=1;;cou++){
        if(cou>num)break;
        if(cou%3==0||cou%5==0)continue;sum+=cou;
        
    }
    /*計算した合計の値を出力*/
    printf("%ld",sum);
    return 0;
    
}