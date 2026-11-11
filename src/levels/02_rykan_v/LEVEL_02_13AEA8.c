typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_0021C054;
extern void *D_0021C060;
extern int D_0021C05C;

extern int func_120758(void *);
extern void func_120648(void *, void *, void *);

void func_13AEA8(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_0021C054;
    res = func_120758(D_0021C060);
    switch (res) {
    case 3:
        func_120648(D_0021C060, local.i[2], local.i[5]);
        D_0021C05C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_0021C054 = local;
}
