/* LEVEL_06:0x110410 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_00206BE8[];
extern char D_00206BF0[];
extern char D_00206BF8[];
extern char D_00206C00[];
extern char D_00206C08[];
extern char D_00206C10[];
extern unsigned char D_0033E5B0[];
extern unsigned char D_0033E570[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_027B70(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_00206BE8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_00206BF0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_00206BF8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00206C00, 1) != 0) {
        if (strncasecmp(str, D_00206C08, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00206C10, 1) == 0)
            kind = 0x302;
    }
    slot = func_027B70(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_0033E5B0[slot] = 1;
    else
        D_0033E5B0[slot] = 0;
    D_0033E570[slot] = 0;
    return slot + 1;
}
