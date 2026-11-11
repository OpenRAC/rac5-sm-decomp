typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_001DA494;
extern void *D_001DA4A0;
extern int D_001DA49C;

extern int func_10B978(void *);
extern void func_10B868(void *, void *, void *);

void func_126270(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_001DA494;
    res = func_10B978(D_001DA4A0);
    switch (res) {
    case 3:
        func_10B868(D_001DA4A0, local.i[2], local.i[5]);
        D_001DA49C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_001DA494 = local;
}
