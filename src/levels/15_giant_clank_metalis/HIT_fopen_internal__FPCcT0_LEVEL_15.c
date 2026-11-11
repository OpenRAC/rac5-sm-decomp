/* LEVEL_15:0x0DE1A0 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_0016C4E8[];
extern char D_0016C4F0[];
extern char D_0016C4F8[];
extern char D_0016C500[];
extern char D_0016C508[];
extern char D_0016C510[];
extern unsigned char D_00268EA0[];
extern unsigned char D_00268E60[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_022F60(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_0016C4E8, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_0016C4F0, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_0016C4F8, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_0016C500, 1) != 0) {
        if (strncasecmp(str, D_0016C508, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_0016C510, 1) == 0)
            kind = 0x302;
    }
    slot = func_022F60(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_00268EA0[slot] = 1;
    else
        D_00268EA0[slot] = 0;
    D_00268E60[slot] = 0;
    return slot + 1;
}
