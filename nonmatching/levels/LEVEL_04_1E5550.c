/* USA LEVEL_04:1E5550, 280-byte candidate; measured 26 November 2026.
 * Profile pinned, assembler gnu-ee-trial; options: default.
 * Compiled 280 bytes: 29 differing words; first difference +0x28. No matching credit.
 * Remaining issue: indexed list[i] loop fixed the list/i registers and the whole loop; inline
 * Neg3/Copy3 row helpers give the retail base addressing, but the matrix build still differs in
 * FP load/store schedule: retail keeps the four loads through the row pointers (v0/v1) behind
 * earlier stores to the stack matrix while ours hoists every load first (no frame/argument
 * alias); pointer-increment helpers, profiles and sched flags tried
 * Reopen only when new caller/type evidence or a source hypothesis resolves this measured
 * difference without changing accepted bytes.
 */

/* LEVEL_04:0x1E5550 -- builds a transform from a basis and origin and binds it to each listed object. */
struct Mat {
    float m[16];
};

struct Item {
    char pad00[0x40];
    struct Mat *mat;
};

struct Cfg {
    char pad00[0x2C];
    unsigned int count;
};

extern void func_0EE368(struct Item **, struct Cfg *, struct Mat *, int, int, int);
extern void func_0EE6C8(struct Item *);

static __inline__ void Copy3(float *d, float *s)
{
    d[0] = s[0];
    d[1] = s[1];
    d[2] = s[2];
}

static __inline__ void Neg3(float *d, float *s)
{
    d[0] = -s[0];
    d[1] = -s[1];
    d[2] = -s[2];
}

void func_1E5550(float *b, float *org, struct Item **list, struct Cfg *cfg, int flag)
{
    struct Mat M;
    unsigned int i;
    struct Item *o;
    float *r1;
    float *r2;

    r1 = b + 4;
    r2 = b + 8;

    Neg3(&M.m[4], r2);
    Copy3(&M.m[8], r1);
    Copy3(&M.m[0], b);
    Copy3(&M.m[12], org);
    M.m[15] = 1.0f;
    M.m[3] = 0.0f;
    M.m[7] = 0.0f;
    M.m[11] = 0.0f;
    if (flag != 0) {
        func_0EE368(list, cfg, &M, 1, 1, 0);
    }
    for (i = 0; i < cfg->count; i++) {
        o = list[i];
        if (o != 0) {
            o->mat = &M;
            func_0EE6C8(o);
        }
    }
}
