#include<cstdio>

int main(){
    char c;
    scanf("%c", &c);
    switch (c)
    {
        case 'm':
            printf("Male\n");
            break;
        case 'f':
            printf("Female\n");
            break;
        default:
            printf("LGBTQ+\n");
            break;
    }
    return 0;
}