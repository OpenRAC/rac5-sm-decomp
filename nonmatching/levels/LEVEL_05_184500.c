/* USA LEVEL_05.REL:0x184500, 260-byte candidate (21 November 2026).
 * Measured pinned: 7 differing words; first difference at 0xA8.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
static inline void Copy3(float *dst, float *src)
{
    dst[0] = src[0];
    dst[1] = src[1];
    dst[2] = src[2];
}

struct Entry_184500 {
    char pad00[0x10];
    struct Test_184500 *test;
    int alt;
    char pad18[0x1C];
};

struct Test_184500 {
    unsigned char kind;
    char pad01[3];
    int arg;
};

struct Table_184500 {
    char pad00[4];
    struct Entry_184500 *entries;
};

struct Ctx_184500 {
    char pad00[0x40];
    struct Table_184500 *table;
    char pad44;
};

struct Rec_184500 {
    char pad00[0x4C];
    struct Flags_184500 *flags;
};

struct Flags_184500 {
    char pad00[0x64];
    unsigned int bits;
};

struct Owner_184500 {
    char pad00[0x20];
    float pos20[3];
    char pad2c[4];
    float pos30[3];
    char pad3c[0x1C];
    struct Rec_184500 *rec;
};

extern struct Ctx_184500 *D_002213DC;
extern char D_00208D00[];
extern int D_002096F0;
extern int func_0270A8(void);
extern int func_01E7A0(float *p, int a1, int a2);
extern int func_10FA58(float *p, int a1, struct Ctx_184500 *ctx);
extern void func_039890(float t, int a0, int a1, float *a2, float *a3, struct Owner_184500 *o);

void func_184500(struct Owner_184500 *o, float *pos)
{
    float p[3];
    struct Entry_184500 *e;
    struct Rec_184500 *rec;
    unsigned int ok;
    char *tbl;
    int idx;

    Copy3(p, pos + 9);
    e = (struct Entry_184500 *)((char *)D_002213DC->table->entries + *((unsigned char *)D_002213DC + 0x44) * 0x34);
    if (e->test != 0) {
        ok = func_01E7A0(p, e->test->arg, e->test->kind);
    } else {
        ok = func_10FA58(p, e->alt, D_002213DC);
    }
    if ((ok & 0xFF) != 0) {
        tbl = D_00208D00;
        rec = o->rec;
        idx = func_0270A8();
        tbl += idx * 16 + 8 + (D_002096F0 - 1) * 64;
        func_039890(*(float *)(tbl + 0x20), 0, 3, o->pos30, o->pos20, o);
        rec->flags->bits |= 0x200000;
    }
}
