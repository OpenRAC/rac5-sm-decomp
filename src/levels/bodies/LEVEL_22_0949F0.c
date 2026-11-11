/* LEVEL_22:0x0949F0 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_00155C6B;
extern char D_002098F0[];
extern void func_095928(void);

char *func_0949F0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_095928();
    D_00155C6B = 1;
    base = D_002098F0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
