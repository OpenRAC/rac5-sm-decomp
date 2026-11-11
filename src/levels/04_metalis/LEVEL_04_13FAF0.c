/* LEVEL_04:0x13FAF0 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0022046C;
extern int func_13F078(int a);
extern int func_13F5A8(void);
extern int func_0E0AE0(void);

int func_13FAF0(void)
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
    *(int *)(D_0022046C + 4) = 0xC;
    *(int *)(D_0022046C + 0xC) = s0;
    return 1;
}
