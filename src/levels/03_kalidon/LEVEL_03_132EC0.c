/* LEVEL_03:0x132EC0 -- hand the global block to the helper and store it back. */

typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_21F714;
extern void *D_21F720;
extern int D_21F71C;

extern int func_118580(void *);
extern void func_118470(void *, void *, void *);

void func_132EC0(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_21F714;
    res = func_118580(D_21F720);
    switch (res) {
    case 3:
        func_118470(D_21F720, local.i[2], local.i[5]);
        D_21F71C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_21F714 = local;
}
