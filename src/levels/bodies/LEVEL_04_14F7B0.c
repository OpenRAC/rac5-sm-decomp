/* LEVEL_04:0x14F7B0 -- picks a table block by a helper result and returns one word from it at a helper-scaled offset. */

extern int func_14F988(int v);
extern int func_14F8D8(void *p);

extern int D_00234170;
extern int D_002208D0[];

int func_14F7B0(void *a0)
{
    int *p;
    int idx;

    idx = func_14F988(D_00234170);
    p = (int *)D_002208D0[idx];
    p = p + func_14F8D8(a0);
    return p[3];
}
