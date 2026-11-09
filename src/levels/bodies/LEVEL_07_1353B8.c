/* LEVEL_07:0x1353B8 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_0039D668;
extern char D_0021B2F0[];
extern char D_0021B300[];
extern char D_0021B310[];
extern char D_0021B328[];
extern int func_135730(Tbl *t, int a);

char *func_1353B8(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_0021B2F0;
    if (D_0039D668.f8 == 0)
        return D_0021B310;
    if (D_0039D668.f10 == 0 || func_135730(&D_0039D668, D_0039D668.fC) == 0)
        return D_0021B300;
    if (D_0039D668.f16 != 0 && key >= 0)
        return D_0021B328;
    p = D_0039D668.f0;
    if (D_0039D668.f14)
        p += 4;
    for (i = 0; i < D_0039D668.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_0039D668.f15)
            p += 12;
        else
            p += 8;
        if (D_0039D668.f14)
            p += 4;
    }
    return D_0021B2F0;
}
