extern void func_0793E0(int, int);
extern int scePadInit(int);
extern void func_079E10(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0792E8(int);
extern int *D_0019788C;

int func_0794D0(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0793E0(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_079E10(i);
        if (scePadPortOpen(i, 0, D_0019788C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0019788C[0x40] = 0;
        func_0792E8(0);
    } while (i < 2);
    func_079E10(0);
    return 1;
}
