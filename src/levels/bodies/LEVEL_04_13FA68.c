/* LEVEL_04:0x13FA68 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0022046C;
extern int func_13F078(int a);
extern int func_13F5A8(void);
extern int func_0E0AE0(void);

int func_13FA68(void)
{
    unsigned int s0;

    if (D_0022046C == 0) {
        return 0;
    }
    if (func_13F078(1) != 0) {
        return 0;
    }
    s0 = func_13F5A8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0E0AE0();
    *(int *)(D_0022046C + 4) = 0xE;
    *(int *)(D_0022046C + 0xC) = s0;
    return 1;
}
