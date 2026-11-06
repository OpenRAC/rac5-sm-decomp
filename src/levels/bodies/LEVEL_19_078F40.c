extern void func_078E50(int, int);
extern int scePadInit(int);
extern void func_079880(int);
extern int scePadPortOpen(int, int, void *);
extern int func_078D58(int);
extern int *D_001A540C;

int func_078F40(void)
{
    unsigned int i;

    i = 0;
    do {
        func_078E50(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_079880(i);
        if (scePadPortOpen(i, 0, D_001A540C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001A540C[0x40] = 0;
        func_078D58(0);
    } while (i < 2);
    func_079880(0);
    return 1;
}
