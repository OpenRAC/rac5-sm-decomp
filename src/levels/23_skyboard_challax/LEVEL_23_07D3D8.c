extern void func_07D310(int, int);
extern int scePadInit(int);
extern void func_07DD18(int);
extern int scePadPortOpen(int, int, void *);
extern int func_07D218(int);
extern int *D_001C965C;

int func_07D3D8(void)
{
    unsigned int i;

    i = 0;
    do {
        func_07D310(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_07DD18(i);
        if (scePadPortOpen(i, 0, D_001C965C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001C965C[0x40] = 0;
        func_07D218(0);
    } while (i < 2);
    func_07DD18(0);
    return 1;
}
