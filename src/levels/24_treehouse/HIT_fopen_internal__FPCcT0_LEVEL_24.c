/* LEVEL_24:0x1100A8 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_001E8AE8[];
extern char D_001E8AF0[];
extern char D_001E8AF8[];
extern char D_001E8B00[];
extern char D_001E8B08[];
extern char D_001E8B10[];
extern unsigned char D_0031D6F0[];
extern unsigned char D_0031D6B0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_026CC8(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_001E8AE8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_001E8AF0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_001E8AF8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_001E8B00, 1) != 0) {
        if (strncasecmp(str, D_001E8B08, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_001E8B10, 1) == 0)
            kind = 0x302;
    }
    slot = func_026CC8(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_0031D6F0[slot] = 1;
    else
        D_0031D6F0[slot] = 0;
    D_0031D6B0[slot] = 0;
    return slot + 1;
}
