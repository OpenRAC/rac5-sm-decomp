extern void func_06BB30(int, int);
extern int scePadInit(int);
extern void func_06C538(int);
extern int scePadPortOpen(int, int, void *);
extern int func_06BA38(int);
extern int *D_0014AEDC;

int func_06BBF8(void)
{
    unsigned int i;

    i = 0;
    do {
        func_06BB30(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_06C538(i);
        if (scePadPortOpen(i, 0, D_0014AEDC) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0014AEDC[0x40] = 0;
        func_06BA38(0);
    } while (i < 2);
    func_06C538(0);
    return 1;
}
