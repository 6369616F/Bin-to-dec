#include <iostream>

int __pow__ (int num, int es) {
    int res=num;
    if (es==0) {return 1;}
    for (int i=1; i<es; i++) {
        res = res*num;
    }
    return res;
}

int main() {
    int n, dec=0, resto, i=0;
    std::cout<<"Inserire numero in binario > ";
    std::cin>>n;
    while (n>0) {
        resto=n%10; n/=10;
        dec+=resto*__pow__(2, i);
        i++;
    }
    std::cout<<"\n"<<dec;
    return 0;
}