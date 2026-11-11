/* LEVEL_02:0x1A56E8 -- returns 1 when the first helper reports zero, else 1 only when the second helper reports zero. */

struct E1A56E8 {
    char pad00[0x5C];
    int p5C;
    void *p60;
};

extern int D_0022F770;
extern int func_0286A0(int a, void *b);
extern int func_028ED8(int a);

int func_1A56E8(struct E1A56E8 *e)
{
    int r;

    r = 0;
    if (func_0286A0(D_0022F770, e->p60) == 0 || func_028ED8(e->p5C) == 0) {
        r = 1;
    }
    return r;
}
