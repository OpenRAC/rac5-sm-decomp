/* LEVEL_04:0x13E838 -- placement copy of LEVEL_01_1323B8.c: looks up a name string for a key in the loaded table, with fixed fallback strings. */
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
extern Tbl D_003A2568;
extern char D_00220410[];
extern char D_00220420[];
extern char D_00220430[];
extern char D_00220448[];
extern int func_13EBB0(Tbl *t, int a);

char *func_13E838(int key)
{
    char *p;
    unsigned int i;

    if (key == 0)
        return D_00220410;
    if (D_003A2568.f8 == 0)
        return D_00220430;
    if (D_003A2568.f10 == 0 || func_13EBB0(&D_003A2568, D_003A2568.fC) == 0)
        return D_00220420;
    if (D_003A2568.f16 != 0 && key >= 0)
        return D_00220448;
    p = D_003A2568.f0;
    if (D_003A2568.f14)
        p += 4;
    for (i = 0; i < D_003A2568.f10; i++) {
        if (*(int *)p == key)
            return *(char **)(p + 4);
        if (D_003A2568.f15)
            p += 12;
        else
            p += 8;
        if (D_003A2568.f14)
            p += 4;
    }
    return D_00220410;
}
