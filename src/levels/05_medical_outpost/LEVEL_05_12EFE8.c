/* LEVEL_05:0x12EFE8 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001F60CC;
extern int func_12E570(int a);
extern int func_12EAA0(void);
extern int func_0D97C8(void);

int func_12EFE8(void)
{
    unsigned int s0;

    if (D_001F60CC == 0) {
        return 0;
    }
    if (func_12E570(1) != 0) {
        return 0;
    }
    s0 = func_12EAA0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D97C8();
    *(int *)(D_001F60CC + 4) = 0xC;
    *(int *)(D_001F60CC + 0xC) = s0;
    return 1;
}
