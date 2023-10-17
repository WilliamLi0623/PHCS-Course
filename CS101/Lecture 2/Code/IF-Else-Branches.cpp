#include<cstdio>

int main(){
    char c;
    scanf("%c", &c);
    if(c=='m'){
        printf("Male\n");
    }
    else if(c=='f'){
        printf("Female\n");
    }
    else{
        printf("LGBTQ+\n");
    }
    return 0;
}