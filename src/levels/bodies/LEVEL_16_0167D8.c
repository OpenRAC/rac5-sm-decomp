/* LEVEL_16:0x0167D8 -- placement copy of LEVEL_03_018070.c: appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_0019AD48[32];
extern int D_0019AE48;

int func_0167D8(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_0019AE48;
    if ((unsigned int)n < 32) {
        D_0019AD48[n].second = b;
        D_0019AD48[n].first = a;
        D_0019AE48 = n + 1;
        return 1;
    }
    return 0;
}
