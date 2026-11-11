extern void func_078868(int, int);
extern int scePadInit(int);
extern void func_079270(int);
extern int scePadPortOpen(int, int, void *);
extern int func_078770(int);
extern int *D_001555DC;

int func_078930(void)
{
    unsigned int i;

    i = 0;
    do {
        func_078868(i, 0);
        i = i + 1;
    } while (i < 2);
    if (scePadInit(0) != 1) {
fail:
        return 0;
    }
    i = 0;
    do {
        func_079270(i);
        if (scePadPortOpen(i, 0, D_001555DC) != 1) {
            goto fail;
        }
        i = i + 1;
        D_001555DC[0x40] = 0;
        func_078770(0);
    } while (i < 2);
    func_079270(0);
    return 1;
}
