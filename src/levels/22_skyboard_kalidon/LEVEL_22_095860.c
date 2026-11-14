/* LEVEL_22:0x095860 -- placement copy of LEVEL_01_0A7250.c: clears the 4 KB buffer of a valid slot and initialises it, falling back to the second mode when the first fails. */
extern unsigned char *D_0015332C;
extern void *memset(void *s, int c, unsigned int n);
extern int func_094FB0(unsigned int slot);
extern int func_095F10(unsigned int slot, int arg);
extern int func_095668(unsigned char *buf, int mode);

int func_095860(unsigned int slot, int arg)
{
    unsigned char *buf;

    if (!func_094FB0(slot))
        return 0;
    buf = &D_0015332C[(func_095F10(slot, arg) << 12) + 0x1C80];
    memset(buf, 0, 0x1000);
    if (func_095668(buf, 0) < 0)
        func_095668(buf, 1);
    return 1;
}
