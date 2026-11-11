/* LEVEL_06:0x129CB8 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_001F5C4C;
extern int func_1292C8(int a);
extern int func_1297F8(void);
extern int func_0D5B20(void);

int func_129CB8(void)
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
    *(int *)(D_001F5C4C + 4) = 0xE;
    *(int *)(D_001F5C4C + 0xC) = s0;
    return 1;
}
