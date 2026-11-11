extern void func_0806F0(int, int);
extern int scePadInit(int);
extern void func_0810F8(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0805F8(int);
extern int *D_001C6EDC;

int func_0807B8(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0806F0(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_0810F8(i);
        if (scePadPortOpen(i, 0, D_001C6EDC) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001C6EDC[0x40] = 0;
        func_0805F8(0);
    } while (i < 2);
    func_0810F8(0);
    return 1;
}
