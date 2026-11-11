/* LEVEL_16:0x110350 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_001B4B5C;
extern int func_10FA78(int a);
extern int func_10FE00(void);
extern int func_0CA860(void);

int func_110350(void)
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
    *(int *)(D_001B4B5C + 4) = 0xE;
    *(int *)(D_001B4B5C + 0xC) = s0;
    return 1;
}
