/* LEVEL_05:0x12DD30 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_00373C28;
extern char D_001F6070[];
extern char D_001F6080[];
extern char D_001F6090[];
extern char D_001F60A8[];
extern int func_12E0A8(Tbl *t, int a);

char *func_12DD30(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001F6070;
    if (D_00373C28.f8 == 0)
        return D_001F6090;
    if (D_00373C28.f10 == 0 || func_12E0A8(&D_00373C28, D_00373C28.fC) == 0)
        return D_001F6080;
    if (D_00373C28.f16 != 0 && key >= 0)
        return D_001F60A8;
    p = D_00373C28.f0;
    if (D_00373C28.f14)
        p += 4;
    for (i = 0; i < D_00373C28.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_00373C28.f15)
            p += 12;
        else
            p += 8;
        if (D_00373C28.f14)
            p += 4;
    }
    return D_001F6070;
}
