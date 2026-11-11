/* LEVEL_07:0x11CE90 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_0022CA68[];
extern char D_0022CA70[];
extern char D_0022CA78[];
extern char D_0022CA80[];
extern char D_0022CA88[];
extern char D_0022CA90[];
extern unsigned char D_00367130[];
extern unsigned char D_003670F0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_029AC8(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_0022CA68, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_0022CA70, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_0022CA78, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_0022CA80, 1) != 0) {
        if (strncasecmp(str, D_0022CA88, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_0022CA90, 1) == 0)
            kind = 0x302;
    }
    slot = func_029AC8(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_00367130[slot] = 1;
    else
        D_00367130[slot] = 0;
    D_003670F0[slot] = 0;
    return slot + 1;
}
