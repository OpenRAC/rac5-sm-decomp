extern void func_08DD80(int, int);
extern int scePadInit(int);
extern void func_08E788(int);
extern int scePadPortOpen(int, int, void *);
extern int func_08DC88(int);
extern int *D_0020B21C;

int func_08DE48(void)
{
    unsigned int i;

    i = 0;
    do {
        func_08DD80(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_08E788(i);
        if (scePadPortOpen(i, 0, D_0020B21C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0020B21C[0x40] = 0;
        func_08DC88(0);
    } while (i < 2);
    func_08E788(0);
    return 1;
}
