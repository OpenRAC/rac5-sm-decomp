/* LEVEL_03:0x131A38 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0021F6CC;
extern int func_130FC0(int a);
extern int func_1314F0(void);
extern int func_0DB008(void);

int func_131A38(void)
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
    *(int *)(D_0021F6CC + 4) = 0xC;
    *(int *)(D_0021F6CC + 0xC) = s0;
    return 1;
}
