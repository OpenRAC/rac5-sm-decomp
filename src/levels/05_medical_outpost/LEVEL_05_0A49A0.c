/* LEVEL_05:0x0A49A0 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_001E5C6B;
extern char D_0029FBF0[];
extern void func_0A58D8(void);

char *func_0A49A0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0A58D8();
    D_001E5C6B = 1;
    base = D_0029FBF0;
    if (mode != 0)
        base += 0x20800;
    return base;
}
