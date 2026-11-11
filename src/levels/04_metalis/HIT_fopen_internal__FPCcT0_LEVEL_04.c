/* LEVEL_04:0x1253A8 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_002316E8[];
extern char D_002316F0[];
extern char D_002316F8[];
extern char D_00231700[];
extern char D_00231708[];
extern char D_00231710[];
extern unsigned char D_0036C030[];
extern unsigned char D_0036BFF0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_029230(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_002316E8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_002316F0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_002316F8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00231700, 1) != 0) {
        if (strncasecmp(str, D_00231708, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00231710, 1) == 0)
            kind = 0x302;
    }
    slot = func_029230(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_0036C030[slot] = 1;
    else
        D_0036C030[slot] = 0;
    D_0036BFF0[slot] = 0;
    return slot + 1;
}
