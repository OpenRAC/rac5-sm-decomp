typedef union {
    float f[6];
    int i[6];
} Block;

extern Block *D_0021B394;
extern void *D_0021B3A0;
extern int D_0021B39C;

extern int func_11D460(void *);
extern void func_11D350(void *, void *, void *);

void func_137AF8(void)
{
    Block local;
    int keep = 0;
    int res;

    local = *D_0021B394;
    res = func_11D460(D_0021B3A0);
    switch (res) {
    case 3:
        func_11D350(D_0021B3A0, local.i[2], local.i[5]);
        D_0021B39C = 4;
        break;
    case 4:
        keep = 1;
        break;
    }
    if (keep)
        local.i[0] = -1;
    *D_0021B394 = local;
}
