/* LEVEL_04:0x14FBF8 -- selects a table entry by a global index, offsets it by a helper result, and returns one word. */

extern int D_00234170;
extern int *D_002208D0[];

int func_14F988(int v);
int func_14F8D8(void *a0);

int func_14FBF8(void *a0)
{
    int idx;
    int *p;
    int r;

    idx = func_14F988(D_00234170);
    p = D_002208D0[idx];
    r = func_14F8D8(a0);
    p += r;
    return p[6];
}
