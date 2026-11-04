typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_002204B4;
extern void *D_002204C0;
extern int D_002204BC;

extern int func_125978(void *);
extern void func_125868(void *, void *, void *);

void func_140F78(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_002204B4;
    res = func_125978(D_002204C0);
    switch (res) {
    case 3:
        func_125868(D_002204C0, local.i[2], local.i[5]);
        D_002204BC = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_002204B4 = local;
}
