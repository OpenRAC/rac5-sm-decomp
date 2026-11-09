/* LEVEL_19:0x110A78 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_001B5CDC;
extern int func_110118(int a);
extern int func_1104A0(void);
extern int func_0CA138(void);

int func_110A78(void)
{
    unsigned int s0;

    if (D_001B5CDC == 0) {
        return 0;
    }
    if (func_110118(1) != 0) {
        return 0;
    }
    s0 = func_1104A0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0CA138();
    *(int *)(D_001B5CDC + 4) = 0xC;
    *(int *)(D_001B5CDC + 0xC) = s0;
    return 1;
}
