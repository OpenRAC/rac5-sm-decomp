/* LEVEL_03:0x1319B0 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0021F6CC;
extern int func_130FC0(int a);
extern int func_1314F0(void);
extern int func_0DB008(void);

int func_1319B0(void)
{
    unsigned int s0;

    if (D_0021F6CC == 0) {
        return 0;
    }
    if (func_130FC0(1) != 0) {
        return 0;
    }
    s0 = func_1314F0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0DB008();
    *(int *)(D_0021F6CC + 4) = 0xE;
    *(int *)(D_0021F6CC + 0xC) = s0;
    return 1;
}
