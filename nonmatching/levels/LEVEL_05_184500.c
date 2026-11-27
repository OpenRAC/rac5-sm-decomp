/* USA LEVEL_05:184500, 260-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 260 bytes: 1 differing words; first difference +0xCC. No matching credit.
 * Remaining issue: improved 7 -> 1: the function takes a float in f12 that it passes untouched
 * to both test calls (accepted func_01E7A0(float, Pt *, Shape *, int, float *) and
 * func_10FA58(float, float *, Box *, float *) arities; the 5th/4th argument is D_002213DC, which
 * is why retail keeps it in a3); offset grouped as (idx*16 + 8) + (D_002096F0 - 1)*64 via idx =
 * func_0270A8() * 16 + 8. Left: commutative operand order of the final tbl += off (retail addu
 * s0,s0,v0; cse swaps to v0,s0); func_039890 accepted as five long longs, retail also passes f12
 * (float first) - conflict to align
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_05:0x184500 -- tests a table entry against a position and, when it passes, starts a timed effect and flags the owner's record. */
static __inline__ void Copy3(float *dst, float *src)
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
extern int func_01E7A0(float r, float *p, void *items, int n, struct Ctx_184500 *ctx);
extern int func_10FA58(float r, float *p, void *box, struct Ctx_184500 *ctx);
extern void func_039890(float t, int a0, int a1, float *a2, float *a3, struct Owner_184500 *o);

void func_184500(float r, struct Owner_184500 *o, float *pos)
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
        ok = func_01E7A0(r, p, (void *)e->test->arg, e->test->kind, D_002213DC);
    } else {
        ok = func_10FA58(r, p, (void *)e->alt, D_002213DC);
    }
    if ((ok & 0xFF) != 0) {
        tbl = D_00208D00;
        rec = o->rec;
        idx = func_0270A8() * 16 + 8;
        tbl += idx + (D_002096F0 - 1) * 64;
        func_039890(*(float *)(tbl + 0x20), 0, 3, o->pos30, o->pos20, o);
        rec->flags->bits |= 0x200000;
    }
}
