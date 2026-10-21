/* LEVEL_17:0x110DE0 -- hand the global block to the helper and store it back. */

typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_1A81A4;
extern void *D_1A81B0;
extern int D_1A81AC;

extern int func_0FA110(void *);
extern void func_0FA000(void *, void *, void *);

void func_110DE0(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_1A81A4;
    res = func_0FA110(D_1A81B0);
    switch (res) {
    case 3:
        func_0FA000(D_1A81B0, local.i[2], local.i[5]);
        D_1A81AC = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_1A81A4 = local;
}
