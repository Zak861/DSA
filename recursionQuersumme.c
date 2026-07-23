#include <stdio.h>

int quersumme(int Zahl){
    if(Zahl < 10){
        return Zahl;
    }
    else{
        return (Zahl%10) + (quersumme(Zahl/10));
    }
}
int main(){
    int Zahl = 132;

    printf("%d", quersumme(Zahl));
}