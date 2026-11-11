typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_001F6114;
extern void *D_001F6120;
extern int D_001F611C;

extern int func_116430(void *);
extern void func_116320(void *, void *, void *);

void func_130470(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_001F6114;
    res = func_116430(D_001F6120);
    switch (res) {
    case 3:
        func_116320(D_001F6120, local.i[2], local.i[5]);
        D_001F611C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_001F6114 = local;
}
