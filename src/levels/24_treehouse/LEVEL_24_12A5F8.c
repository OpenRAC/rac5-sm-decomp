typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_001D7D14;
extern void *D_001D7D20;
extern int D_001D7D1C;

extern int func_110678(void *);
extern void func_110568(void *, void *, void *);

void func_12A5F8(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_001D7D14;
    res = func_110678(D_001D7D20);
    switch (res) {
    case 3:
        func_110568(D_001D7D20, local.i[2], local.i[5]);
        D_001D7D1C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_001D7D14 = local;
}
