/* LEVEL_19:0x1109F0 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_001B5CDC;
extern int func_110118(int a);
extern int func_1104A0(void);
extern int func_0CA138(void);

int func_1109F0(void)
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
    *(int *)(D_001B5CDC + 4) = 0xE;
    *(int *)(D_001B5CDC + 0xC) = s0;
    return 1;
}
