extern void func_0872A8(int, int);
extern int scePadInit(int);
extern void func_087CB0(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0871B0(int);
extern int *D_0020E8DC;

int func_087370(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0872A8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_087CB0(i);
        if (scePadPortOpen(i, 0, D_0020E8DC) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0020E8DC[0x40] = 0;
        func_0871B0(0);
    } while (i < 2);
    func_087CB0(0);
    return 1;
}
