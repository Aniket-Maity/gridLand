#include<stdio.h>
int main(){
    int N;
    int a,b,i,j;
    int r, c1, c2;
    scanf("%d %d %d",&N,&a,&b);
    int blankArr[a][b];
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            blankArr[i][j] = 0;
        }
    }
    
    
    int sum = 0;
    for(i=0;i<N;i++){
        scanf("%d %d %d",&r,&c1,&c2);
        for(j=c1-1; j<c2; j++){
            blankArr[r-1][j] = 1;
        }
    }
    
    for(i=0;i<a;i++){
        for(j=0;j<b;j++){
            sum+= blankArr[i][j];
        }
    }
    int result;
    result = (a*b)-sum;
    printf("%d",result);
}