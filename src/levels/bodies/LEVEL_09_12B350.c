/* LEVEL_09:0x12B350 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_0036F4E8;
extern char D_001F0AF0[];
extern char D_001F0B00[];
extern char D_001F0B10[];
extern char D_001F0B28[];
extern int func_12B6C8(Tbl *t, int a);

char *func_12B350(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001F0AF0;
    if (D_0036F4E8.f8 == 0)
        return D_001F0B10;
    if (D_0036F4E8.f10 == 0 || func_12B6C8(&D_0036F4E8, D_0036F4E8.fC) == 0)
        return D_001F0B00;
    if (D_0036F4E8.f16 != 0 && key >= 0)
        return D_001F0B28;
    p = D_0036F4E8.f0;
    if (D_0036F4E8.f14)
        p += 4;
    for (i = 0; i < D_0036F4E8.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_0036F4E8.f15)
            p += 12;
        else
            p += 8;
        if (D_0036F4E8.f14)
            p += 4;
    }
    return D_001F0AF0;
}
