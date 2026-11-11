/* LEVEL_06:0x016B10 -- placement copy of LEVEL_03_018070.c: appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_001DE1C0[32];
extern int D_001DE2C0;

int func_016B10(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_001DE2C0;
    if ((unsigned int)n < 32) {
        D_001DE1C0[n].second = b;
        D_001DE1C0[n].first = a;
        D_001DE2C0 = n + 1;
        return 1;
    }
    return 0;
}
