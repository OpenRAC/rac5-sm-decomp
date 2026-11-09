/* LEVEL_02:0x139A20 -- placement copy of FRONTEND_021000.c: one-time init gate; sets a state value once a status bit is seen. */
extern char *D_0021C00C;
extern int func_138FA8(int a);
extern int func_1394D8(void);
extern int func_0E1BB0(void);

int func_139A20(void)
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
    *(int *)(D_0021C00C + 4) = 0xC;
    *(int *)(D_0021C00C + 0xC) = s0;
    return 1;
}
