/* LEVEL_23:0x123C28 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_00359260;
extern char D_001DA3F0[];
extern char D_001DA400[];
extern char D_001DA410[];
extern char D_001DA438[];
extern int func_123EA8(Tbl *t, int a);

char *func_123C28(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001DA3F0;
    if (D_00359260.f8 == 0)
        return D_001DA410;
    if (D_00359260.f10 == 0 || func_123EA8(&D_00359260, D_00359260.fC) == 0)
        return D_001DA400;
    if (D_00359260.f16 != 0) {
        if (key < 0)
            return D_001DA438;
        key = -key;
    }
    p = D_00359260.f0;
    if (D_00359260.f14)
        p += 4;
    for (i = 0; i < D_00359260.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_00359260.f15)
            p += 12;
        else
            p += 8;
        if (D_00359260.f14)
            p += 4;
    }
    return D_001DA3F0;
}
