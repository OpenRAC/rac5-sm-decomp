/* LEVEL_18:0x0F8D68 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_001CE1A8[];
extern char D_001CE1B0[];
extern char D_001CE1B8[];
extern char D_001CE1C0[];
extern char D_001CE1C8[];
extern char D_001CE1D0[];
extern unsigned char D_0029FA60[];
extern unsigned char D_0029FA20[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_026790(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_001CE1A8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_001CE1B0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_001CE1B8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_001CE1C0, 1) != 0) {
        if (strncasecmp(str, D_001CE1C8, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_001CE1D0, 1) == 0)
            kind = 0x302;
    }
    slot = func_026790(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_0029FA60[slot] = 1;
    else
        D_0029FA60[slot] = 0;
    D_0029FA20[slot] = 0;
    return slot + 1;
}
