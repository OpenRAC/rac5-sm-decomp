typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_0020FCF4;
extern void *D_0020FD00;
extern int D_0020FCFC;

extern int func_118628(void *);
extern void func_118518(void *, void *, void *);

void func_132978(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_0020FCF4;
    res = func_118628(D_0020FD00);
    switch (res) {
    case 3:
        func_118518(D_0020FD00, local.i[2], local.i[5]);
        D_0020FCFC = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_0020FCF4 = local;
}
