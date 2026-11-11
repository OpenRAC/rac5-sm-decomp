extern void func_0782E8(int, int);
extern int scePadInit(int);
extern void func_078D18(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0781F0(int);
extern int *D_001A570C;

int func_0783D8(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0782E8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_078D18(i);
        if (scePadPortOpen(i, 0, D_001A570C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001A570C[0x40] = 0;
        func_0781F0(0);
    } while (i < 2);
    func_078D18(0);
    return 1;
}
