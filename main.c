#include <stdio.h>
int basamakTopla(int x);
int asalAlan(int x);
int x=0;
int main() {
    printf("TO INFORM! To exit the program, click -9.\n");
    while(1) {
        printf("PLEASE,ENTER A NUMBER:\n");
        scanf("%d",&x);
        if (x==-9){
            printf("Program exited!\n");
            break;
        }
        asalAlan(x);
        printf("sum of digits:%d\n",basamakTopla(x));
    }
    return 0;
}
int asalAlan(int x) {
    if (x<=1) {
        printf("The number is not prime\n");
        return 0;
    }
    for (int i = 2 ; i * i <=x; i++) {
        if (x%i==0) {
            printf("The number is not prime\n");
            return 0;
        }
    }
    printf("The number is prime\n");
    return 1;
}
int basamakTopla(int x) {
    int toplam=0;
    while (x>0) {
        int basamak=x%10;
        toplam+=basamak;
        x=x/10;
    }
    return toplam;
}
