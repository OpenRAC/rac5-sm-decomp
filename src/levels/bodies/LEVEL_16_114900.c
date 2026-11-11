/* LEVEL_16:0x114900 -- refreshes a pair of sub-records, restores a saved short, and sets a fixed float on one of them. */
typedef struct {
    char pad_00[0x34];
    float f_34;
    char pad_38[0x64 - 0x38];
    int f_64;
} Blk;

typedef struct {
    char pad_00[0x100];
    short f_100;
    char pad_102[0x59C - 0x102];
    Blk *f_59C;
    char pad_5A0[0x5A4 - 0x5A0];
    Blk *f_5A4;
} Inner;

typedef struct {
    Inner *f_00;
    char pad_04[0x1D - 0x04];
    unsigned char f_1D;
} Outer;

extern int func_013A40(char *a0, int a1, int a2, float f12);
extern void func_114300(Inner *a0, char *a1);

void func_114900(Outer *a0, char *a1)
{
    short sv;

    sv = a0->f_00->f_100;
    func_013A40(a1 + 0x30, 0, 1, 0.5f);
    func_114300(a0->f_00, a1);
    a0->f_00->f_59C->f_64 = a0->f_00->f_59C->f_64 | 0x20;
    a0->f_00->f_5A4->f_64 = a0->f_00->f_5A4->f_64 | 0x20;
    a0->f_1D = 0;
    a0->f_00->f_5A4->f_34 = 10000.0f;
    a0->f_00->f_100 = sv;
}
