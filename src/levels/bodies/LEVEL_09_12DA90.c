typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_001F0B94;
extern void *D_001F0BA0;
extern int D_001F0B9C;

extern int func_113800(void *);
extern void func_1136F0(void *, void *, void *);

void func_12DA90(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_001F0B94;
    res = func_113800(D_001F0BA0);
    switch (res) {
    case 3:
        func_1136F0(D_001F0BA0, local.i[2], local.i[5]);
        D_001F0B9C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_001F0B94 = local;
}
