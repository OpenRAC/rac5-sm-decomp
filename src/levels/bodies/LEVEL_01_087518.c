extern void func_087450(int, int);
extern int scePadInit(int);
extern void func_087E58(int);
extern int scePadPortOpen(int, int, void *);
extern int func_087358(int);
extern int *D_001F625C;

int func_087518(void)
{
    unsigned int i;

    i = 0;
    do {
        func_087450(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_087E58(i);
        if (scePadPortOpen(i, 0, D_001F625C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001F625C[0x40] = 0;
        func_087358(0);
    } while (i < 2);
    func_087E58(0);
    return 1;
}
