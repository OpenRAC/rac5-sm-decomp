/* LEVEL_16:0x1103D8 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001B4B5C;
extern int func_10FA78(int a);
extern int func_10FE00(void);
extern int func_0CA860(void);

int func_1103D8(void)
{
    unsigned int s0;

    if (D_001B4B5C == 0) {
        return 0;
    }
    if (func_10FA78(1) != 0) {
        return 0;
    }
    s0 = func_10FE00();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0CA860();
    *(int *)(D_001B4B5C + 4) = 0xC;
    *(int *)(D_001B4B5C + 0xC) = s0;
    return 1;
}
