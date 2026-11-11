/* LEVEL_03:0x0A6160 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0020EF6B;
extern char D_002CEBB0[];
extern void func_0A7098(void);

char *func_0A6160(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A7098();
    D_0020EF6B = 1;
    base = D_002CEBB0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
