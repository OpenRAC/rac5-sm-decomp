typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_00207094;
extern void *D_002070A0;
extern int D_0020709C;

extern int func_11A410(void *);
extern void func_11A300(void *, void *, void *);

void func_134AF8(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_00207094;
    res = func_11A410(D_002070A0);
    switch (res) {
    case 3:
        func_11A300(D_002070A0, local.i[2], local.i[5]);
        D_0020709C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_00207094 = local;
}
