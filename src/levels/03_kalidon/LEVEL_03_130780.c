/* LEVEL_03:0x130780 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_003A2BE8;
extern char D_0021F670[];
extern char D_0021F680[];
extern char D_0021F690[];
extern char D_0021F6A8[];
extern int func_130AF8(Tbl *t, int a);

char *func_130780(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_0021F670;
    if (D_003A2BE8.f8 == 0)
        return D_0021F690;
    if (D_003A2BE8.f10 == 0 || func_130AF8(&D_003A2BE8, D_003A2BE8.fC) == 0)
        return D_0021F680;
    if (D_003A2BE8.f16 != 0 && key >= 0)
        return D_0021F6A8;
    p = D_003A2BE8.f0;
    if (D_003A2BE8.f14)
        p += 4;
    for (i = 0; i < D_003A2BE8.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_003A2BE8.f15)
            p += 12;
        else
            p += 8;
        if (D_003A2BE8.f14)
            p += 4;
    }
    return D_0021F670;
}
