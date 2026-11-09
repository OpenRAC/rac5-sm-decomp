/* LEVEL_20:0x0E3138 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0011721C;
extern int func_0E2860(int a);
extern int func_0E2BE8(void);
extern int func_0B4D90(void);

int func_0E3138(void)
{
    unsigned int s0;

    if (D_0011721C == 0) {
        return 0;
    }
    if (func_0E2860(1) != 0) {
        return 0;
    }
    s0 = func_0E2BE8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0B4D90();
    *(int *)(D_0011721C + 4) = 0xE;
    *(int *)(D_0011721C + 0xC) = s0;
    return 1;
}
