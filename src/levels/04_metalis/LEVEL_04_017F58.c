/* LEVEL_04:0x017F58 -- placement copy of LEVEL_03_018070.c: appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_00208440[32];
extern int D_00208540;

int func_017F58(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_00208540;
    if ((unsigned int)n < 32) {
        D_00208440[n].second = b;
        D_00208440[n].first = a;
        D_00208540 = n + 1;
        return 1;
    }
    return 0;
}
