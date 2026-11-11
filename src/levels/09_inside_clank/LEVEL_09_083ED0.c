extern void func_083E08(int, int);
extern int scePadInit(int);
extern void func_084810(int);
extern int scePadPortOpen(int, int, void *);
extern int func_083D10(int);
extern int *D_001E005C;

int func_083ED0(void)
{
    unsigned int i;

    i = 0;
    do {
        func_083E08(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_084810(i);
        if (scePadPortOpen(i, 0, D_001E005C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001E005C[0x40] = 0;
        func_083D10(0);
    } while (i < 2);
    func_084810(0);
    return 1;
}
