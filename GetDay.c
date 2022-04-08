#pragma warning(disable : 4996)
#include <stdio.h>

int main() {
    int y, m, d;
    int sum = 0;
    int h;
    scanf("%d %d %d", &y, &m, &d);

    if (m <= 2)
    {
        y -= 1;
        m += 12;
    }

    h = (y + y / 4 - y / 100 + y / 400 + (13 * m + 8) / 5 + d) % 7;

    printf("%d", h);
}
