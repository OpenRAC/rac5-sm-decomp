extern void func_08A6E8(int, int);
extern int scePadInit(int);
extern void func_08B0F0(int);
extern int scePadPortOpen(int, int, void *);
extern int func_08A5F0(int);
extern int *D_0020F71C;

int func_08A7B0(void)
{
    unsigned int i;

    i = 0;
    do {
        func_08A6E8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_08B0F0(i);
        if (scePadPortOpen(i, 0, D_0020F71C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0020F71C[0x40] = 0;
        func_08A5F0(0);
    } while (i < 2);
    func_08B0F0(0);
    return 1;
}
