/* USA LEVEL_01.REL:0x158AB0, 352-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad -mno-check-zero-division: 12 differing words;
 * first difference at 0x18.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct V3_158AB0 {
    float x;
    float y;
    float z;
};

struct Cfg158AB0 {
    int w0;
    float f04;
    struct V3_158AB0 arr[0x3B];
};

struct Obj158AB0 {
    char pad00[0x58];
    struct Cfg158AB0 *p58;
    char pad5C[0x14];
    float f70;
};

extern unsigned int D_001F6474;
extern int D_0020744C;

extern int rand(void);
extern int func_099328(unsigned int j, int z);
extern void func_09A7C0(int h, struct V3_158AB0 *p, int tbl, unsigned int color, int z, float a, float b);

static __inline__ void Scatter(struct V3_158AB0 *p, int tbl, unsigned int color)
{
    unsigned int j;
    unsigned int m;

    for (j = 0; j < 1; j++) {
        m = D_001F6474 & (1 << j);
        if (m) {
            func_09A7C0(func_099328(j, 0), p, tbl, color, 0, 0.3f, 0.3f);
        }
    }
}

void func_158AB0(struct Obj158AB0 *o)
{
    struct Cfg158AB0 *c;
    unsigned int i;
    unsigned int color;
    int range;

    c = o->p58;
    range = -3351023;
    for (i = 0; i < 0x3B; i++) {
        color = (((rand() % range) + 0x99FF7788) & 0xFFFFFF) | ((int)(o->f70 / c->f04 * 255.0f) << 24);
        Scatter(&c->arr[i], D_0020744C, color);
    }
}
