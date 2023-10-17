#include<cstdio>

int a[114514];

int main(){
    for(int i = 0; i < 114514; i++){
        scanf("%d", a+i);
    }
    for(int i = 0; i < 114514; i++){
        if(a[i]&1){
            printf("%d is odd\n", a[i]);
        }else{
            printf("%d is even\n", a[i]);
        }
    }
    return 0;
}