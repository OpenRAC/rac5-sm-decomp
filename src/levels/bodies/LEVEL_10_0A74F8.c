/* LEVEL_10:0x0A74F8 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_001FF8EB;
extern char D_002BD130[];
extern void func_0A8430(void);

char *func_0A74F8(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A8430();
    D_001FF8EB = 1;
    base = D_002BD130;
    if (mode != 0)
        base += 0x20800;
    return base;
}
