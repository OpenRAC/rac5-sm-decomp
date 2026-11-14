/* LEVEL_24:0x0A0AC8 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_001C4C2C;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0A0218(unsigned int slot);
extern int func_0A1178(unsigned int slot, int arg);
extern int func_0A08D0(unsigned char *buf, int mode);

int func_0A0AC8(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0A0218(slot))
        return 0;
    buf = &D_001C4C2C[(func_0A1178(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0A08D0(buf, 0) < 0)
        func_0A08D0(buf, 1);
    return 1;
}
