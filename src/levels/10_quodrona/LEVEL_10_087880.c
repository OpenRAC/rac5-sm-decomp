extern void func_0877B8(int, int);
extern int scePadInit(int);
extern void func_0881C0(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0876C0(int);
extern int *D_001FF25C;

int func_087880(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0877B8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_0881C0(i);
        if (scePadPortOpen(i, 0, D_001FF25C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001FF25C[0x40] = 0;
        func_0876C0(0);
    } while (i < 2);
    func_0881C0(0);
    return 1;
}
