extern void func_089520(int, int);
extern int scePadInit(int);
extern void func_089F28(int);
extern int scePadPortOpen(int, int, void *);
extern int func_089428(int);
extern int *D_0020A55C;

int func_0895E8(void)
{
    unsigned int i;

    i = 0;
    do {
        func_089520(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_089F28(i);
        if (scePadPortOpen(i, 0, D_0020A55C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0020A55C[0x40] = 0;
        func_089428(0);
    } while (i < 2);
    func_089F28(0);
    return 1;
}
