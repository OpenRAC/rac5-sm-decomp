/* LEVEL_18:0x10F088 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001B5FDC;
extern int func_10E728(int a);
extern int func_10EAB0(void);
extern int func_0C9838(void);

int func_10F088(void)
{
    unsigned int s0;

    if (D_001B5FDC == 0) {
        return 0;
    }
    if (func_10E728(1) != 0) {
        return 0;
    }
    s0 = func_10EAB0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0C9838();
    *(int *)(D_001B5FDC + 4) = 0xC;
    *(int *)(D_001B5FDC + 0xC) = s0;
    return 1;
}
