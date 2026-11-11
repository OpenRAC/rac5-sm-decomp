/* LEVEL_24:0x09FC58 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_001C756B;
extern char D_0027FBF0[];
extern void func_0A0B90(void);

char *func_09FC58(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A0B90();
    D_001C756B = 1;
    base = D_0027FBF0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
