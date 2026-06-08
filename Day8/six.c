#include <stdio.h>
#include <math.h>
int main() {
    int n, t, r, d = 0;
    int s = 0;
    scanf("%d", &n);
    t = n;
    while(t > 0) {
        d++;
        t /= 10;
    }
    t = n;
    while(t > 0) {
        r = t % 10;
        s += pow(r, d);
        d--;
        t /= 10;
    }
    if(s == n)
        printf("YUP");
    else
        printf("YUMMY");

    return 0;
}
