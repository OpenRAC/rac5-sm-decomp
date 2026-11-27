/* LEVEL_02:0x138860 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_0039F220;
extern char D_0021BFB0[];
extern char D_0021BFC0[];
extern char D_0021BFD0[];
extern char D_0021BFF8[];
extern int func_138AE0(Tbl *t, int a);

char *func_138860(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_0021BFB0;
    if (D_0039F220.f8 == 0)
        return D_0021BFD0;
    if (D_0039F220.f10 == 0 || func_138AE0(&D_0039F220, D_0039F220.fC) == 0)
        return D_0021BFC0;
    if (D_0039F220.f16 != 0) {
        if (key < 0)
            return D_0021BFF8;
        key = -key;
    }
    p = D_0039F220.f0;
    if (D_0039F220.f14)
        p += 4;
    for (i = 0; i < D_0039F220.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_0039F220.f15)
            p += 12;
        else
            p += 8;
        if (D_0039F220.f14)
            p += 4;
    }
    return D_0021BFB0;
}
