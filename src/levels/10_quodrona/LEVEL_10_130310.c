/* LEVEL_10:0x130310 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_00391120;
extern char D_0020FC50[];
extern char D_0020FC60[];
extern char D_0020FC70[];
extern char D_0020FC98[];
extern int func_130590(Tbl *t, int a);

char *func_130310(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_0020FC50;
    if (D_00391120.f8 == 0)
        return D_0020FC70;
    if (D_00391120.f10 == 0 || func_130590(&D_00391120, D_00391120.fC) == 0)
        return D_0020FC60;
    if (D_00391120.f16 != 0) {
        if (key < 0)
            return D_0020FC98;
        key = -key;
    }
    p = D_00391120.f0;
    if (D_00391120.f14)
        p += 4;
    for (i = 0; i < D_00391120.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_00391120.f15)
            p += 12;
        else
            p += 8;
        if (D_00391120.f14)
            p += 4;
    }
    return D_0020FC50;
}
