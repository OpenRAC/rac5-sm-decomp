/* LEVEL_06:0x128A88 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_00374AE8;
extern char D_001F5BF0[];
extern char D_001F5C00[];
extern char D_001F5C10[];
extern char D_001F5C28[];
extern int func_128E00(Tbl *t, int a);

char *func_128A88(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001F5BF0;
    if (D_00374AE8.f8 == 0)
        return D_001F5C10;
    if (D_00374AE8.f10 == 0 || func_128E00(&D_00374AE8, D_00374AE8.fC) == 0)
        return D_001F5C00;
    if (D_00374AE8.f16 != 0 && key >= 0)
        return D_001F5C28;
    p = D_00374AE8.f0;
    if (D_00374AE8.f14)
        p += 4;
    for (i = 0; i < D_00374AE8.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_00374AE8.f15)
            p += 12;
        else
            p += 8;
        if (D_00374AE8.f14)
            p += 4;
    }
    return D_001F5BF0;
}
