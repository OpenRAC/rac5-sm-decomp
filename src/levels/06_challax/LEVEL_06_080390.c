extern void func_0802C8(int, int);
extern int scePadInit(int);
extern void func_080CD0(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0801D0(int);
extern int *D_001E515C;

int func_080390(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0802C8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_080CD0(i);
        if (scePadPortOpen(i, 0, D_001E515C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001E515C[0x40] = 0;
        func_0801D0(0);
    } while (i < 2);
    func_080CD0(0);
    return 1;
}
