/* USA LEVEL_04:197780, 240-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 240 bytes: 8 differing words; first difference +0x30. No matching credit.
 * Remaining issue: inline InitBody(Body *b, owner) keeps the r+4 body pointer (240 B now) and
 * one-element-array globals keep the global/bits_78 loads behind the stores (48 -> 8 w); left:
 * sb 0xE / sw 0x10 order after memset and v0/v1 swap of the flags word vs vtable address (all 24
 * store placements, 4 float positions measured)
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_04:0x197780 -- clears and wires the object's record, hooks the object's handler and sets two bit fields. */
typedef struct {
    int w_00;
    char pad04[0xA];
    char b_0E;
    char pad0F;
    void *o_10;
    int w_14;
    char pad18[0x4C];
} Body;

typedef struct {
    char *vt;
    Body b;
} Rec;

typedef struct {
    char pad00[0xDC];
    int w_DC;
} Sub;

typedef struct {
    char pad00[0x30];
    float pos[3];
    char pad3C[0xC];
    Sub *sub_48;
    char pad4C[0xC];
    Rec *rec_58;
    char pad5C[8];
    unsigned int flags_64;
    char pad68[4];
    unsigned int w_6C;
    char pad70[8];
    unsigned int bits_78;
} Obj;

extern unsigned int D_00221E14[1];
extern unsigned int D_002B25DC[1];
extern char D_0023D1E0[];
extern void func_197F80(void);
extern void *memset(void *p, int c, unsigned n);
extern void func_013FF0(float *p, int a, int b, float x);

static __inline__ void InitBody(Body *b, void *owner)
{
    b->o_10 = owner;
    b->b_0E = 2;
    b->w_14 = 0;
}

int func_197780(Obj *o)
{
    Rec *r;

    r = o->rec_58;
    memset(r, 0, 0x64);
    InitBody(&r->b, o);
    r->b.w_00 = 0;
    func_013FF0(o->pos, 0, 0, 0.20000000298023224f);
    o->flags_64 |= 0x20;
    r->vt = D_0023D1E0;
    o->sub_48->w_DC = (int)func_197F80;
    o->w_6C = 0x88888888;
    *(unsigned char *)((char *)o + 0x46) = 0;
    D_00221E14[0] = (D_00221E14[0] & 0xF800FFFF) | (D_002B25DC[0] << 16);
    o->bits_78 = (o->bits_78 & 0xFFF0FFFF) | 0x20000;
    return 1;
}
