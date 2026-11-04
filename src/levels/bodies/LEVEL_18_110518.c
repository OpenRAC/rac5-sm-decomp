typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_001B6024;
extern void *D_001B6030;
extern int D_001B602C;

extern int func_0F9338(void *);
extern void func_0F9228(void *, void *, void *);

void func_110518(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_001B6024;
    res = func_0F9338(D_001B6030);
    switch (res) {
    case 3:
        func_0F9228(D_001B6030, local.i[2], local.i[5]);
        D_001B602C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_001B6024 = local;
}
