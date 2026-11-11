extern void func_0665D8(int, int);
extern int scePadInit(int);
extern void func_067008(int);
extern int scePadPortOpen(int, int, void *);
extern int func_0664E0(int);
extern int *D_0010696C;

int func_0666C8(void)
{
    unsigned int i;

    i = 0;
    do {
        func_0665D8(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_067008(i);
        if (scePadPortOpen(i, 0, D_0010696C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_0010696C[0x40] = 0;
        func_0664E0(0);
    } while (i < 2);
    func_067008(0);
    return 1;
}
