/* LEVEL_06:0x129D40 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001F5C4C;
extern int func_1292C8(int a);
extern int func_1297F8(void);
extern int func_0D5B20(void);

int func_129D40(void)
{
    unsigned int s0;

    if (D_001F5C4C == 0) {
        return 0;
    }
    if (func_1292C8(1) != 0) {
        return 0;
    }
    s0 = func_1297F8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D5B20();
    *(int *)(D_001F5C4C + 4) = 0xC;
    *(int *)(D_001F5C4C + 0xC) = s0;
    return 1;
}
