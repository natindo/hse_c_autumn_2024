#include <stdio.h>

#define MAXNUMBERINIP 4

void initArray(int ipAddress[][MAXNUMBERINIP], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < MAXNUMBERINIP; j++) {
            ipAddress[i][j] = 0;
        }
    }
}

int main () {
    int n = 0;
    scanf("%d", &n);
    int ipAddress[n][MAXNUMBERINIP];

    initArray(ipAddress, n);
    int Octet = 0;

    for (int i = 0; i < n; i++) {
        char c = ' ';
        while (c = getchar() != '\n') {
            
        }
    }
    


    for (int i = 0; i < n; i++) {
        for (int j = 0; j < MAXNUMBERINIP; j++) {
            scanf("%d", &Octet);
            ipAddress[i][j] = Octet;    
        }
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < MAXNUMBERINIP; j++) {
            printf("%d ", ipAddress[i][j]);
        }
        printf("\n");
    }

    return 0;
}