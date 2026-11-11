/* LEVEL_23:0x124D60 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_001DA44C;
extern int func_124370(int a);
extern int func_1248A0(void);
extern int func_0D2050(void);

int func_124D60(void)
{
    unsigned int s0;

    if (D_001DA44C == 0) {
        return 0;
    }
    if (func_124370(1) != 0) {
        return 0;
    }
    s0 = func_1248A0();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0D2050();
    *(int *)(D_001DA44C + 4) = 0xE;
    *(int *)(D_001DA44C + 0xC) = s0;
    return 1;
}
