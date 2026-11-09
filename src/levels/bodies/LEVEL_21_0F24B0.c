/* LEVEL_21:0x0F24B0 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0015B9AC;
extern int func_0F1AC0(int a);
extern int func_0F1FF0(void);
extern int func_0BB860(void);

int func_0F24B0(void)
{
    unsigned int s0;

    if (D_0015B9AC == 0) {
        return 0;
    }
    if (func_0F1AC0(1) != 0) {
        return 0;
    }
    s0 = func_0F1FF0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0BB860();
    *(int *)(D_0015B9AC + 4) = 0xE;
    *(int *)(D_0015B9AC + 0xC) = s0;
    return 1;
}
