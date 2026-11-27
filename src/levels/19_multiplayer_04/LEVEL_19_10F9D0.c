/* LEVEL_19:0x10F9D0 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
typedef struct {
    char *f0;
    char pad4[4];
    unsigned char f8;
    char pad9[3];
    unsigned char fC;
    char padD[3];
    unsigned int f10;
    unsigned char f14;
    unsigned char f15;
    unsigned char f16;
} Tbl;
extern Tbl D_002D5D40;
extern char D_001B5C80[];
extern char D_001B5C90[];
extern char D_001B5CA0[];
extern char D_001B5CC8[];
extern int func_10FC50(Tbl *t, int a);

char *func_10F9D0(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001B5C80;
    if (D_002D5D40.f8 == 0)
        return D_001B5CA0;
    if (D_002D5D40.f10 == 0 || func_10FC50(&D_002D5D40, D_002D5D40.fC) == 0)
        return D_001B5C90;
    if (D_002D5D40.f16 != 0) {
        if (key < 0)
            return D_001B5CC8;
        key = -key;
    }
    p = D_002D5D40.f0;
    if (D_002D5D40.f14)
        p += 4;
    for (i = 0; i < D_002D5D40.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_002D5D40.f15)
            p += 12;
        else
            p += 8;
        if (D_002D5D40.f14)
            p += 4;
    }
    return D_001B5C80;
}
