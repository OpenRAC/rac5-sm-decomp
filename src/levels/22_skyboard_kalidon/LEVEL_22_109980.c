/* LEVEL_22:0x109980 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_002DD800;
extern char D_00165FD0[];
extern char D_00165FE0[];
extern char D_00165FF0[];
extern char D_00166018[];
extern int func_109C00(Tbl *t, int a);

char *func_109980(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_00165FD0;
    if (D_002DD800.f8 == 0)
        return D_00165FF0;
    if (D_002DD800.f10 == 0 || func_109C00(&D_002DD800, D_002DD800.fC) == 0)
        return D_00165FE0;
    if (D_002DD800.f16 != 0) {
        if (key < 0)
            return D_00166018;
        key = -key;
    }
    p = D_002DD800.f0;
    if (D_002DD800.f14)
        p += 4;
    for (i = 0; i < D_002DD800.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_002DD800.f15)
            p += 12;
        else
            p += 8;
        if (D_002DD800.f14)
            p += 4;
    }
    return D_00165FD0;
}
