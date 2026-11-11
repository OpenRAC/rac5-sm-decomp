/* LEVEL_01:0x119E40 -- maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_00217D68[];
extern char D_00217D70[];
extern char D_00217D78[];
extern char D_00217D80[];
extern char D_00217D88[];
extern char D_00217D90[];
extern unsigned char D_00351830[];
extern unsigned char D_003517F0[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_029788(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_00217D68, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_00217D70, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_00217D78, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_00217D80, 1) != 0) {
        if (strncasecmp(str, D_00217D88, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_00217D90, 1) == 0)
            kind = 0x302;
    }
    slot = func_029788(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_00351830[slot] = 1;
    else
        D_00351830[slot] = 0;
    D_003517F0[slot] = 0;
    return slot + 1;
}
