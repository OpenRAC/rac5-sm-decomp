/* FRONTEND:0x01F778 -- looks up a name string for a key (negated when the table is signed) in the loaded table, with fixed fallback strings. */
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
extern Tbl D_001E5940;
extern char D_000326F8[];
extern char D_00032708[];
extern char D_00032718[];
extern char D_00032730[];
extern int func_01F928(Tbl *t, int a);

char *func_01F778(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_000326F8;
    if (D_001E5940.f8 == 0)
        return D_00032718;
    if (D_001E5940.f10 == 0 || func_01F928(&D_001E5940, D_001E5940.fC) == 0)
        return D_00032708;
    if (D_001E5940.f16 != 0) {
        if (key < 0)
            return D_00032730;
        key = -key;
    }
    p = D_001E5940.f0;
    if (D_001E5940.f14)
        p += 4;
    for (i = 0; i < D_001E5940.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_001E5940.f15)
            p += 12;
        else
            p += 8;
        if (D_001E5940.f14)
            p += 4;
    }
    return D_000326F8;
}
