typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_00166074;
extern void *D_00166080;
extern int D_0016607C;

extern int func_0F48D0(void *);
extern void func_0F47C0(void *, void *, void *);

void func_10BFC8(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_00166074;
    res = func_0F48D0(D_00166080);
    switch (res) {
    case 3:
        func_0F47C0(D_00166080, local.i[2], local.i[5]);
        D_0016607C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_00166074 = local;
}
