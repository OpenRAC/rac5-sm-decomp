extern void func_078968(int, int);
extern int scePadInit(int);
extern void func_079398(int);
extern int scePadPortOpen(int, int, void *);
extern int func_078870(int);
extern int *D_001A428C;

int func_078A58(void)
{
    unsigned int i;

    i = 0;
    do {
        func_078968(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_079398(i);
        if (scePadPortOpen(i, 0, D_001A428C) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001A428C[0x40] = 0;
        func_078870(0);
    } while (i < 2);
    func_079398(0);
    return 1;
}
