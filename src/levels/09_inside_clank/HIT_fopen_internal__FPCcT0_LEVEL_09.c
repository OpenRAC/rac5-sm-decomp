/* LEVEL_09:0x113230 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_00201968[];
extern char D_00201970[];
extern char D_00201978[];
extern char D_00201980[];
extern char D_00201988[];
extern char D_00201990[];
extern unsigned char D_00338FB0[];
extern unsigned char D_00338F70[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_0285F0(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_00201968, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_00201970, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_00201978, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00201980, 1) != 0) {
        if (strncasecmp(str, D_00201988, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00201990, 1) == 0)
            kind = 0x302;
    }
    slot = func_0285F0(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_00338FB0[slot] = 1;
    else
        D_00338FB0[slot] = 0;
    D_00338F70[slot] = 0;
    return slot + 1;
}
