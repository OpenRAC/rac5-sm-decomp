/* LEVEL_18:0x10DEE8 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_002D5F88;
extern char D_001B5F80[];
extern char D_001B5F90[];
extern char D_001B5FA0[];
extern char D_001B5FB8[];
extern int func_10E260(Tbl *t, int a);

char *func_10DEE8(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001B5F80;
    if (D_002D5F88.f8 == 0)
        return D_001B5FA0;
    if (D_002D5F88.f10 == 0 || func_10E260(&D_002D5F88, D_002D5F88.fC) == 0)
        return D_001B5F90;
    if (D_002D5F88.f16 != 0 && key >= 0)
        return D_001B5FB8;
    p = D_002D5F88.f0;
    if (D_002D5F88.f14)
        p += 4;
    for (i = 0; i < D_002D5F88.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_002D5F88.f15)
            p += 12;
        else
            p += 8;
        if (D_002D5F88.f14)
            p += 4;
    }
    return D_001B5F80;
}
