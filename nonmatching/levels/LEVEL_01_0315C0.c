/* USA LEVEL_01.REL:0x0315C0, 384-byte candidate (21 November 2026).
 * Measured gnu-ee-trial-divpad: 19 differing words; first difference at 0x9C.
 * Recover the observed types, statement order and lifetimes before retrying
 * the same mismatch class. No matching credit.
 */
typedef struct {
    char pad00[4];
    char *items;
    char pad08[0xC];
    unsigned short count;
} Group;

typedef struct {
    char pad00[0x10];
    char *link;
} Rec;

typedef struct {
    char pad00[0x30];
    float pos[3];
} Obj;

extern float sqrtf(float x);
extern int func_0824E8(float *out, Obj *o);
extern void func_085168(char *a, float *lo, float *hi);
extern void func_11B168(float *lo, float *hi, char *item);

static __inline__ void SubIn(float *d, float *s)
{
    d[0] = d[0] - s[0];
    d[1] = d[1] - s[1];
    d[2] = d[2] - s[2];
}

int func_0315C0(float *lo, float *hi, Obj *o, Rec *r, Group *g)
{
    float v[3];
    float len;
    unsigned int i;

    if (r->link == 0)
        return 0;
    if (func_0824E8(v, o) == 0)
        return 0;
    SubIn(v, o->pos);
    len = sqrtf(v[0] * v[0] + v[1] * v[1] + v[2] * v[2]);
    func_085168(r->link, lo, hi);
    if (g != 0) {
        for (i = 0; i < g->count; i++) {
            func_11B168(lo, hi, g->items + i * 16);
        }
    }
    lo[0] = lo[0] - len;
    lo[1] = lo[1] - len;
    lo[2] = lo[2] - len;
    hi[0] = hi[0] + len;
    hi[1] = hi[1] + len;
    hi[2] = hi[2] + len;
    return 1;
}
