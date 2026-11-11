/* LEVEL_17:0x10E7B0 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_002C6F08;
extern char D_001A8100[];
extern char D_001A8110[];
extern char D_001A8120[];
extern char D_001A8138[];
extern int func_10EB28(Tbl *t, int a);

char *func_10E7B0(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_001A8100;
    if (D_002C6F08.f8 == 0)
        return D_001A8120;
    if (D_002C6F08.f10 == 0 || func_10EB28(&D_002C6F08, D_002C6F08.fC) == 0)
        return D_001A8110;
    if (D_002C6F08.f16 != 0 && key >= 0)
        return D_001A8138;
    p = D_002C6F08.f0;
    if (D_002C6F08.f14)
        p += 4;
    for (i = 0; i < D_002C6F08.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_002C6F08.f15)
            p += 12;
        else
            p += 8;
        if (D_002C6F08.f14)
            p += 4;
    }
    return D_001A8100;
}
