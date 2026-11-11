/* LEVEL_23:0x10B3A8 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_001EAEE8[];
extern char D_001EAEF0[];
extern char D_001EAEF8[];
extern char D_001EAF00[];
extern char D_001EAF08[];
extern char D_001EAF10[];
extern unsigned char D_00322C70[];
extern unsigned char D_00322C30[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_0272F8(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_001EAEE8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_001EAEF0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_001EAEF8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_001EAF00, 1) != 0) {
        if (strncasecmp(str, D_001EAF08, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_001EAF10, 1) == 0)
            kind = 0x302;
    }
    slot = func_0272F8(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_00322C70[slot] = 1;
    else
        D_00322C70[slot] = 0;
    D_00322C30[slot] = 0;
    return slot + 1;
}
