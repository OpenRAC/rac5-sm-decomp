/* FRONTEND:0x01DFF0 -- placement copy of LEVEL_01_119E40.c: maps a prefix keyword of the string to a control kind code, registers it with the owner and records whether the string also contains a t flag; returns the slot number plus one or 0. */
extern char D_001096A0[];
extern char D_001096A8[];
extern char D_001096B0[];
extern char D_001096B8[];
extern char D_001096C0[];
extern char D_001096C8[];
extern unsigned char D_001B78A0[];
extern unsigned char D_001B7860[];
extern int strncasecmp(const char *a, const char *b, unsigned int n);
extern char *strchr(const char *s, int c);
extern int func_0026B0(void *owner, int kind, int a, int b);

int HIT_fopen_internal__FPCcT0(void *owner, char *str)
{
    int kind = 1;
    int slot;

    if (strncasecmp(str, D_001096A0, 2) == 0)
        kind = 3;
    else if (strncasecmp(str, D_001096A8, 2) == 0)
        kind = 0x603;
    else if (strncasecmp(str, D_001096B0, 2) == 0)
        kind = 0x303;
    else if (strncasecmp(str, D_001096B8, 1) != 0) {
        if (strncasecmp(str, D_001096C0, 1) == 0)
            kind = 0x602;
        else if (strncasecmp(str, D_001096C8, 1) == 0)
            kind = 0x302;
    }
    slot = func_0026B0(owner, kind, 0, 0);
    if (slot < 0)
        return 0;
    if (strchr(str, 't') != 0)
        D_001B78A0[slot] = 1;
    else
        D_001B78A0[slot] = 0;
    D_001B7860[slot] = 0;
    return slot + 1;
}
