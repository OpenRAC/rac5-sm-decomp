/* LEVEL_04:0x14EEA0 -- indexes a table with a helper result, a record byte and a caller value. */
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

extern unsigned int D_00234170;
extern Row D_00220600[];
extern int func_14F988(unsigned int a0);

int func_14EEA0(Outer *a0, unsigned int a1)
{
    Inner *s1;
    int x;

    s1 = (Inner *)a0->f_58;
    x = func_14F988(D_00234170);
    return D_00220600[x].g[s1->f_10].r[a1].f_0C;
}
