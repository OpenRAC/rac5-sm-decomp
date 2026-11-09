/* LEVEL_02:0x139998 -- placement copy of FRONTEND_020F78.c: acquires a slot object once the global is set, tags it and returns success. */
extern char *D_0021C00C;
extern int func_138FA8(int a);
extern int func_1394D8(void);
extern int func_0E1BB0(void);

int func_139998(void)
{
    unsigned int s0;

    if (D_0021C00C == 0) {
        return 0;
    }
    if (func_138FA8(1) != 0) {
        return 0;
    }
    s0 = func_1394D8();
    if (s0 == 0xFFFFFFFFu) {
        return 0;
    }
    func_0E1BB0();
    *(int *)(D_0021C00C + 4) = 0xE;
    *(int *)(D_0021C00C + 0xC) = s0;
    return 1;
}
