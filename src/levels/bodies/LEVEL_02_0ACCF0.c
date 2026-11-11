/* LEVEL_02:0x0ACCF0 -- placement copy of FRONTEND_014EB0.c: returns one of two table addresses after a setup call, or null for a bad mode. */
extern unsigned char D_0020B8AB;
extern char D_002CB230[];
extern void func_0ADC28(void);

char *func_0ACCF0(int mode)
{
    char *base;
    int high = !(mode < 2);
    if (high)
        return 0;
    func_0ADC28();
    D_0020B8AB = 1;
    base = D_002CB230;
    if (mode != 0)
        base += 0x20800;
    return base;
}
