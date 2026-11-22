/* USA LEVEL_02.REL:0x034758, 296-byte candidate (21 November 2026).
 * Measured pinned: 2 differing words; first difference at 0x110.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
struct Pt034758 {
    float x;
    float y;
    float z;
    float w;
};

struct Path034758 {
    char pad0[4];
    struct Pt034758 *pts;
    char pad8[0xC];
    unsigned short count;
};

struct Side034758 {
    char pad0[4];
    struct Pt034758 *pts;
};

struct Obj034758 {
    char pad0[0x18];
    struct Path034758 *path;
    struct Side034758 *side;
    char pad20[0xC];
    unsigned char cur;
};

extern int func_0348A0(struct Obj034758 *o, float *p, int idx, int flag);
extern int func_035480(struct Obj034758 *o, float *p, int idx);

int func_034758(struct Obj034758 *o, float *p)
{
    int idx;
    int best;
    unsigned int i;
    unsigned int n;
    float bestd;
    float d;
    struct Path034758 *path;
    struct Side034758 *side;
    float px;
    float pz;
    float dx;
    float dz;
    struct Pt034758 *pa;
    struct Pt034758 *a;
    struct Pt034758 *b;

    idx = func_0348A0(o, p, o->cur, 0);
    if (idx == o->cur) {
        if (func_035480(o, p, idx) != 0) {
            return idx;
        }
        path = o->path;
        side = o->side;
        best = -1;
        bestd = 10000.0f;
        n = path->count - 2;
        for (i = 0; i < n; i++) {
            a = &path->pts[i];
            d = (a->x - p[0]) * (a->x - p[0]) + (a->z - p[2]) * (a->z - p[2]);
            if (d < bestd) {
                bestd = d;
                best = i;
            }
            b = (struct Pt034758 *)((i << 4) + (int)side->pts);
            d = (b->x - p[0]) * (b->x - p[0]) + (b->z - p[2]) * (b->z - p[2]);
            if (d < bestd) {
                bestd = d;
                best = i;
            }
        }
        idx = best & 0xFF;
    }
    return idx;
}
