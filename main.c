#include <stdio.h>

int main(void) {
    int n, i;
    printf("inserisci il numero per far veddere tutti i fattori primi:");
    scanf("%d", &n);
    for (i=1; i<=n; i++) {
        if (n%i == 0) {
            printf("%d ", i);
        }
    }
}
