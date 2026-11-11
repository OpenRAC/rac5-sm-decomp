extern void func_084DA8(int, int);
extern int scePadInit(int);
extern void func_0857B0(int);
extern int scePadPortOpen(int, int, void *);
extern int func_084CB0(int);
extern int *D_001E55DC;

int func_084E70(void)
{
    unsigned int i;

    i = 0;
    do {
        func_084DA8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_0857B0(i);
        if (scePadPortOpen(i, 0, D_001E55DC) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001E55DC[0x40] = 0;
        func_084CB0(0);
    } while (i < 2);
    func_0857B0(0);
    return 1;
}
