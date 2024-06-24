#include <stdio.h>
#include <math.h>
int s[20];
int top=-1;
void push(int n){
    top=top+1;
    s[top]=n;
}
int pop(){
    int new=top;
    top=top-1;
    return s[new];
}
int eval(char c, int op1, int op2){
    if (c=='+'){
        return (op1+op2);
    }
    if (c=='-'){
        return (op1-op2);
    }
    if (c=='*'){
        return (op1*op2);
    }
    if (c=='/'){
        return (op1/op2);
    }
    if (c=='^'){
        return (pow(op1,op2));
    }
}

int main(){
    char exp[20];
    int i,n1,n2,res;
    scanf("%s",exp);
    for (i=0; exp[i]!='\0'; i++){
        if (exp[i]>='0' && exp[i]<='9'){
            push(exp[i]-48);
        }
        else{
            n1=pop();
            n2=pop();
            res=eval(exp[i],n2,n1);
            push(res);
        }

    }
    printf("%d",s[top]);
}
