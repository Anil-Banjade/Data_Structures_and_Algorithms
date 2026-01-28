#include <stdio.h>
int add(int a, int b);
void subs(int a, int b);
int mul(int a, int b);
void divid(int a, int b);

void main(){
    int a, b,c;
    char operation;
    scanf("%d\n%d\n",&a,&b); 
    scanf("%c",&operation); 
    
    switch (operation) {
        case '+':
            add(a,b);
            printf("%d",add(a,b));
            break;
        case '-':
            subs(a,b);
    
            break;
        case '*':
            mul(a,b);
            printf("%d",mul(a,b));
            break;
        case '/':
            divid(a,b);

            break;
}
}

int add(int x, int y){
    return (x+y);
}

void subs(int x, int y){
    printf("%d",x-y);
}

int mul(int x, int y){
    return (x*y);

}
void divid(int x, int y){
    printf("%d",x/y);
}



    
    



