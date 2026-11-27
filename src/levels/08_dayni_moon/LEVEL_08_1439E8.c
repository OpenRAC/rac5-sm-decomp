/* LEVEL_08:0x1439E8 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_003D6FA0;
extern char D_0024FEB0[];
extern char D_0024FEC0[];
extern char D_0024FED0[];
extern char D_0024FEF8[];
extern int func_143C68(Tbl *t, int a);

char *func_1439E8(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_0024FEB0;
    if (D_003D6FA0.f8 == 0)
        return D_0024FED0;
    if (D_003D6FA0.f10 == 0 || func_143C68(&D_003D6FA0, D_003D6FA0.fC) == 0)
        return D_0024FEC0;
    if (D_003D6FA0.f16 != 0) {
        if (key < 0)
            return D_0024FEF8;
        key = -key;
    }
    p = D_003D6FA0.f0;
    if (D_003D6FA0.f14)
        p += 4;
    for (i = 0; i < D_003D6FA0.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_003D6FA0.f15)
            p += 12;
        else
            p += 8;
        if (D_003D6FA0.f14)
            p += 4;
    }
    return D_0024FEB0;
}
