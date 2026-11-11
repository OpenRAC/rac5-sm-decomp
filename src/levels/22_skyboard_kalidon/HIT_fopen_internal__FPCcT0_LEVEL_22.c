/* LEVEL_22:0x0F4300 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_001751E8[];
extern char D_001751F0[];
extern char D_001751F8[];
extern char D_00175200[];
extern char D_00175208[];
extern char D_00175210[];
extern unsigned char D_002A7220[];
extern unsigned char D_002A71E0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_023D20(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_001751E8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_001751F0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_001751F8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00175200, 1) != 0) {
        if (strncasecmp(str, D_00175208, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00175210, 1) == 0)
            kind = 0x302;
    }
    slot = func_023D20(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_002A7220[slot] = 1;
    else
        D_002A7220[slot] = 0;
    D_002A71E0[slot] = 0;
    return slot + 1;
}
