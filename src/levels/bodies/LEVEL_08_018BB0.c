/* LEVEL_08:0x018BB0 -- placement copy of LEVEL_03_018070.c: appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_00237E40[32];
extern int D_00237F40;

int func_018BB0(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_00237F40;
    if ((unsigned int)n < 32) {
        D_00237E40[n].second = b;
        D_00237E40[n].first = a;
        D_00237F40 = n + 1;
        return 1;
    }
    return 0;
}
