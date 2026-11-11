extern void func_004CC8(int, int);
extern int scePadInit(int);
extern void func_005590(int);
extern int scePadPortOpen(int, int, void *);
extern int func_004BD0(int);
extern int *D_0002AD1C;

int func_004DC0(void)
{
    unsigned int i;

    i = 0;
    do {
        func_004CC8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_005590(i);
        if (scePadPortOpen(i, 0, D_0002AD1C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0002AD1C[0x40] = 0;
        func_004BD0(0);
    } while (i < 2);
    func_005590(0);
    return 1;
}
