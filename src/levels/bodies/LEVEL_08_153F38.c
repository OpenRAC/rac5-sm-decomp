/* LEVEL_08:0x153F38 -- placement copy of LEVEL_04_14EEA0.c: indexes a table with a helper result, a record byte and a caller value. */
typedef struct {
    char pad_00[0x58];
    char *f_58;
} Outer;

typedef struct {
    char pad_00[0x10];
    unsigned char f_10;
} Inner;

typedef struct {
    char pad_00[0xC];
    int f_0C;
} Rec;

typedef struct {
    Rec r[5];
} Grp;

typedef struct {
    Grp g[3];
} Row;

extern unsigned int D_00264470;
extern Row D_002500A0[];
extern int func_154A20(unsigned int a0);

int func_153F38(Outer *a0, unsigned int a1)
{
    Inner *s1;
    int x;

    s1 = (Inner *)a0->f_58;
    x = func_154A20(D_00264470);
    return D_002500A0[x].g[s1->f_10].r[a1].f_0C;
}
