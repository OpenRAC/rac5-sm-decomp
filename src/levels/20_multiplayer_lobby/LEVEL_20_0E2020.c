/* LEVEL_20:0x0E2020 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_001F9168;
extern char D_001171C0[];
extern char D_001171D0[];
extern char D_001171E0[];
extern char D_001171F8[];
extern int func_0E2398(Tbl *t, int a);

char *func_0E2020(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001171C0;
    if (D_001F9168.f8 == 0)
        return D_001171E0;
    if (D_001F9168.f10 == 0 || func_0E2398(&D_001F9168, D_001F9168.fC) == 0)
        return D_001171D0;
    if (D_001F9168.f16 != 0 && key >= 0)
        return D_001171F8;
    p = D_001F9168.f0;
    if (D_001F9168.f14)
        p += 4;
    for (i = 0; i < D_001F9168.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_001F9168.f15)
            p += 12;
        else
            p += 8;
        if (D_001F9168.f14)
            p += 4;
    }
    return D_001171C0;
}
