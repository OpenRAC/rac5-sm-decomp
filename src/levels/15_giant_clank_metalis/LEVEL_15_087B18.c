/* LEVEL_15:0x087B18 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_00148C2C;
extern void *memset(void *s, int c, unsigned int n);
extern int func_087268(unsigned int slot);
extern int func_0881C8(unsigned int slot, int arg);
extern int func_087920(unsigned char *buf, int mode);

int func_087B18(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_087268(slot))
        return 0;
    buf = &D_00148C2C[(func_0881C8(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_087920(buf, 0) < 0)
        func_087920(buf, 1);
    return 1;
}
