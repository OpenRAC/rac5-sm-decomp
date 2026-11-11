/* LEVEL_24:0x016F00 -- placement copy of LEVEL_03_018070.c: appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_001BFF40[32];
extern int D_001C0040;

int func_016F00(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_001C0040;
    if ((unsigned int)n < 32) {
        D_001BFF40[n].second = b;
        D_001BFF40[n].first = a;
        D_001C0040 = n + 1;
        return 1;
    }
    return 0;
}
