#include <stdio.h>

int main() {
    int u, i, a, nil, klp, totalsm, totbar, hper;
    for (u = 0; u < 3; u++) {
        scanf("%d %d", &nil, &klp);
         totalsm = 0;

        for (i = 1; i <= nil; i++) {
            totbar = 0;
            for (a = i; a >= 1; a--) {
                hper = a * klp;
                totbar += hper;
                printf("(%d * %d)", a, klp, hper);
                if (a > 1) {
                    printf(" + ");
                }
            }
            totalsm += totbar;
            printf(" = %d\n", totbar);
        }

        printf("%d\n\n", totalsm);
    }
    return 0;
}
