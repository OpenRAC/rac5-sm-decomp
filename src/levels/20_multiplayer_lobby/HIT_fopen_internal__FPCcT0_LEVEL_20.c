/* LEVEL_20:0x0D3390 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_0012DCA8[];
extern char D_0012DCB0[];
extern char D_0012DCB8[];
extern char D_0012DCC0[];
extern char D_0012DCC8[];
extern char D_0012DCD0[];
extern unsigned char D_001C2F20[];
extern unsigned char D_001C2EE0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_023CE8(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_0012DCA8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_0012DCB0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_0012DCB8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_0012DCC0, 1) != 0) {
        if (strncasecmp(str, D_0012DCC8, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_0012DCD0, 1) == 0)
            kind = 0x302;
    }
    slot = func_023CE8(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_001C2F20[slot] = 1;
    else
        D_001C2F20[slot] = 0;
    D_001C2EE0[slot] = 0;
    return slot + 1;
}
