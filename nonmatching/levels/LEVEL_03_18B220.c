/* USA LEVEL_03.REL:0x18B220, 220-byte candidate (21 November 2026).
 * Measured pinned: 23 differing words; first difference at 0x4.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    int w18;
    float f1C;
    int w20;
} Tail;

typedef struct {
    float ax;
    float ay;
    float az;
    float bx;
    float by;
    float bz;
    Tail t;
} Probe;

typedef struct {
    int w00;
    int h;
} Link;

typedef struct {
    char pad00[0x34];
    float y;
    char pad38[0x1C];
    Link *link;
} Obj;

extern void func_084D48(int h, Probe *p);
extern int func_10FA38(Probe *p, int a);

void func_18B220(Obj *o, float *out)
{
    Probe p;
    Link *l;
    Tail *tp;
    unsigned int i;
    int r;

    l = o->link;
    tp = &p.t;
    for (i = 0; i < 10; i++) {
        func_084D48(l->h, &p);
        p.bx = p.ax;
        p.by = o->y + 10.0f;
        p.bz = p.az;
        p.ay = o->y;
        p.t.w18 = 0;
        tp->f1C = 10.0f;
        p.t.w20 = 0;
        out[0] = p.ax;
        out[1] = p.ay;
        out[2] = p.az;
        r = func_10FA38(&p, 0);
        if (r == -1) {
            break;
        }
    }
}
