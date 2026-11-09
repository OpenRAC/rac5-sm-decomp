/* LEVEL_17:0x10F950 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001A815C;
extern int func_10EFF0(int a);
extern int func_10F378(void);
extern int func_0C9DA0(void);

int func_10F950(void)
{
    unsigned int s0;

    if (D_001A815C == 0) {
        return 0;
    }
    if (func_10EFF0(1) != 0) {
        return 0;
    }
    s0 = func_10F378();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0C9DA0();
    *(int *)(D_001A815C + 4) = 0xC;
    *(int *)(D_001A815C + 0xC) = s0;
    return 1;
}
