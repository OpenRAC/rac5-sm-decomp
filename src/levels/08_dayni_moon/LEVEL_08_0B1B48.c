/* LEVEL_08:0x0B1B48 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_0023CB2C;
extern void *memset(void *s, int c, unsigned int n);
extern int func_0B1298(unsigned int slot);
extern int func_0B21F8(unsigned int slot, int arg);
extern int func_0B1950(unsigned char *buf, int mode);

int func_0B1B48(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_0B1298(slot))
        return 0;
    buf = &D_0023CB2C[(func_0B21F8(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_0B1950(buf, 0) < 0)
        func_0B1950(buf, 1);
    return 1;
}
