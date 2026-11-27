/* LEVEL_17:0x10E8A8 -- placement copy of FRONTEND_01F778.c: looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_002C6EC0;
extern char D_001A8100[];
extern char D_001A8110[];
extern char D_001A8120[];
extern char D_001A8148[];
extern int func_10EB28(Tbl *t, int a);

char *func_10E8A8(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001A8100;
    if (D_002C6EC0.f8 == 0)
        return D_001A8120;
    if (D_002C6EC0.f10 == 0 || func_10EB28(&D_002C6EC0, D_002C6EC0.fC) == 0)
        return D_001A8110;
    if (D_002C6EC0.f16 != 0) {
        if (key < 0)
            return D_001A8148;
        key = -key;
    }
    p = D_002C6EC0.f0;
    if (D_002C6EC0.f14)
        p += 4;
    for (i = 0; i < D_002C6EC0.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_002C6EC0.f15)
            p += 12;
        else
            p += 8;
        if (D_002C6EC0.f14)
            p += 4;
    }
    return D_001A8100;
}
