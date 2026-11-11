/* LEVEL_03:0x018070 -- appends a two-word record to a 32-entry table when there is room. */

typedef struct {
    int first;
    int second;
} Rec18070;

extern Rec18070 D_00207940[32];
extern int D_00207A40;

int func_018070(int a, int b)
{
    int n;

    if (a == 0) {
        return 0;
    }
    n = D_00207A40;
    if ((unsigned int)n < 32) {
        D_00207940[n].second = b;
        D_00207940[n].first = a;
        D_00207A40 = n + 1;
        return 1;
    }
    return 0;
}
