/* LEVEL_24:0x127FB0 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_00353BE0;
extern char D_001D7C70[];
extern char D_001D7C80[];
extern char D_001D7C90[];
extern char D_001D7CB8[];
extern int func_128230(Tbl *t, int a);

char *func_127FB0(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001D7C70;
    if (D_00353BE0.f8 == 0)
        return D_001D7C90;
    if (D_00353BE0.f10 == 0 || func_128230(&D_00353BE0, D_00353BE0.fC) == 0)
        return D_001D7C80;
    if (D_00353BE0.f16 != 0) {
        if (key < 0)
            return D_001D7CB8;
        key = -key;
    }
    p = D_00353BE0.f0;
    if (D_00353BE0.f14)
        p += 4;
    for (i = 0; i < D_00353BE0.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_00353BE0.f15)
            p += 12;
        else
            p += 8;
        if (D_00353BE0.f14)
            p += 4;
    }
    return D_001D7C70;
}
