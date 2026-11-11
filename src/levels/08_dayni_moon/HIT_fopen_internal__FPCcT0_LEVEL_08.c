/* LEVEL_08:0x12A5E0 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_002619E8[];
extern char D_002619F0[];
extern char D_002619F8[];
extern char D_00261A00[];
extern char D_00261A08[];
extern char D_00261A10[];
extern unsigned char D_003A0AB0[];
extern unsigned char D_003A0A70[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_029D00(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_002619E8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_002619F0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_002619F8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00261A00, 1) != 0) {
        if (strncasecmp(str, D_00261A08, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00261A10, 1) == 0)
            kind = 0x302;
    }
    slot = func_029D00(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_003A0AB0[slot] = 1;
    else
        D_003A0AB0[slot] = 0;
    D_003A0A70[slot] = 0;
    return slot + 1;
}
