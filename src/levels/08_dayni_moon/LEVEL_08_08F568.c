extern void func_08F4A0(int, int);
extern int scePadInit(int);
extern void func_08FEA8(int);
extern int scePadPortOpen(int, int, void *);
extern int func_08F3A8(int);
extern int *D_0023F11C;

int func_08F568(void)
{
    unsigned int i;

    i = 0;
    do {
        func_08F4A0(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_08FEA8(i);
        if (scePadPortOpen(i, 0, D_0023F11C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0023F11C[0x40] = 0;
        func_08F3A8(0);
    } while (i < 2);
    func_08FEA8(0);
    return 1;
}
