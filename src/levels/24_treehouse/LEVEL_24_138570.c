/* LEVEL_24:0x138570 -- placement copy of LEVEL_04_14EEA0.c: indexes a table with a helper result, a record byte and a caller value. */
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

extern unsigned int D_001EB570;
extern Row D_001D7E60[];
extern int func_139058(unsigned int a0);

int func_138570(Outer *a0, unsigned int a1)
{
    Inner *s1;
    int x;

    s1 = (Inner *)a0->f_58;
    x = func_139058(D_001EB570);
    return D_001D7E60[x].g[s1->f_10].r[a1].f_0C;
}
