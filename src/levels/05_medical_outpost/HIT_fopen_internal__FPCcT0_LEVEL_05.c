/* LEVEL_05:0x115E60 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_00206C68[];
extern char D_00206C70[];
extern char D_00206C78[];
extern char D_00206C80[];
extern char D_00206C88[];
extern char D_00206C90[];
extern unsigned char D_0033D6F0[];
extern unsigned char D_0033D6B0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_028400(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_00206C68, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_00206C70, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_00206C78, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00206C80, 1) != 0) {
        if (strncasecmp(str, D_00206C88, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00206C90, 1) == 0)
            kind = 0x302;
    }
    slot = func_028400(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_0033D6F0[slot] = 1;
    else
        D_0033D6F0[slot] = 0;
    D_0033D6B0[slot] = 0;
    return slot + 1;
}
