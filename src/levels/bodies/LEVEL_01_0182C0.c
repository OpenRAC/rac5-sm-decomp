/* LEVEL_01:0x0182C0 -- placement copy of LEVEL_03_018070.c: appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_001EF2C0[32];
extern int D_001EF3C0;

int func_0182C0(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_001EF3C0;
    if ((unsigned int)n < 32) {
        D_001EF2C0[n].second = b;
        D_001EF2C0[n].first = a;
        D_001EF3C0 = n + 1;
        return 1;
    }
    return 0;
}
