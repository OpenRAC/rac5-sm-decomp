/* LEVEL_02:0x0ADB60 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_00208C2C;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0AD2B0(unsigned int slot);
extern int func_0AE210(unsigned int slot, int arg);
extern int func_0AD968(unsigned char *buf, int mode);

int func_0ADB60(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0AD2B0(slot))
        return 0;
    buf = &D_00208C2C[(func_0AE210(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0AD968(buf, 0) < 0)
        func_0AD968(buf, 1);
    return 1;
}
