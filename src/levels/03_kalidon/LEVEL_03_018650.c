/* LEVEL_03:0x018650 -- placement copy of LEVEL_01_018848.c: copies the staged records (matrix block plus per-record fields and an optional payload) into the three destination arrays, then the raw buffer when requested. */

typedef struct Mat {
    float f[16];
} Mat;

typedef struct DstA {
    Mat mat;
    char pad_40[5];
    unsigned char b45;
    char pad_46[0xE];
    void *p54;
    char pad_58[4];
    int f5C;
    char pad_60[4];
    int f64;
    char pad_68[0x18];
} DstA;

typedef struct Mod {
    char pad_00[0xC];
    DstA *dst;
    char pad_10[0x1C];
    int size;
    int count;
    char pad_34[0x10];
} Mod;

typedef struct SrcA {
    Mat mat;
    void *p40;
    int f44;
    int f48;
    unsigned char b4c;
    char pad_4D[3];
} SrcA;

typedef struct SrcB {
    Mat mat;
    int f40;
    unsigned char b44;
    char pad_45[3];
} SrcB;

typedef struct DstB {
    Mat mat;
    char pad_40[0x1C];
    int f5C;
    unsigned char b60;
    unsigned char b61;
    unsigned char b62;
    unsigned char b63;
} DstB;

typedef struct SrcC {
    Mat mat;
    unsigned char b40;
    char pad_41[3];
} SrcC;

typedef struct DstC {
    Mat mat;
    char pad_40[0x11];
    unsigned char b51;
    char pad_52;
    unsigned char b53;
} DstC;

typedef struct Hdr {
    char pad_00[0x1C];
    DstC *dstC;
    int nC;
    char pad_24[8];
    DstB *dstB;
    int nB;
    Mod *mods;
    int nmods;
    char pad_3C[0xC];
    unsigned int size;
} Hdr;

typedef struct Pack {
    SrcA *a;
    SrcB *b;
    SrcC *c;
    void *src;
    void *dst;
} Pack;

extern Hdr *D_0021F410;
extern Pack *D_00207A4C;
extern unsigned char D_00207938;
extern void *memcpy(void *d, const void *s, unsigned int n);

void func_018650(void)
{
    Mod *m;
    Mod *mend;
    DstA *a;
    DstA *aend;
    SrcA *sa;
    SrcB *sb;
    SrcB *sbend;
    DstB *b;
    SrcC *sc;
    SrcC *scend;
    DstC *c;
    unsigned int n;

    m = D_0021F410->mods;
    sa = D_00207A4C->a;
    mend = m + D_0021F410->nmods;
    for (; m < mend; m++) {
        a = m->dst;
        aend = a + m->count;
        for (; a < aend; a++) {
            a->mat = sa->mat;
            a->f5C = sa->f44;
            a->f64 = sa->f48;
            a->b45 = sa->b4c;
            if (sa->p40 != 0)
                memcpy(a->p54, sa->p40, m->size);
            sa++;
        }
    }
    sb = D_00207A4C->b;
    sbend = sb + D_0021F410->nB;
    b = D_0021F410->dstB;
    for (; sb < sbend; sb++) {
        b->mat = sb->mat;
        b->f5C = sb->f40;
        b->b61 = sb->b44;
        b->b63 = 0xFF;
        b = (DstB *)((char *)b + (b->b62 * 8 + 0x64));
    }
    sc = D_00207A4C->c;
    scend = sc + D_0021F410->nC;
    c = D_0021F410->dstC;
    for (; sc < scend; sc++) {
        c->mat = sc->mat;
        c->b53 = sc->b40;
        c = (DstC *)((char *)c + (c->b51 * 8 + 0x54));
    }
    n = ((D_0021F410->size + 0x1F) & 0xFFFFFFE0) >> 3;
    if (D_00207938 != 0)
        memcpy(D_00207A4C->dst, D_00207A4C->src, n);
}
